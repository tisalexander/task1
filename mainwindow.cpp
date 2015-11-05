#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QDebug>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	m_worker.setData(&m_data);
	m_worker.moveToThread(&m_thread);

	m_thread.start();

	connect();
}

MainWindow::~MainWindow()
{
	delete ui;

	m_thread.quit();
	m_thread.wait();
}

void MainWindow::connect()
{
	QObject::connect(ui->pushButton, SIGNAL(clicked(bool)),
					 &m_worker, SLOT(fillData()));

	QObject::connect(ui->pushButton, SIGNAL(clicked(bool)),
					 SLOT(onClick()));
}

void MainWindow::onClick()
{
	qDebug() << "GUI Tread: " << QThread::currentThreadId() << "\n";
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "data.h"
#include "worker.h"

#include <QtGui/QMainWindow>
#include <QtCore/QThread>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void onClick();

private:
	Ui::MainWindow *ui;
	QThread m_thread;
	Data m_data;
	Worker m_worker;

	void connect();
};

#endif // MAINWINDOW_H

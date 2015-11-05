#ifndef TASK1_WORKER_H
#define TASK1_WORKER_H

#include <QtCore/QObject>

class Data;

class Worker : public QObject
{
	Q_OBJECT

public:
	Worker();

	void setData(Data *data);

public slots:
	void fillData();

private:
	Data *m_pData;
};

#endif // TASK1_WORKER_H

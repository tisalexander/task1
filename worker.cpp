#include "worker.h"

#include "data.h"
#include <QtCore/QDebug>
#include <QtCore/QThread>
#include <QtCore/QVector>

/*------- Worker ------------------------------------------------------------*/

Worker::Worker()
{
	m_pData = 0;
}

void Worker::setData(Data *data)
{
	m_pData = data;
}

void Worker::fillData()
{
	if (!m_pData) {
		return;
	}

	QVector<float> *vector = m_pData->vector();

	int size = vector->size();
	vector->append((float(size + 1)));

	qDebug() << "Thread: " << QThread::currentThreadId();
	qDebug() << "Vector size: " << size << "\n";
}

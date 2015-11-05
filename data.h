#ifndef TASK1_DATA_H
#define TASK1_DATA_H

#include <QtCore/QVector>

class Data
{
public:
	Data();

	QVector<float> *vector();

private:
	QVector<float> m_vector;
};

#endif // TASK1_DATA_H

#include "data.h"

/*------- Data --------------------------------------------------------------*/

Data::Data()
{
}

QVector<float> *Data::vector()
{
	return &m_vector;
}

#include <iostream>
#include "Variable.h"

bool Variable::IsLValue()
{
	return true;
}

void Variable::Assign(double value)
{
	storage_.SetValue(id_,value);
}

double Variable::Calc()
{
	double val = 0.0;
	if (storage_.IsInit(id_))
	{
		val = storage_.GetValue(id_);
	}else
	{
		std::cout<< "����δ��ʼ����"<<std::endl;
	}
	return val;
}

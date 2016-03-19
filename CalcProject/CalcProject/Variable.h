#ifndef VARIABLE_H
#define VARIABLE_H
#include "Node.h"
#include "Storage.h"

//变量节点
class Variable :public Node
{
public:
	Variable(unsigned int id,Storage& storage):id_(id),storage_(storage)
	{
		
	}
	~Variable();
	bool IsLValue();
	void Assign(double value);
	double Calc();
private:
	Storage &storage_;
	const unsigned int id_;
};
#endif


#ifndef NUMBERNODE_H
#define NUMBERNODE_H
#include "Node.h"

//��ֵ�ڵ�
class NumberNode:public Node
{
public:
	NumberNode(double number);
	~NumberNode();
	double Calc();
private:
	double number_;
};
#endif
#ifndef NUMBERNODE_H
#define NUMBERNODE_H
#include "Node.h"

//数值节点
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
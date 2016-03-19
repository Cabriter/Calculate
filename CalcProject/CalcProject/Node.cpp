#include <iostream>
#include "Node.h"

Node::Node()
{

}

Node::~Node()
{

}

double Node::Calc()
{
	return 0;
}

bool Node::IsLValue()
{
	return false;
}

void Node::Assign(double value)
{
	std::cout<<"不支持复制操作！"<<std::endl;
}

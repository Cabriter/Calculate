#ifndef SUNMODE_H
#define SUNMODE_H

#include "MultipleNode.h"
//左结合加减法节点
class SumNode:public MultipleNode
{
public:
	SumNode(Node* node):MultipleNode(node){}
	double Calc();
};
#endif



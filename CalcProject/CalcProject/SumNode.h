#ifndef SUNMODE_H
#define SUNMODE_H

#include "MultipleNode.h"
//���ϼӼ����ڵ�
class SumNode:public MultipleNode
{
public:
	SumNode(Node* node):MultipleNode(node){}
	double Calc();
};
#endif



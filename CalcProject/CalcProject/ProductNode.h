#ifndef PRODUCTNODE_H
#define PRODUCTNODE_H

#include "MultipleNode.h"
//���ϳ˳����ڵ�
class ProductNode:public MultipleNode
{
public:
	ProductNode(Node* node):MultipleNode(node){}
	double Calc();
};
#endif



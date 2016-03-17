#ifndef PRODUCTNODE_H
#define PRODUCTNODE_H

#include "MultipleNode.h"
//左结合乘除法节点
class ProductNode:public MultipleNode
{
public:
	ProductNode(Node* node):MultipleNode(node){}
	double Calc();
};
#endif



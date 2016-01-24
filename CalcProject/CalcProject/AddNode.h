#ifndef ADDNODE_H
#define ADDNODE_H
#include "BinaryNode.h"

//加法节点
class AddNode:public BinaryNode
{
public:
	AddNode(Node* left,Node* right):BinaryNode(left,right){};
	virtual double Calc();
};

#endif
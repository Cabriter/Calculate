#ifndef ADDNODE_H
#define ADDNODE_H
#include "BinaryNode.h"

//�ӷ��ڵ�
class AddNode:public BinaryNode
{
public:
	AddNode(Node* left,Node* right):BinaryNode(left,right){};
	virtual double Calc();
};

#endif
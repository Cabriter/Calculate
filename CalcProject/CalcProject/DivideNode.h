#ifndef DIVIDENODE_H
#define DIVIDENODE_H
#include "BinaryNode.h"
//�����ڵ�
class DivideNode :
	public BinaryNode
{
public:
	DivideNode(Node *left,Node* right):BinaryNode(left,right){};
	~DivideNode();
	virtual double Calc();
};
#endif


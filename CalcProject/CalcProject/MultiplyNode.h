#ifndef MULTIPLYNODE_H
#define MULTIPLYNODE_H
#include "BinaryNode.h"
//�˷��ڵ�
class MultiplyNode :
	public BinaryNode
{
public:
	MultiplyNode(Node *left,Node* right):BinaryNode(left,right){};
	~MultiplyNode();
	virtual double Calc();
};
#endif


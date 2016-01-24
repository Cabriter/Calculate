#ifndef MULTIPLYNODE_H
#define MULTIPLYNODE_H
#include "BinaryNode.h"
//³Ë·¨½Úµã
class MultiplyNode :
	public BinaryNode
{
public:
	MultiplyNode(Node *left,Node* right):BinaryNode(left,right){};
	~MultiplyNode();
	virtual double Calc();
};
#endif


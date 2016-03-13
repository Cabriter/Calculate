#ifndef DIVIDENODE_H
#define DIVIDENODE_H
#include "BinaryNode.h"

//³ý·¨½Úµã
class DivideNode :
	public BinaryNode
{
public:
	DivideNode(Node *left,Node* right):BinaryNode(left,right){};
	virtual double Calc();
};
#endif


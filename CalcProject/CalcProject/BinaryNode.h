#ifndef BINARYNODE_H
#define BINARYNODE_H
#include "Node.h"
//��Ԫ�ڵ���
class BinaryNode:public Node
{
public:
	BinaryNode(Node* left,Node* right):left_(left),right_(right){};
	~BinaryNode();
	//virtual double Calc();
protected:
	Node* left_;
	Node* right_;
};
#endif
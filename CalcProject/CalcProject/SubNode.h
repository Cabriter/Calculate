#ifndef SUBNODE_H
#define SUBNODE_H
#include "BinaryNode.h"

//�����ڵ�
class SubNode : public BinaryNode
{
public:
	SubNode(Node *left,Node* right):BinaryNode(left,right){};
	~SubNode();
	virtual double Calc();
private:

};
#endif
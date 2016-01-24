#ifndef SUBNODE_H
#define SUBNODE_H
#include "BinaryNode.h"

//¼õ·¨½Úµã
class SubNode : public BinaryNode
{
public:
	SubNode(Node *left,Node* right):BinaryNode(left,right){};
	~SubNode();
	virtual double Calc();
private:

};
#endif
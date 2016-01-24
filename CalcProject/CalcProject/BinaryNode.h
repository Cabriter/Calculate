#ifndef BINARYNODE_H
#define BINARYNODE_H
#include "Node.h"
//二元节点类
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
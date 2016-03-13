#ifndef UNARYNODE_H
#define UNARYNODE_H
#include "Node.h"

//一元节点
class UnaryNode : public Node
{
public:
	UnaryNode(Node* child):child_(child){}
	~UnaryNode();
protected:
	Node* child_;
};
#endif


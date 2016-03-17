#ifndef MULTIPLE_NODE
#define MULTIPLE_NODE
#include "Node.h"
#include <vector>

class MultipleNode:public Node
{
public:
	MultipleNode(Node* node);
	~MultipleNode();
	void AppendChild(Node* node,bool positve);
protected:
	std::vector<Node*> childs_;
	std::vector<bool> positves_;
};
#endif




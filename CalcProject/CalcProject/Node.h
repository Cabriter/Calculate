#ifndef NODE_H
#define NODE_H
//����
class Node
{
public:
	Node();
	~Node();
	virtual double Calc();
	virtual bool IsLValue();
	virtual void Assign(double value);
};

#endif
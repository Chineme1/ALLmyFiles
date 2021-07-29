#include <iostream>
class Node
{
	public:
		Node(int i) : val(i), left(0), right(0) {}
		int val;
		Node *left, *right;
};

class Tree
{
	public:
		Tree(void) : root(0) {}
		void insertNode(int i);
	private:
		Node *root;
		void insertNodeAt(Node*& p, int i);
};

void Tree::insertNode(int i)
{
	insertNodeAt(root, i);
}

void Tree::insertNodeAt(Node*&p, int i)
{
	if (p==0)
	{
		p = new Node(i);
	}
	else
	{
		if( i <p->val)
		{
			insertNodeAt(p->left, i);
		}
		else if (i> p->val)
		{
			insertNodeAt(p->right, i);
		}
		else
		{
		}
	}

}



int main()
{
	Tree t;
	t.insertNode(43);
	t.insertNode(11);
	t.insertNode(82);
	t.insertNode(77);
	t.insertNode(47);
	t.insertNode(65);
	t.insertNode(25);
}

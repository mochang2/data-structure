// binary tree traversal methods

#include <iostream>
#include "arrayQueue.h"
#include "binaryTreeNode.h"
#include "myExceptions.h"

using namespace std;

template <class T>
void visit(binaryTreeNode<T>* x)
{// visit node *x, just output element field.
	cout << x->element << ' ';
}

template <class T>
void preOrder(binaryTreeNode<T>* t)
{
	//Complete the code

	if (t != NULL)
	{
		visit(t);                 // visit tree root
		preOrder(t->leftChild);   // do left subtree
		preOrder(t->rightChild);  // do right subtree
	}
}

template <class T>
void inOrder(binaryTreeNode<T>* t)
{
	if (t != NULL)
	{
		inOrder(t->leftChild);   // do left subtree
		visit(t);                 // visit tree root
		inOrder(t->rightChild);  // do right subtree
	}
}

template <class T>
void postOrder(binaryTreeNode<T>* t)
{
	if (t != NULL)
	{
		postOrder(t->leftChild);   // do left subtree
		postOrder(t->rightChild);  // do right subtree
		visit(t);                 // visit tree root
	}
}

template <class T>
void levelOrder(binaryTreeNode<T>* t)
{
	arrayQueue<binaryTreeNode<T>*> q;

	while (t)
	{
		visit(t);
		if (t->leftChild)
			q.push(t->leftChild);
		if (t->rightChild)
			q.push(t->rightChild);
		try { t = q.front(); }
		catch (queueEmpty empty)
		{
			cout << endl;
			empty.outputMessage();
			//cout << "\nAll elements are printed" << endl;
		}
		try { q.pop(); }
		catch (queueEmpty)
		{
			return;
		}
	}
}

int main(void)
{
	/*
	// Sample: create a binary tree: Sample
	binaryTreeNode<int> *top, *left, *right;
	left = new binaryTreeNode<int> (4);
	right = new binaryTreeNode<int> (5);
	head = new binaryTreeNode<int> (2, y, z);

	// Sample: traverse x in all ways
	cout << "Inorder: ";
	inOrder(head);
	cout << endl;
	*/

	/* Your input tree:
	 *
	 *          1
	 *	      / \
	 *        2   3
	 *       / \
	 *      4   5
	 *
	 */

	 /* Your output:
	  *
	  * $> ./binaryTreeTraversals
	  *
	  *     Inorder: 4 2 5 1 3
	  *     Preorder: 1 2 4 5 3
	  *     Postorder: 4 5 2 3 1
	  *     Level order: 1 2 3 4 5
	  *
	  */

	  //Complete the code below

	binaryTreeNode<int> * c,* d,* e, * a, * b;
	c = new binaryTreeNode<int>(3);
	d = new binaryTreeNode<int>(4);
	e = new binaryTreeNode<int>(5);
	b = new binaryTreeNode<int>(2, d, e);
	a = new binaryTreeNode<int>(1, b, c);

	cout << "Inorder: ";
	inOrder(a);
	cout << endl;

	cout << "PreOrder: ";
	preOrder(a);
	cout << endl;
	
	cout << "PostOrder: ";
	postOrder(a);
	cout << endl;

	cout << "LevelOrder: ";
	levelOrder(a);
	cout << endl;



	return 0;
}

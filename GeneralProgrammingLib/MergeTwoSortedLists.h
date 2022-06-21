#pragma once

class Node
{
public:
	Node(int data)
	{
		_data = data;
		_next = nullptr;
	}

	int _data;
	Node* _next;
};

Node* MergeSortedListsRecursively(Node* head1, Node* head2);
Node* MergeSortedListsIteratively(Node* head1, Node* head2);
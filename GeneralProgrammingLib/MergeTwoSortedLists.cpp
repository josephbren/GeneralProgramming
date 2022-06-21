#include "pch.h"

#include "MergeTwoSortedLists.h"

/*
	Recursive solution
*/
Node* MergeSortedListsRecursively(Node* list1, Node* list2)
{
	// Handle base case
	if (!list1) return list2;
	if (!list2)	return list1;

	if (list1->_data < list2->_data)
	{
		list1->_next = MergeSortedListsRecursively(list1->_next, list2);
		return list1;
	}
	else
	{
		list2->_next = MergeSortedListsRecursively(list1, list2->_next);
		return list2;
	}
}

/*
	Iterative solution
*/

Node* MergeSortedListsIteratively(Node* head1, Node* head2)
{
	Node* dummy = new Node(-1);
	Node* prevNode = dummy;

	while (head1 && head2)
	{
		if (head1->_data < head2->_data)
		{
			prevNode->_next = head1;
			head1 = head1->_next;
		}
		else
		{
			prevNode->_next = head2;
			head2 = head2->_next;
		}

		prevNode = prevNode->_next;
	}

	// If one list was longer than the other, add the rest to the end
	if (head1) prevNode->_next = head1;
	if (head2) prevNode->_next = head2;

	Node* res = dummy->_next;
	delete dummy;
	return res;
}

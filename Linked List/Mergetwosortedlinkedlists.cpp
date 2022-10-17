
#include <iostream>
using namespace std;

/* Link list Node */
struct Node {
	int key;
	struct Node* next;
};

// Given two non-empty linked lists 'a' and 'b'
Node* sortedMerge(Node* a, Node* b)
{
	// Reverse Linked List 'a'
	a = reverseList(a);
	// Reverse Linked List 'b'
	b = reverseList(b);
	// Initialize head of resultant list
	Node* head = NULL;
	Node* temp;
	// Traverse both lists while both of them
	// have nodes.
	while (a != NULL && b != NULL) {
		// If a's current value is greater than or equal to
		// b's current value.
		if (a->key >= b->key) {
			// Store next of current Node in first list
			temp = a->next;
			// Add 'a' at the front of resultant list
			a->next = head;
			// Make 'a' - head of the result list
			head = a;
			// Move ahead in first list
			a = temp;
		}
		
		// If b's value is greater. Below steps are similar
		// to above (Only 'a' is replaced with 'b')
		else {
			temp = b->next;
			b->next = head;
			head = b;
			b = temp;
		}
	}

	// If second list reached end, but first list has
	// nodes. Add remaining nodes of first list at the
	// beginning of result list
	while (a != NULL) {
		temp = a->next;
		a->next = head;
		head = a;
		a = temp;
	}

	// If first list reached end, but second list has
	// nodes. Add remaining nodes of second list at the
	// beginning of result list
	while (b != NULL) {
		temp = b->next;
		b->next = head;
		head = b;
		b = temp;
	}
	// Return the head of the result list
	return head;
}

/* Function to print Nodes in a given linked list */
void printList(struct Node* Node)
{
	while (Node != NULL) {
		cout << Node->key << " ";
		Node = Node->next;
	}
}


Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}


int main()
{

	struct Node* res = NULL;

	Node* a = newNode(5);
	a->next = newNode(10);
	a->next->next = newNode(15);
	a->next->next->next = newNode(40);

	Node* b = newNode(2);
	b->next = newNode(3);
	b->next->next = newNode(20);

	cout << "List A before merge: \n";
	printList(a);

	cout << "\nList B before merge: \n";
	printList(b);

	/* merge 2 sorted Linked Lists */
	res = sortedMerge(a, b);

	cout << "\nMerged Linked List is: \n";
	printList(res);

	return 0;
}


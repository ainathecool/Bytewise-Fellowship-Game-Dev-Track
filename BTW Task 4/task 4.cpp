#include<iostream>
using namespace std;

//pointers, arrays, linked lists


void arrayQueens()
{
	int queens[4][4] = {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	cout << "4 queens problem initial board: \n";
	for (int i = 0; i < 4;i++) {
		cout << endl;
		for (int j = 0; j < 4; j++) {
			cout << "|" << queens[i][j];
		}
		cout << "|";
	}

	//4 queens problem solution
	queens[0][2] = 1;
	queens[1][0] = 1;
	queens[2][3] = 1;
	queens[3][1] = 1;


	cout << "\n\n4 queens problem solution board: \n";

	for (int i = 0; i < 4;i++) {
		cout << endl;
		for (int j = 0; j < 4; j++) {
			cout << "|" << queens[i][j];
		}
		cout << "|";
	}

	//using pointer notation - array pointer relationship

	int* q = NULL;
	q = &queens[0][0];

	cout << "\n\n4 queens problem solution board  through pointers: \n";

	for (int i = 0; i < 4;i++) {
		cout << endl;
		for (int j = 0; j < 4; j++) {
			cout << "|" << *(q + (i * 4) + j);
		}
		cout << "|";
	}
}

//linked list 

class Node {
public:
	int data;
	Node* next;

};

//print link list data
void printLinkedList(Node* n)
{
	cout << endl <<"printing ll: \n";
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}


void ReverseLinkedList(Node* n) {

	Node* current = NULL, *prev = NULL, *next = NULL;

	current = n;

	while (current != NULL) {

		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	n = prev;
	printLinkedList(n);
}

void LinkedList()
{
	Node* head = NULL;
	Node* second = NULL, * third = NULL, * fourth = NULL;

	//creating new nodes 
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();

	head->data = 10; head->next = second;
	second->data = 20; second->next = third;
	third->data = 30; third->next = fourth;
	fourth->data = 40; fourth->next = NULL; //assign head again for doubly ll

	printLinkedList(head);
	cout << "\nReversed: ";
	ReverseLinkedList(head);

}

// This is code is contributed by rathbhupendra

int main()
{


	arrayQueens();
	LinkedList();

	return 0;

}

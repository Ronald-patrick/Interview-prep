#include<bits/stdc++.h>
using namespace std;

class Node{

	public:
	Node *next;
	int data;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

class SinglyLinkedList{
	public:
	Node* head;

	SinglyLinkedList(){
		head = NULL;
	}

	void insertAtHead(int val){
		Node* newNode = new Node(val);
		newNode->next = head;
		head = newNode;
	}

	void insert(int val)
	{
		Node* newNode = new Node(val);
		if(head == NULL)
		{
			head = newNode;
			return;
		}

		Node* temp = head;

		while(temp->next!=NULL)
		{
			temp = temp->next;
		}	
		temp->next = newNode;
	}

	void deleteNode(int val)
	{
		Node* curr = head;
		Node* prev= NULL;

		// If head node itself to be deleted
		if (curr != NULL && curr->data == val)
    	{
        	head = curr->next;
        	delete curr;       
        	return;
    	}

		while(curr!=NULL && curr->data!=val)
		{
			prev = curr;
			curr = curr->next;
		}

		// NOT FOUND
		if(curr == NULL)
		return;

		prev->next = curr->next;
		delete curr;
	}


	void printLL()
	{
		Node* temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}
};



int main()
{
	SinglyLinkedList ll;
	ll.insert(10);
	ll.insert(20);
	ll.insert(30);
	ll.insert(40);
	ll.insert(50);
	ll.insert(60);
	ll.deleteNode(10);

	ll.printLL();
	return 0;
}
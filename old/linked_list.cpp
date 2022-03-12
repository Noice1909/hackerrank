#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int n){
			data =n;
			next=NULL;
		}
};
Node *Head=NULL;
void addNode(int n){
	if(Head->next==NULL){
		Head->data=n;
		Head->next=NULL;
	}
	else{
		Node* temp = Head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next= new Node (n);
	}
}
void print(){
	if(Head->next==NULL){
		cout<<"NO ELEMENT IN LINKED LIST."<<endl;
	}
	else{
		Node* temp= Head;
		while(temp->next!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
	}
	
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		addNode(temp);
	}
	print();
}

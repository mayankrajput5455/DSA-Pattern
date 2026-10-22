#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp-> data <<"->";
            temp = temp->next;
        }
        cout<<"NULL"<< endl;
    }

    Node* removeNthElementFromList(int n){
        Node* dummy = new Node(0);
        dummy -> next = head;
        int len = 0;
        Node* l = head;
        
        while(l != NULL){
            len++;
            l = l -> next;
        }

        int d = len - n + 1;

        Node* prev = dummy; 
        Node* curr = head;

        int i = 0;

        while(i < (d-1)){
            curr = curr -> next;
            prev = prev -> next;
            i++;
        }
        prev -> next = curr -> next;
        return dummy -> next;
    }
};

int main(){
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.printLL();

    ll.removeNthElementFromList(2);

    ll.printLL();
    return 0;
}
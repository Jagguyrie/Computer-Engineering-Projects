#include<iostream>
#include<stdlib.h>
using namespace std;

void cs() {
    system("CLS");
}

struct node *front = NULL;

bool isempty() {
    return(front == NULL);
}

struct node {
    int data;
    struct node *next;
};

void display() {
    node *ptr;
    ptr = front;
    while(ptr != NULL) {
        cout<<"\nData: "<<ptr->data;
        ptr = ptr->next;
    }
    cout<<"\n";
}

void enQ() {
    node *tmp;
    node *newn = (node *)malloc(sizeof(node));
    cout<<"Enter element to add: ";
    cin>>newn->data;
    cout<<"Element inserted to the rear.\n";
    if(isempty()) {
        front = newn;
        newn->next = NULL;
    }
    else {
        tmp = front;
        while(tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = newn;
        newn->next = NULL;
    }
}

void deQ() {
    if(isempty()) {
        cout<<"List is empty, cannot dequeue.\n";
    }
    else {
        cout<<"Dequeued the node containing data: "<<front->data<<endl;
        front = front->next;
    }
}

int main() {
    int con, dec;
    while(dec != 4) {
        cout<<"What operation do you want to perform?\n1.Enqueue\n2.Display\n3.Dequeue\n4.Exit.\n";
        cin>>dec;
        switch(dec) {
            case 1: {
                //cs();
                enQ();
                break;
            }
            case 2: {
                //cs();
                display();
                break;
            }
            case 3: {
                //cs();
                deQ();
                break;
            }
            /*default: {
                cout<<"Incorrect input.\n";
                break;
            }*/
        }
    }
}
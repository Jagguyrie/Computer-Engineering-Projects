#include<iostream>
#include<stdlib.h>
using namespace std;

void clr() {
    system("CLS");
}

struct node {
    int data;
    struct node *next;
};

struct node * top = NULL;

bool isempty() {
    return(top == NULL);
}

void display() {
    node *ptr;
    ptr = top;
    //clr();
    cout<<"Top:";
    while(ptr!=NULL) {
        cout<<"\nData:"<<ptr->data;
        ptr = ptr->next;
    }
    cout<<"\n\n"<<endl;
}

void ins() {
    node *tmp;
    node *newn = (node *)malloc(sizeof(node));
    cout<<"Enter element to add: ";
    cin>>newn->data;
    cout<<"Inserted element to the end.\n";
    if(isempty()) {
        top = newn;
        newn->next = NULL;
    }
    else {
        tmp = top;
        newn->next = tmp;
        top = newn;
    }
}

void del() {
    if(isempty()) {
        cout<<"List is empty, cannot perfrom deletion.\n";
    }
    else {
        node *tmp = top;
        cout<<"Popping node having value: "<<tmp->data<<endl;
        tmp = tmp->next;
        free(top);
        top = tmp;
    }
}

int main() {
    int con, pos, dec;
    while(dec!=4) {
        cout<<"What operation do you want to perform?\n1.Push\n2.Display\n3.Pop\n4.Exit.\n";
        cin>>dec;
        switch(dec) {
            case 1: {
                //clr();
                ins();
                break;
            }
            case 2: {
                //clr();
                display();
                break;
            }
            case 3: {
                //clr();
                del();
                break;
            }
        }
    }
}
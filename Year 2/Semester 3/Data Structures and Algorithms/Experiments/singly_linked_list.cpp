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

struct node * head = NULL;

bool isempty() {
    return(head == NULL);
}

void display() {
    node *ptr;
    ptr = head;
    //clr();
    cout<<"HEAD:";
    while(ptr!=NULL) {
        cout<<"\nData:"<<ptr->data;
        ptr = ptr->next;
    }
    cout<<"\n\n"<<endl;
}

void ins_beg() {
    node *newn = (node *)malloc(sizeof(node));
    cout<<"Enter element to add: ";
    cin>>newn->data;
    cout<<"Inserted element to the beginning\n";
    if(isempty()) {
        head = newn;
        newn->next = NULL;
    }
    else {
        newn->next = head;
        head = newn;
    }
}

void ins_end() {
    node *tmp;
    node *newn = (node *)malloc(sizeof(node));
    cout<<"Enter element to add: ";
    cin>>newn->data;
    cout<<"Inserted element to the end.\n";
    if(isempty()) {
        head = newn;
        newn->next = NULL;
    }
    else {
        tmp = head;
        while(tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = newn;
        newn->next = NULL;
    }
}

void ins_mid(int pos) {
    if(isempty()) {
        ins_beg();
    }
    else {
        node *newn = (node *)malloc(sizeof(node));
        node *tmp;
        tmp = head;
        while(pos != 1) {
            tmp = tmp->next;
            pos--;
        }
        newn->next = tmp->next;
        tmp->next = newn;
        cout<<"Enter element to add: ";
        cin>>newn->data;
    }
}

void del_beg() {
    if(isempty()) {
        cout<<"List is empty, cannot perfrom deletion.\n";
        exit(0);
    }
    node *tmp = head;
    if(tmp->next == NULL) {
        free(tmp);
        head = NULL;
        cout<<"Removed the first node, but the list in now empty.\n";
    }
    else {
        head = tmp->next;
        free(tmp);
    }

}

void del_end() {
    if(isempty()) {
        cout<<"List is empty, cannot perfrom deletion.\n";
        exit(0);
    }
    else {
        node *tmp = head;
        if(tmp->next != NULL) {
            while(tmp->next->next != NULL)
                tmp = tmp->next;
            node *deln = tmp->next;
            tmp->next = NULL;
            free(deln);
        }
        else {
            del_beg();
        }
    }
}

void del_mid(int pos) {
    if(isempty()) {
        cout<<"List is empty, cannot perfrom deletion.\n";
        exit(0);
    }
    else {
        node *tmp;
        node *pre;
        tmp = head;
        while(pos != 1) {
            pre = tmp;
            tmp = tmp->next;
            pos--;
        }
        pre->next = tmp->next;
        free(tmp);
    }
}

int main() {
    int con, pos, dec;
    while(dec!=4) {
        cout<<"What operation do you want to perform?\n1.Insertion\n2.Display\n3.Deletion\n4.Exit.\n";
        cin>>dec;
        switch(dec) {
            case 1: {
                //clr();
                cout<<"Where to insert the element?\n1.Beginning\n2.End\n3.Middle\n";
                cin>>con;
                switch(con) {
                    case 1: {
                        //clr();
                        ins_beg();
                        break;
                    }
                    case 2: {
                        //clr();
                        ins_end();
                        break;
                    }
                    case 3: {
                        //clr();
                        cout<<"Enter position for insertion of the element: ";
                        cin>>pos;
                        ins_mid(pos-1);
                        break;
                    }
                    default: {
                        cout<<"invalid\n";
                        break;
                    }
                }
                break;
            }
            case 2: {
                display();
                break;
            }
            case 3: {
                //clr();
                cout<<"Where to remove the element from?\n1.Beginning\n2.End\n3.Middle\n";
                cin>>con;
                switch(con) {
                    case 1: {
                        del_beg();
                        break;
                    }
                    case 2: {
                        del_end();
                        break;
                    }
                    case 3: {
                        cout<<"Enter position for deletion of element: ";
                        cin>>pos;
                        del_mid(pos);
                    }
                }
                //cout<<"Wait for this feature of pay $50.000.000!!!";
            }
        }
    }
}

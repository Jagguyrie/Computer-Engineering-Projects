#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
};
node *head = NULL;

void print() {
    node *ptr = head;
    while(ptr->next != NULL) {
        ptr = ptr->next;
        cout<<ptr->data<<endl;
    }
}

//3 insert cases

//3 delete cases


int main() {

}


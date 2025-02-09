//Representation of Binary Trees in memory and implementation of Binary Tree traversal algorithms
#include<iostream>
using namespace std;

struct node {
    int item;
    struct node *left;
    struct node *right;
};

int getval() {
    int val;
    cin>>val;
    return(val);
}

void inTr(struct node *root) {
    if(root == NULL)
        return;
    inTr(root->left);
    cout<<"Data: "<<root->item<<endl;
    inTr(root->right);
}

void preTr(struct node *root) {
    if(root == NULL)
        return;
    cout<<"Data: "<<root->item<<endl;
    preTr(root->left);
    preTr(root->right);
}

void posTr(struct node *root) {
    if(root == NULL)
        return;
    posTr(root->left);
    posTr(root->right);
    cout<<"Data: "<<root->item<<endl;
}

struct node *create() {
    struct node *newn = (node *)malloc(sizeof(struct node));
    cout<<"Add value to insert in new node: ";
    newn->item = getval();
    newn->left = NULL;
    newn->right = NULL;
    return newn;
}

struct node *insL(struct node *root) {
    root->left = create();
    return root->left;
}

struct node *insR(struct node *root) {
    root->right = create();
    return root->right;
}

int main() {
    struct node *root = create();
    insL(root);
    insR(root);
    insL(root->left);
    insR(root->left);
    preTr(root);
    inTr(root);
    posTr(root);
}
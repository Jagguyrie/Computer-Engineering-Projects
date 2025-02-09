#include<iostream>
using namespace std;

//create, search, delete in binary search tree
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data) {
    struct node *newn;
    newn = (struct node *)malloc(sizeof(struct node));
    newn->data;
    newn->left = NULL;
    newn->right = NULL;
    return newn;
}

void insert (struct node *root, int key) {
    struct node *prev = NULL;
    prev = root;
    while(root != NULL) {
        if(key == root->data) {
            cout<<"Element already in Binary Search Tree"<<endl;
            return;    
        }
        else if(key < root->data) {
            root = root->left;
            cout<<"rooting left";
        }
        else {
            root = root->right;
            cout<<"rooting right";
        }
    }
    struct node *newn = create(key);
    if(key < prev->data)
        prev->left = newn;
    else
        prev->right = newn;
}

struct node *search(struct node *root, int key) {
    while(root != NULL) {
        cout<<root->data;
        if(key == root->data)
            return root;
        else if(key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return NULL;
}

struct node *iOPred(struct node *root) {
    if(root->left != NULL) {
        root = root->left;
        while(root->right != NULL)
            root = root->right;
    }
    else {
        root = root->right;
        while(root->left != NULL)
            root = root->left;
    }
    return root;
}

struct node *del(struct node *root, int val) {
    struct node *iP;
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL)
        free(root);
        return NULL;
    if(val < root->data)
        root-> left = del(root->left, val);
    else if (val > root->data)
    root-> right = del(root->right, val);

    else {
        iP = iOPred(root);
        root->data = iP->data;
        root->left = del(root->left, iP->data);
    }
    return root;
}

int main() {
    int val, ch;
    node *root = NULL, *tmp = NULL;
    cout<<"Enter root value:\n";
    cin>>val;
    root = create(val);
    while(ch != 4) {
        cout<<"What operation to perform?\n1. Insert\n2. Search\n3. Delete\n4. Exit\n"<<endl;
        cin>>ch;
        switch(ch) {
            case 1: {
                cout<<"Enter insert value:\t";
                cin>>val;
                insert(root, val);
                break;
            }
            case 2: {
                cout<<"Enter search value:\t";
                cin>>val;
                tmp = search(root, val);
                if(tmp == NULL)
                    cout<<"\nNode not found\n";
                else
                    cout<<"\nNode found with address: "<<tmp<<endl;
                break;
            }
            case 3: {
                cout<<"Enter value to delete:\t"<<endl;
                cin>>val;
                del(root, val);
                break;
            }
        }
    }
    return 0;
}
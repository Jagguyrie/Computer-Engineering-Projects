#include<iostream>
using namespace std;

int f = -1;
int r = -1;
int pq[5];
int n = 5;

bool isEmpty() {
    if(r == -1 && f == -1)
        return true;
    else
        return false;
}

bool isFull() {
    if(r == n-1)
        return true;
    else
        return false;
}

void ins(int ele) {
    int t;
    bool e = isEmpty();
    bool f = isFull();
    if(e) {
        r = 0;
        f = 0;
        pq[r] = ele;
        cout<<"Inserted "<<ele<<endl;
    }
    else {
        r++;
        pq[r] = ele;
        cout<<"Inserted "<<ele<<endl;
        for(int i = r; i<=f; i++) {
            if(pq[i]<pq[i-1]) {
                t = pq[i-1];
                pq[i-1] = pq[i];
                pq[i] = t;
            }
            else {}
        }
    }
    if(f)
        cout<<"Queue Overflow\n";
    else {}
}

void delQ() {
    cout<<"The element deleted is:\t"<<pq[f];
}

void disQ() {
    cout<<"The ascending queue is:\t";
    for(int i = f; i<=r; i++) {
        cout<<pq[i]<<" ";
    }
}

int main() {
    int con, val;
    while(con!=4) {
        cout<<"What do you want to perform?\n1. Insertion,\n2. Deletion\n3. Display,\n4. Exit.\n";
        cin>>con;
        switch(con) {
            case 1:
                cout<<"Enter element to insert:\t";
                cin>>val;
                ins(val);
                break;
            case 2:
                delQ();
                break;
            case 3:
                disQ();
                break;
            case 4:
                exit(0);
        }
    }
}
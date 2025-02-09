#include<iostream>
//
using namespace std;

int cq[8];
int f = -1;
int r = -1;
int n = 8;

void inCQ(int val) {
    if((f == 0 && r == n-1) || (f == (r + 1)%n)) {
        cout<<"Queue Overflow\n";
        return;
    }
    if (f == -1 && r == -1) {
        f = 0;
        r = 0;
    }
    if(f>-1 && r>-1) {
        cq[r] = val;
        cout<<"Inserted "<<val<<endl;
        (++r)%8;
    }
} 

void delCQ() {
    if(f == -1 && r == -1) {
        cout<<"Queue Underflow\n";
        return;
    }
    cout<<"Element deleted from the queue is: "<<cq[f]<<endl;
    if(f == r) {
        f = -1;
        r = -1;
    }
    else {
        if(f == n-1) {
            f = 0;
        }
        else {
            (++f)%n;
        }
    }
}

void disCQ() {
    cout<<"The queue is:\t";
    for(int i=f; i!=r; i++) {
        i%=n;
        cout<<cq[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int opt, val;
    while(opt!=4) {
        cout<<"Which operation do you want to perform?\n1. Insertion,\n2. Deletion,\n3. Printing,\n4. Exit Program.\n";
        cin>>opt;
        switch(opt) {
            case 1:
                cout<<"Please enter the element you want to insert:\t";
                cin>>val;
                inCQ(val);
                break;
            case 2:
                delCQ();
                break;
            case 3:
                disCQ();
                break;
            case 4:
                exit(0);
        }
    }
}
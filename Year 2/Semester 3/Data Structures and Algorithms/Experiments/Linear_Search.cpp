#include<iostream>
using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 0;
    cout<<"Type element you want to search:\t";
    cin>>s;
    for(int i=0; i<10; i++) {
        if(a[i] == s) {
            cout<<"Element found at "<<i+1<<" position."<<endl;
        }
        else {
            cout<<"Element not found at "<<i+1<<" position.\n";
        }
    }
}

/*
#include<iostream>
using namespace std;

bool lins(int s, int a[10]) {
    bool x = false;
    int j = 0;
    for(int i; i<10; i++) {
        if(a[i] == s)
            x = true;
            j = i+1;
    }
    if(x)
        return(j);
    else
        return(-1);
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 0;
    cout<<"Type element you want to search:\t";
    cin>>s;
    int j = lins(s, a);
    switch(j) {
        case -1: {
            cout<<"Element not found.\n";
            break;
        }
        default: {
            cout<<"Element found at "<<j<<" position.\n";
        }
    }
}
*/
#include<iostream>
using namespace std;

int bin_s(int l, int m, int e, int s, int arr[10]) {
    if(arr[m] == s) {
        return(m);
    }
    else if(arr[l] == s) {
        return(l);
    }
    else if(arr[e] == s) {
        return(s);
    }
    else if(arr[m] < s) {
        l = m;
        m = (l+e)/2;
        return(bin_s(l, m, e, s, arr));
    }
    else {
        e = m;
        m = (l+e)/2;
        return(bin_s(l, m, e, s, arr));
    }
    if(m == l+1 and m == e-1) {
        return(-1);
    }
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int l, e, m, s;
    l = 0; e = 9;
    m = (l+e)/2;
    cout<<"Enter element to search:\t";
    cin>>s;
    int c = bin_s(l, m, e, s, arr);
    switch(c) {
        case -1: {
            cout<<"Element not found.\n";
            break;
        }
        default: {
            cout<<"Element "<<s<<" found at "<<++c<<" position.\n";
            break;
        }
    }
    return 0;
}
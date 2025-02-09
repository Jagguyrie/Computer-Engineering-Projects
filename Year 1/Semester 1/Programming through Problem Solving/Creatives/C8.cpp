#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void clrscr() {
    system("cls");
}
int MR(int a, int b) {
    return a*b;
}
int MI(int a,int b) {
    return ((-1)*(a*b));
}
int Mrrii(int r1, int r2,int i1,int i2) {
    string result;
    int rr, ii;
    rr = MR(r1,r2);
    ii = MI(i1,i2);
    return (rr+ii);
}
string ri(int r1,int i2, int r2,int i1) {
    string result;
    int ri,ir,s;
    ri = MR(r1,i2);
    ir = MR(i1,r2);
    s = ri + ir;
    if(s>=0) {
        result = "+" + to_string(s)+"i";
        return result;
    }
    else {
        result = to_string(s)+"i";
        return result;
    }
}
int main() {
    int r1,i1,r2,i2;
    clrscr();
    cout<<"Enter 1st complex number as 'A_B'i:\n";
    cin>>r1>>i1;
    cout<<"Enter 2nd complex number as 'A_B'i:\n";
    cin>>r2>>i2;
    cout<<"Product of the two complex numbers is : "<<Mrrii(r1,r2,i1,i2)<<ri(r1,i2,i1,r2);
}
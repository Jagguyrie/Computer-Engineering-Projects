#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float pi =  22/7, rad, dia, ar;
    char opt;
    bool rep=1;
    while(rep) {
        cout<<"Enter area of circle.\n";
        cin>>ar;
        float mid=ar/(pi);
        rad=sqrt(mid);
        dia=rad/2;
        cout<<"The radius of the circle is "<<rad<<endl;
        cout<<"The diameter of the circle is "<<dia<<endl;
        cout<<"Do you want to exit?[y]es/[n]o\n";
        cin>>opt;
        rep=(opt=='y');
    
    return 0;
}
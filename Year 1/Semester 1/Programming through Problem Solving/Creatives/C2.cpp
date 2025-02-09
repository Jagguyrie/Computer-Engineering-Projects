#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int num, sqroot=0, len=0, rev=0, sqnum=0, digsum=0, p_sq;
    bool perfect;
    cout<<"Enter an integer you want to check if it is a perfect square\n";
    cin>>num;
    if(num<0) {
        cout<<"Invalid";
    }
    else {
        sqroot=sqrt(num);
        cout<<sqroot;
    }
    p_sq = sqroot*sqroot;
    cout<<endl<<p_sq<<endl;
    perfect = (p_sq==num);
    if(perfect) {
        cout<<"The integer is a perfect square!\n";
    }
    else {
        cout<<"The integer is not a perfect square!\n";
    }
    sqnum=num*num;
    long long int t=sqnum;
    cout<<"The square of the integer is: "<<sqnum<<endl;
    while(t!=0) {
        rev+=t%10;
        digsum+=t%10;
        t/=10;
        len++;
        if(t!=0) {
            rev*=10;
        }
    }
    cout<<"Sum of the digits of the square of the input number is: "<<digsum<<endl;
    cout<<"The reverse of the square of input number is: "<<rev<<endl;
    cout<<"The square of the input number is "<<len<<" digits long.\n";
    cin.get();
    return 0;
}
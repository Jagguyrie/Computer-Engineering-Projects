#include<iostream>
using namespace std;
int main() {
    int r,c;
    char opt;
    cout<<"Enter the no. of rows an columns, resp.\n";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter elements\n";
    for(int x=0; x<r; x++) {
        for(int y=0; y<c; y++) {
            cin>>arr[x][y];
        }
    }
    cout<<"Matrix entered is:\n";
    for(int x=0; x<r; x++) {
        for(int y=0; y<c; y++) {
            cout<<arr[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<"What do want to show,(e)ven or (o)dd?\n";
    cin>>opt;
    switch(opt) {
        case 'e': {
        for(int x=0; x<r; x++) {
            for(int y=0; y<c; y++) {
                if(arr[x][y]%2!=0) {
                    arr[x][y]=0;
                }
            }
        }
        cout<<"Matrix without odd numbers:\n";
        for(int x=0; x<r; x++) {
            for(int y=0; y<c; y++) {
                cout<<arr[x][y]<<" ";
                }
                cout<<endl;
            }
        }
        break;

        case 'o': {
        for(int x=0; x<r; x++) {
            for(int y=0; y<c; y++) {
                if(arr[x][y]%2==0) {
                    arr[x][y]=0;
                }
            }
        }
        cout<<"Matrix without even numbers:\n";
        for(int x=0; x<r; x++) {
            for(int y=0; y<c; y++) {
                cout<<arr[x][y]<<" ";
                }
                cout<<endl;
            }
        }
        break;
    }
}
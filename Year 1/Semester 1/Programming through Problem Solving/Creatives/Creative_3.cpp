#include<iostream>
using namespace std;

int main() {
    int vram, rating=0, clck;
    char opt;
    string summary;
    cout<<"Do you have a dedicated GPU?(y)es/(n)o\n";
    cin>>opt;
    if(opt=='y') {
        cout<<"Enter VRAM of GPU (in GB).\n";
        cin>>vram;
    }
    cout<<"Enter CPU's clock speed (in GHz)\n";
    cin>>clck;
    cout<<"CPU is ";
    switch(clck) {
        case 0: {
            cout<<"Very Slow.\n";
            rating+=1;
            break;
        }
        case 1: {
            cout<<"Slow.\n";
            rating+=1;
            break;
        }
        case 2: {
            cout<<"Basic.\n";
            rating+=2;
            break;
        }
        case 3: {
            cout<<"Fast.\n";
            rating+=4;
            break;
        }
        case 4: {
            cout<<"Quick!\n";
            rating+=5;
            break;
        }
        case 5: {
            cout<<"Rapid!!\n";
            rating+=6;
            break;
        }
        case 6: {
            cout<<"Super Fast!!!\n";
            rating+=8;
            break;
        }
        default:
            cout<<"Enter correct value.\n";
    }
    if(opt=='y') {
        int vrat=vram/4;
        cout<<"GPU is ";
        switch(vrat) {
            case 0: {
                cout<<"Normal.\n";
                rating+=1;
                break;
            }
            case 1: {
                cout<<"Good.\n";
                rating+=2;
                break;
            }
            case 2: {
                cout<<"Nice.\n";
                rating+=4;
                break;
            }
            case 3: {
                cout<<"Cool.\n";
                rating+=6;
                break;
            }
            case 4: {
                cout<<"Perfect!\n";
                rating+=8;
                break;
            }
            default:
                cout<<"Enter valid value.\n";
        }
    }
    else {
        rating/=2;
    }
    cout<<"Rating: ";
    summary=(rating<5)?"Normal Build.":((rating<9)?"Fast Build.":((rating<12)?"Quick Build.":((rating<16)?"Rapid Build.":"Fastest Build.")));
    cout<<summary;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

struct admin {
    string id = "admin", key = "pass1234";
};

struct train {
    int train_no[6] = {11001, 11002 ,12001,12002,13001,13002};
    string train_name[6] = {"Garib Rath","Delhi Rajdhani","Shatabdi","Mumbai Rajdhani","Chennai Express","Duronto Express"};
    int t1_s[12][30] = {0};
    int t2_s[12][30] = {0};
    int t3_s[12][30] = {0};
    int t4_s[12][30] = {0};
    int t5_s[12][30] = {0};
    int t6_s[12][30] = {0};
};//0-3 - 2T AC, 4-7 - 3T AC, 8-11 - SLR

void print(int i) {
    train t;
    switch(i){
        case 0:{
            for(int z=0; z<12; z++) {
                for(int j=0; j<30; j++){
                    cout<<t.t1_s[z][j]<<" ";
                    if(j%6==5){
                    cout<<endl;
                    }
                }
                cout<<"Coach "<<z+1<<endl<<endl;
            }
            break;
        }
        case 1: {
            for(int z=0; z<12; z++) {
                for(int j=0; j<30; j++){
                    cout<<t.t2_s[z][j]<<" ";
                    if(j%6==5){
                    cout<<endl;
                    }
                }
                cout<<"Coach "<<z+1<<endl<<endl;
            }
            break;
        }
        case 2:{
            for(int z=0; z<12; z++) {
                for(int j=0; j<30; j++){
                    cout<<t.t3_s[z][j]<<" ";
                    if(j%6==5){
                    cout<<endl;
                    }
                }
                cout<<"Coach "<<z+1<<endl<<endl;
            }
            break;
        }
        case 3:{
            for(int z=0; z<12; z++) {
                for(int j=0; j<30; j++){
                    cout<<t.t4_s[z][j]<<" ";
                    if(j%6==5){
                    cout<<endl;
                    }
                }
                cout<<"Coach "<<z+1<<endl<<endl;
            }
            break;
        }
        case 4:{
            for(int z=0; z<12; z++) {
                for(int j=0; j<30; j++){
                    cout<<t.t5_s[z][j]<<" ";
                    if(j%6==5){
                    cout<<endl;
                    }
                }
                cout<<"Coach "<<z+1<<endl<<endl;
            }
            break;
        }
        case 5: {
            for(int z=0; z<12; z++) {
                for(int j=0; j<30; j++){
                    cout<<t.t6_s[z][j]<<" ";
                    if(j%6==5){
                    cout<<endl;
                    }
                }
                cout<<"Coach "<<z+1<<endl<<endl;
            }
            break;
        }
    }
}

int add_seat(int x,int y,int z, int uid, int cno, int seats) {
    struct train t;
    int s = 0;
    --cno;
    if((x == 1 && y == 1 && z == 1) || (x == 2 && y == 1 & z == 1)) {
        for(seats; seats>0; seats--){
            if(t.t1_s[cno][s] == 0){
                t.t1_s[cno][s] = uid;
                cout<<"Seat booked in coach number "<<cno+1<<" and seat number "<<s<<endl;
                //seats--;
                ++s;
                break;
            }
            else{
                ++s;
                if(s==30){
                    cout<<"Coach full\n";
                }
            }
        }
    }
    else if((x == 1 && y == 1 && z == 2) || (x == 2 && y == 1 & z == 2)) {
        while(seats!=0){
            if(t.t2_s[cno][s] == 0){
                t.t2_s[cno][s] = uid;
                cout<<"Seat booked in coach number "<<cno+1<<" and seat number "<<s<<endl;
                seats--;
                break;
            }
            else{
                ++s;
                if(s==30){
                    cout<<"Coach full\n";
                }
            }
        }
    }
    else if((x == 1 && y == 2 && z == 1) || (x == 3 && y == 1 & z == 1)) {
        while(seats!=0){
            if(t.t3_s[cno][s] == 0){
                t.t3_s[cno][s] = uid;
                cout<<"Seat booked in coach number "<<cno+1<<" and seat number "<<s<<endl;
                seats--;
                break;
            }
            else{
                ++s;
                if(s==30){
                    cout<<"Coach full\n";
                }
            }
        }
    }
    else if((x == 1 && y == 2 && z == 2) || (x == 3 && y == 1 & z == 2)) {
        while(seats!=0){
            if(t.t4_s[cno][s] == 0){
                t.t4_s[cno][s] = uid;
                cout<<"Seat booked in coach number "<<cno+1<<" and seat number "<<seats<<endl;
                seats--;
                break;
            }
            else{
                ++s;
                if(s==30){
                    cout<<"Coach full\n";
                }
            }
        }
    }
    else if((x == 2 && y == 2 && z == 1) || (x == 3 && y == 2 & z == 1)) {
        while(seats!=0){
            if(t.t5_s[cno][s] == 0){
                t.t5_s[cno][s] = uid;
                cout<<"Seat booked in coach number "<<cno+1<<" and seat number "<<s<<endl;
                seats--;
                break;
            }
            else{
                ++s;
                if(s==30){
                    cout<<"Coach full\n";
                }
            }
        }
    }
    else if((x == 2 && y == 2 && z == 2) || (x == 3 && y == 2 & z == 2)) {
        while(seats!=0){
            if(t.t6_s[cno][s] == 0){
                t.t6_s[cno][s] = uid;
                cout<<"Seat booked in coach number "<<cno+1<<" and seat number "<<s<<endl;
                seats--;
                break;
            }
            else{
                ++s;
                if(s==30){
                    cout<<"Coach full\n";
                }
            }
        }
    }
    else {
        cout << "Invalid input\n";
    }
    int back;
    cout<<"1. Back to main page\n2. Exit\n";
    cin>>back;
    return(back);
}

int booking(int id) {
    int ch,opt, start, end;
    train t;
    cout << "Welcome to Booking Portal\n";
    cout << "1. Delhi\n2. Mumbai\n3. Chennai\nEnter starting location (1-3): ";
    cin >> start;
    switch(start) {
        case 1: {
            cout << "1. Mumbai\n2. Chennai\nEnter end location (1-2): ";
            cin >> end;
            if(end == 1) {
                cout << t.train_no[0] << "\t" << t.train_name[0] << endl;
                cout << t.train_no[1] << "\t" << t.train_name[1] << endl;
            }
            else if(end == 2) {
                cout << t.train_no[2] << "\t" << t.train_name[2] << endl;
                cout << t.train_no[3] << "\t" << t.train_name[3] << endl;
            }
            else {
                cout << "Invalid input\n";
            }
            cout << "Enter an option (1-2): ";
            cin >> opt;
            break;
        }
        case 2: {
            cout << "1. Delhi\n2. Chennai\nEnter end location (1-2): ";
            cin >> end;
            if(end == 1) {
                cout << t.train_no[0] << "\t" << t.train_name[0] << endl;
                cout << t.train_no[1] << "\t" << t.train_name[1] << endl;
            }
            else if(end == 2) {
                cout << t.train_no[4] << "\t" << t.train_name[4] << endl;
                cout << t.train_no[5] << "\t" << t.train_name[5] << endl;
            }
            else {
                cout << "Invalid input\n";
            }
            cout << "Enter an option (1-2): ";
            cin >> opt;
            break;
        }
        case 3: {
            cout << "1. Delhi\n2. Mumbai\nEnter end location (1-2): ";
            cin >> end;
            if(end == 1) {
                cout << t.train_no[2] << "\t" << t.train_name[2] << endl;
                cout << t.train_no[3] << "\t" << t.train_name[3] << endl;
            }
            else if(end == 2) {
                cout << t.train_no[4] << "\t" << t.train_name[4] << endl;
                cout << t.train_no[5] << "\t" << t.train_name[5] << endl;
            }
            else {
                cout << "Invalid input\n";
            }
            cout << "Enter an option (1-2): ";
            cin >> opt;
            break;
        }
        default: {
            cout << "Invalid input\n";
            break;
        }
    }
    int no, cno;
    cout<<"Enter coach number to book:\t";
    cin>>cno;
    cout<<"Number of seats to book:\t";
    cin>>no;
    return(add_seat(start, end, opt, id, cno, no)); //st, end, opt, id, cno, no.s
}

struct pssn {
    int uid, age, clas;
    char gen;
    struct pssn * next;
};
struct pssn * head = NULL;

bool isempty() {
    return(head == NULL);
}

bool cancel(int id) {
    train t;
    int back;
    for(int z=0; z<12; z++) {
        for(int j=0; j<30; j++){
            if(t.t1_s[z][j] == id){
                t.t1_s[z][j] = 0;
            }
        }
    }
    cout<<"1. Back to main page\n2. Exit\n";
    cin>>back;
    if(back == 1){
        return(true);
    }
    else{
        return(false);
    }
}

bool check(int id) {
    pssn * tmp = head;
    while(tmp->next != NULL) {
        if(tmp->uid == id){
            return(true);
        }
        tmp = tmp->next;
    }
}

int signup() {
    struct pssn * tmp;
    int uid;
    cout<<"Enter a 4-digit UserID:\t";
    cin>>uid;
    if(isempty()) {
        goto skip;
    }
    else {
        tmp = head;
        while(tmp->next != NULL) {
            if(tmp->uid == uid) {
                cout<<"User already exists with this UID\n";
                return(1);
            }
            else{
                tmp = tmp->next;
            }
        }
    }
    skip:
    pssn * newn = (pssn *)malloc(sizeof(pssn));
    if(isempty()) {
        head = newn;
    }
    else{
        tmp->next = newn;
    }
    newn->uid = uid;
    cout<<"Enter Age:\t";
    cin>>newn->age;
    cout<<"Gender (F)emale, (M)ale, (O)ther:\t";
    cin>>newn->gen;
    return(0);
}

void mod(int i){
    train t;
    switch(i) {
        case 1:{
            int tin, ind;
            cout<<"1. Change Train Number\n2. Change Train Name\n";
            cin>>tin;
            switch(tin) {
                case 1:{
                    int tno;
                    cout<<"Enter index of train number to change:\t";
                    cin>>ind;
                    cout<<"Enter new train number:\t";
                    cin>>tno;
                    t.train_no[ind] = tno;
                    break;
                }
                case 2:{
                    string tname;
                    cout<<"Enter index of train number to change:\t";
                    cin>>ind;
                    cout<<"Enter new train name:\t";
                    cin>>tname;
                    break;
                }
            }
            break;
        }
        case 2: {
            int p, coach, seat, tix;
            //cout<<"1. Print seat status for a coach\n2. Edit values\n";
            //cin>>p;
            cout<<"Enter train number index:\t";
            cin>>tix;
            print(tix);
            /*switch(tix) {
                case 1:{
                    cout<<"Enter coach index:\t";
                    cin>>coach;
                }
            }*/
        }
    }
}


void login() {
    admin a;
    int opt;
    string id, key;
    repeat:
    cout<<"1. Admin Login\n2. Passenger Signup\n3. Passenger Login.\n";
    cin>>opt;
    switch(opt) {
        case 1: {
            cout<<"Enter username:\t";
            cin>>id;
            cout<<"Enter passkey:\t";
            cin>>key;
            if(id == a.id && key == a.key) {
                int ch;
                char stay;
                cout << "Welcome to the Admin Portal"<<endl;
                Re:
                cout<<"1. Modify Trains List\n2. Show Passenger List\n";
                cin>>ch;
                mod(ch);
                cout<<"Stay?(y/n)\n";
                cin>>stay;
                if(stay == 'y'){
                    goto Re;
                }
                else{
                    goto repeat;
                }
            }
            else{
                cout<<"Invalid credentials.\n";
                goto repeat;
            }
        }
        case 2: {
            cout<<"Signup\n";
            if(signup()){
                goto repeat;
            }
        }
        case 3: {
            int bcl;
            cout<<"Login Page\n";
            pssn * tmp = head;
            int uid;
            cout<<"Enter UID:\t";
            cin>>uid;
            if(check(uid)) {
                cout<<"1. Booking\n2. Cancellation\n3. Log out\n";
                cin>>bcl;
                switch(bcl) {
                    case 1: {
                        cout<<"Booking\n";
                        if(booking(uid)==1){
                            goto repeat;
                        }
                        break;
                    }
                    case 2: {
                        cout<<"All Reservations cancelled\n";
                        if(cancel(uid)){
                            goto repeat;
                        }
                        break;
                    }
                    case 3: {
                        goto repeat;
                    }
                }
            }
        }
    }
}

int main() {
    cout<<"Welcome to RRS\n";
    login();
    return(0);
}
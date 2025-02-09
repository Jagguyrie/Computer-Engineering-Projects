#include<iostream>
using namespace std;

int f = -1;
int r = -1;
int maxsize = 20, item, i, Q[20];

//Insertion
void nq() {
	if(r == maxsize-1) {
		cout<<"Q overflow";
	}
	else {
		cout<<"Enter element to add: ";
		cin>>item;
		r++;
		if(f==-1)
		f++;
		Q[r] = item;
	}
}

//Deletion
void dq() {
	if(f == -1) {
		cout<<"Queue empty";
	}
	else {
		cout<<"Deleted, "<<Q[f]<<endl;
		f++;
	}
}

//Display
void disp() {
    cout<<"Elements in queue: \n";
	for(i=f; i<=r; i++){
		cout<<Q[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int con = 1;
	int c=-1;
	while(c!=4) {
		cout<<"Do you want to,\n1. Insert elements to queue,\n2. Delete elements from the queue,\n3. Display the queue.\n4. Exit program.\n";
		cin>>c;
		
		switch(c) {
			case 1:
				nq();
				break;
			case 2:
				dq();
				break;
			case 3:
				disp();
				break;
			case 4:
				exit(0);
				break;
		}
	}
	return 0;
}
#include<iostream>
using namespace std;

int top = -1, q[20], stack[20], front = -1 ,rear = -1 ,arr[20][20], visited[20] = {0};

void add(int item) {
    if(rear == 19)
        cout<<"Queue is full";
    else {
        if(rear == -1) {
            q[++rear] = item;
            front++;
        }
        else {
            q[++rear] = item;
        }
    }
}

int Delete() {
    int k;
    if((front > rear)||(front == -1))
        return(0);
    else {
        k = q[front++];
        return k;
    }
}

void push(int item) {
    if(top == 19)
        cout<<"Stack Overflow";
    else
        stack[++top]=item;
}

int pop() {
    int k;
    if(top == -1)
        return (0);
    else {
        k=stack[top--];
        return k;
    }
}

void bfs(int s, int n) {
    int i,p;
    add(s);
    visited[s] = 1;
    p = Delete();
    if(p != 0)
        cout<<p;
    while(p != 0) {
        for(i = 1; i <= n; i++) {
            if((arr[p][i] != 0) && (visited[i] == 0)) {
                add(i);
                visited[i] = 1;
            }
        }
        p = Delete();
        if(p != 0)
            cout<<p;
    }
    for(i = 1; i < n; i++) {
    if(visited[i] == 0)
        bfs(i, n);
    }
}

void dfs(int s, int n) {
    int k,i;
    push(s);
    visited[s] = 1;
    k = pop();
    if(k != 0)
        cout<<k;
    while(k!=0) {
        for(i=1;i<=n;i++) {
            if((arr[k][i] != 0) && (visited[i] == 0)) {
                push(i);
                visited[i] = 1;
            }
            k = pop();
            if(k != 0)
                cout<<k;
        }
    }
    for(i = 1; i <= n; i++) {
        if(visited[i] == 0)
            dfs(i ,n);
    }
}

int main() {
    int i, j, n, ch, s;
    cout<<"Enter number of vertices:\t";
    cin>>n;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cout<<"Enter 1 if "<<i<<" is connected with "<<j<<" else, 0 \n";
            cin>>arr[i][j];
        }
    }
    cout<<("Enter Choice 1.BFS 2.DFS:\t");
    cin>>ch;
    cout<<"Enter starting vertex:\t";
    cin>>s;
    while(ch != 3) {
        switch(ch) {
            case 1:
                bfs(s, n);
                break;
            case 2:
                dfs(s, n);
                break;
        }
        cin>>ch;
        for(i = 0; i <= n; i++) {
            visited[i] = 0;
        }
    }
}
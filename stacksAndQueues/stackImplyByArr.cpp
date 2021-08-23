#include<iostream>
using namespace std;
#define max 100
int stack[max],i=-1;


void push(int n);

void print (int * stack);

int pop();


int main(){
    int items;
    cout<<"enter no of item to be pushed in the stack\t";
    cin>>items;
    push(items);
    
    print(stack);
    pop();
    print(stack);
    
    return 0;
}


void push(int n){
    int item;
    for(int j=0;j<n;j++){
    if(i==max-1){
        cout<<"stack is full - overflow";
        break;
    }
    else{
        cout<<"enter item to be pushed\t";
        cin>>item;
        stack[++i]=item;
    }
    
}
    cout<<endl;
}

int pop(){
    if(i==-1){
        cout<<"stack is empty - underflow";
        return -1;
    }
    else{
     int item=stack[i--];
     return item;
    }
}

void print(int *stack){
   int temp=i;
    if(i==-1){
        cout<<"underflow";
    }
    else{
        cout<<"elements of stack are \n";
        for(temp;temp>-1;temp--){
            cout<<stack[temp]<<"  ";
        }
    }
    
}
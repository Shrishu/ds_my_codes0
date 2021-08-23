#include<iostream>
using namespace std;

struct node {
    char item;
    struct node  * next;
}*head;


void push(int n);
char pop();
void print();



int main(){
    int n;
    cout<<"enter no of items to be pushed in the stack\n";
    cin>>n;
    push(n);
    print();
    pop();
    print();
    return 0;
}


void push(int n){
    struct node *p,*temp;
    p = (struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        cout<<"heap is full";
    }
    else{
        cout<<"enter item 1 ";
        cin>>p->item;
        p->next=NULL;
    }
    for(int i =2;i<=n;i++){
        temp = (struct node *)malloc(sizeof(struct node));
        if(temp==NULL){
            cout<<"heap is full";
            break;
        }
        else{
            cout<<"enter item "<<i<<" ";
            cin>>temp->item;
            temp->next=p;;
            p=temp;
        }

    }
         head=p;
    }


char pop(){
    struct node *p;
    char c;
    if(head==NULL){
        cout<<"underflow";
    }
    else{
         c= head->item;
         p=head;
         head=p->next;
         free(p);
         return c;
}
}


void print(){
    struct node * t = head;
    while (t){
        cout<<t->item<<" ";
        t=t->next;
    }
    cout<<endl;
}
#include<iostream>
using namespace std;

struct node{
    char data;
    struct node * next;
    struct node * prev;
} * head;


void create(int n); //creates doubly linked list

void print(struct node *t); //prints the whole SLL starting from t->data


int main(){
    int n;
    cout<<"req no of nodes in the DLL\t";
    cin>>n;
    create(n);
   
    // reverse printing the dLL
    struct node * t =head;
    cout<<"dll is\n";
    while(t->next){
        cout<<t->data<<"  ";
        t=t->next;
    }
    cout<<t->data;
    cout<<endl<<"reversed order\n";
    while(t->prev){
        cout<<t->data<<"  ";
        t=t->prev;
    }
    cout<<t->data;
    return 0;


}



void print(struct node *t){
    
    if(t){
     cout<<" "<<t->data<<"  " ;
      print(t->next);
    }
}



void create(int n){
    struct node *t,*temp;
    head = (struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        cout<<"memory not allocated";
    }
    else{
        cout<<"enter data for node 1  ";
        cin>>head->data;
        head->prev = NULL;
    }
    t=head;
    for(int i=2;i<=n;i++){
        temp= (struct node *)malloc(sizeof(struct node));
        if (temp==NULL){
            cout<<"memory not allocated";
            break;
        }
        else{
            cout<<"enter data for node "<<i<<"  ";
            cin>>temp->data;
            temp->prev = t;
            t->next = temp;
            t = t->next;
        }
    }
    t->next= NULL;
}

/** implementing single linked list in c++ **/
// question for gate what will happen if i declare head pointer in the createsll function
#include<iostream>
using namespace std;
struct node{
    char data;
    struct node *next;
}*head;

void createsll(int n);

struct node * reverse(struct node * p);

int main(){
    int n; 
    char c;
    struct node *t;
    cout<<"enter no of nodes required in sll\n";
    cin>>n;
    createsll(n);
    t =head;
    cout<<"data for each of the nodes";
    while(t){
        c=t->data;
    cout<<" "<<c<<"  " ;
    t= t->next;
    }
return 0;
}



void createsll(int n){
    char c;
    struct node  *t,*temp;
    head= (struct node*)malloc(sizeof(struct node)) ;
    if (head == NULL){
        cout<<"memory not allocated";
    }
    else{
    cout<<"enter data fot node 1  ";
    cin>>c;
    head->data = c;
    t=head;
    for(int i=2;i<=n;i++){
        temp = (struct node*)malloc(sizeof(struct node));
        if(temp==NULL){cout<<"memory not allocated";
                break;
                }
      else{

        cout<<"enter data for node "<<i<<"\t";
        cin>>c;
        temp->data = c;
        t->next = temp;
        t= t->next;
    }
    }
    t->next=NULL;
    }
}




struct node * reverse(struct node * cur){
    struct node *nextNode=NULL,*prev=NULL;
    while (cur)
    {
        nextNode=cur->next;
        cur->next = prev;
        prev=cur;
        cur=nextNode;
        
    }
    return prev;
}

    
    

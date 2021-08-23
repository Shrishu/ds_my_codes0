//implementing single linked list in c++

#include<iostream>
using namespace std;
struct node{
    char data;
    struct node *next;
}*head;



void createsll(int n); //creates a SLL returns head input no of nodes required

void print(struct node *t); //prints the whole SLL starting from t->data

struct node * insert();   //insert a node  returns a pointer new

struct node * reverseloop(struct node * cur); //iterative program to reverse a SLL input head

void reversestack(struct node * prev, struct node * cur); //recursive prog  to rev a SLL input null,head

int main(){ 
    int n; 
    char c;
    struct node *t,*p;
    cout<<"enter no of nodes required in sll\n";
    cin>>n;
    createsll(n);
      cout<<"data for each of the nodes\n";
    print(head);
    cout<<endl;
   /** head=reverse(head);
    cout<<"reverse order of sll\n";
    **/
   reversestack(NULL,head);
    print(head);

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


void reversestack(struct node * prev, struct node * cur){
if(cur){
    reversestack(cur,cur->next);
    cur->next = prev;
}
else{
    head=prev;
}
}

struct node * reverseLoop(struct node * cur){
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


void print(struct node *t){
    
    if(t){
     cout<<" "<<t->data<<"  " ;
      print(t->next);
    }
}


struct node * insert(){
    
    struct node *last;
    last = (struct node *)malloc(sizeof(struct node*));
    if(last==NULL){cout<<"memory not allocated";
                return NULL;
                }
      else{
    cout<<"enter data \t";
    cin>>last->data;
    return last;
     }
     }



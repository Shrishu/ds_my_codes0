//implementing single linked list in c++

#include<iostream>
using namespace std;
struct node{
    char data;
    struct node *next;
}*head;




void createsll(int n);

void print(struct node *t);

struct node * insert();


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
   /**inserting a nod at the begining
    p = insert();
    if(p==NULL){
                return 1;
                }
      else{
    p->next =head;
    head=p; **/



    /**inserting a node at intermediate position say at 4th node
    p=insert();
    if(p==NULL){
                return 1;
                }
      else{
          t=head;
         for (int i=0;i<2;i++) {
              t=t->next;
         }
    p->next = t->next;
    t->next = p;
      }   **/



      //insering a node at last position
      p=insert();
       if(p==NULL){
                return 1;
                }
      else{
          t=head;
          while(t->next){
              t= t->next;
          }
          t->next=p;
          p->next=NULL;
      }
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



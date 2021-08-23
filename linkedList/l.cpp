//implementing single linked list in c++
#include<iostream>
using namespace std;
struct node{
    char data;
    struct node *next;
}*head;


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

void remove(struct node *p){
    struct node *j = p->next;
    p->next = j->next;
    free(j);
}


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
    t=head;
   while(t->next->data !='c'){
        t= t->next;
    }
    // remove(t);
 /**   p=head;
    head = p->next;
    free(p);
    print(head);
     **/
    t=head;
    while(t->next->next){
        t=t->next;
    }
    p=t->next;
    t->next = NULL;
    free(p);
    print (head);
return 0;
}


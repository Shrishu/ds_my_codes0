#include<iostream>
using namespace std;


struct node{
    int data;
    struct node *left,*right;
}*root;

void makeTree(int n);


int main(){
    int n;
    cout<<"enter no of nodes in tree";
    cin>>n;
    makeTree(n);


}


void makeTree(int n){
    struct node *lc,*rc,*t,*p;
    root = (struct node *)malloc(sizeof(struct node));
    if(root==NULL){
        cout<<"memory not allocated  ";
    }
    else{
        cout<<"enter data";
        cin>>root->data;
        t=p=root;
    }

    for(int i=1;i<n;i++){
        lc = (struct node *)malloc(sizeof(struct node));
        if(lc=NULL){
            cout<<"memory not allocated";
            break;
        }
        else{

            cout<<"enter data for LC ";
            cin>>lc->data;
            t->left = lc;
            i++;
            t=t->left;

        }
        rc= (struct node *)malloc(sizeof(struct node));
        if(rc==NULL){
            cout<<"memory not allocated";
        }
        else{
            cout<<"enter data for RC";
            cin>>rc->data;
            p->right = rc;
            p=p->right;
            


        }
    }
}




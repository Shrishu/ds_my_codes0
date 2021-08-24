#include<iostream>
#include<cmath>
using namespace std;

struct node * createTree(struct node * parent ,int cure);

void print(struct node *t);

struct node{
    int data;
    struct node *left ,*right;
}*root;

int n,height;


int main(){

    cout<<"enter no of nodes req in the tree ";
    cin>>n;
    height= log(n)/log(2);
    cout<<"height of the complete tree would be  ";
    cout<<height;
    cout<<endl;
    cout<<"enter data as in the preorder traversal\n";
    root = createTree(root,0);
    print(root);

   return 0;    
}



struct node * createTree(struct node *parent,int cure){
     if(n){
         int j=cure;   //value of global var i is stored so that it can be provide to the RC
         parent = (struct node *)malloc(sizeof(struct node));

    if(parent ==NULL){
        cout<<"memory not allocated";
    
    }

    else{
        
        if(j<=height){
        cout<<"enter data ";
        cin>>parent->data;
        n--;       
        j++;          
        parent->left = createTree(parent->left,j);       
        parent->right = createTree(parent->right,j);
        return parent;
    }
    else{
        return NULL;
    }

    }
    }     
    } 


    void print(struct node *t){
        if(t){
            cout<<t->data<<"  ";
            print(t->left);
            print(t->right);
        }
    }

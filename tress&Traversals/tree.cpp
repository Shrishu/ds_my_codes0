  
#include<iostream>
#include<cmath>
using namespace std;

struct node * createTree(struct node * parent ,int cure);

void preorder(struct node *t);

void postorder(struct node *root);

void inorder(struct node *root);

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
    cout<<"preorder traversal  ";
    preorder(root);
    cout<<endl;
    cout<<"inorder traversal  ";
    inorder(root);
    cout<<endl;
    cout<<"postorder traversal  ";
    postorder(root);
    cout<<endl;
 

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


  // functions to print tree in various orders

//preorder
    void preorder(struct node *t){
        if(t){
            cout<<t->data<<"  ";
            preorder(t->left);
            preorder(t->right);
        }
    }
    
    //function to read a tree by inorder traversal
    
    void inorder(struct node * root){
       if(root){
        
        inorder(root->left);
        cout<<root->data<<"  ";
        inorder(root->right);
       }   
    }
    
    
    //postorder
    void postorder(struct node * root){
        if(root){
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<"  ";
        }
    }

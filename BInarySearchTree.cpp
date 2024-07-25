#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*lchild;
    node*rchild;
    node(int value){
        data=value;
        lchild=NULL;
        rchild=NULL;
    }
};
class BST{
    node*root;
    public:
    BST(){
        root=NULL;
    }
    node*getRoot(){
        return root;
    }
    void insertNode(int);
    void preordertraversal(node*);
    void inordertraversal(node*);
    void postordertraversal(node*);
    bool search(int);
    int findLargestElement(node*);
    int findsmallestElement(node*);
    void deleteNode(int);
    int totalNode(node*);
    int Height(node*);


};
void BST::insertNode(int val) {
    node *ptr=new node(val);
    if (root==NULL){
        root = ptr;
        return;
    }
    else{
        node* currPtr=root;
        node *parentptr=ptr;
        while (currPtr != NULL){
            parentptr = currPtr;
            if (val < currPtr->data ) 
                currPtr = currPtr->lchild;
            else 
                currPtr=currPtr->rchild;
    }
    if(val<parentptr->data)
    parentptr->lchild=ptr;
    else
    parentptr->rchild=ptr;
}
return;
}
void BST :: inordertraversal(node* tree){
    if (tree!=NULL){
        inordertraversal(tree->lchild);
        cout<<" "<<tree->data;
        inordertraversal(tree->rchild);
    }
}
void BST:: preordertraversal(node*tree){
    if (tree == NULL)  
    return;
    printf("%d ", tree->data);
    preordertraversal(tree->lchild);
    preordertraversal(tree->rchild);
}
void BST::postordertraversal(node* tree)
{
    if (tree == NULL)
    return;
    postordertraversal(tree->lchild);
    postordertraversal(tree->rchild);
    cout << tree->data << " ";
}
bool BST :: search(int key){
    if(root==NULL){
        return false;
    }
    node*ptr=root;
    while (root!=NULL)
    {
        if(key<ptr->data)
        ptr=ptr->lchild;
        else if (key>ptr->data)
        ptr=ptr->rchild;
        else return true;

    }
    return false;
    
}
int BST::findLargestElement(node *tree){
    if(tree==NULL){
        return 0;
    }
    else if (tree->rchild==NULL) return tree->data;
    else return findLargestElement(tree->rchild);
}
int BST::findsmallestElement(node *tree){
    if(tree==NULL){
        return 0;
    }
    else if (tree->lchild==NULL) return tree->data;
    else return findsmallestElement(tree->lchild);
}
int main(){
    BST tr;
    int n,i;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cout<<"Enter value"<<endl;
        cin>>x;
        tr.insertNode(x);
        }
        cout<<"\nInorder Traversal: \n";
        tr.inordertraversal(tr.getRoot());
        cout<<endl;
        cout<<"\nPreorder Traversal:\n";
        tr.preordertraversal(tr.getRoot());
        cout<<endl;
        cout<<"\nPostorder Traversal:\n";
        tr.postordertraversal(tr.getRoot());
        cout<<endl;
        cout<<"Largest element in the tree is"<<endl;
        cout<<tr.findLargestElement(tr.getRoot())<<endl;
         cout<<"Smallet element in the tree is"<<endl;
        cout<<tr.findsmallestElement(tr.getRoot())<<endl;

    return 0;
}
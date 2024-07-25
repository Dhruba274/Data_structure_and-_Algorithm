#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* rchild;  //to point to the next right child in the tree
    Node* lchild;  //to print the next left child in the tree

        Node(int value){
            //constructor
            data = value;
            rchild=NULL;
            lchild=NULL;
        }

};
class BST{
    Node* root;
    public:
    //constructors and destructors
    BST(){
        root= NULL;
        }
        Node *getRoot() {
                return root;
        }
        void insert(int data);
        void inordertraversal(Node*);
        void preordertraversal(Node *);
        void postordertraversal(Node*);
        bool search(int key, Node*);
        void remove(int key);

};
void BST::insert (int val){
    //inserts a node into binary search tree.
    //cout<<"Inserting "<<data<<endl;
    Node*newNode=new Node(val);
    if(!root)   {//base case for when there is no nodes present inside the tree.
            root=newNode;
            return;
    }
    else{  Node* currentNode=this->root;
        Node* parentNode=NULL;
              while(currentNode!=NULL){
                parentNode=currentNode;//keeps track of where we are currently at.
                if(val<currentNode->data)
                currentNode=currentNode->lchild;
                else
                currentNode=currentNode->rchild;
              }
              if(val<parentNode->data)
              parentNode->lchild= newNode;
              else
              parentNode->rchild= newNode;
              }
              return;
}
void BST::inordertraversal(Node *tree){
     if(tree != NULL){
        inordertraversal(tree->lchild);
        printf("%d\t", tree->data);
        inordertraversal(tree->rchild);
 }
 }
 bool BST:: search(int key,Node*tree){
    /*This function returns true or false depending on whether the given key exists in the Binary Search Tree
    or not.*/
    if(tree==NULL || tree->data ==key ){
        return (bool)tree;
    }
    if(key < tree->data ){
        return search(key, tree->lchild );
    }
    return search(key, tree->rchild);


 }

     void BST::remove(int key){
      if(root == NULL) return;
       Node *x = root;
       Node *parent = NULL;
       while(x != NULL&&x->data != key){
           parent = x;
       if(key < x->data) x = x->lchild;
           else x = x->rchild;
       }
          if(x == NULL){
      printf("data is not present\n");
          return;
        }
      if(x->lchild == NULL||x->rchild == NULL){
           Node *ptr;
     if(x->lchild == NULL) ptr = x->rchild;
          else ptr=x->lchild;
            if(parent == NULL)
                {
              delete root;
              root=ptr; return;
                      }
      if(x == parent->lchild) parent->lchild = ptr;
         else parent->rchild = ptr;
              delete x;
               return;
              }
     else{
          Node *succ = x->rchild;
          Node *pSucc = NULL;
           while(succ->lchild != NULL){
         pSucc = succ;
          succ = succ->lchild;
              }
          x->data = succ->data;
      if(pSucc == NULL) x->rchild = succ->rchild;
          else pSucc->lchild = succ->rchild;
          free(succ);
          return;
           }
       }
    int main(){
    BST bst;
    cout << "Enter number of elements: ";
    int n; cin >> n;
    cout << endl;
    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        bst.insert(x);
        }
        cout << "Inorder traversal of constructed BST is : \n";
        bst.inordertraversal(bst.getRoot());
        cout<<endl;
        cout << "Searching element 5 : ";
        // if(bst.search(5, bst.getRoot())){
        //     cout << "Element found" << endl;}
        //     else{
        //         cout << "Element Not Found" << endl;
        // }

    return 0;
 }
      
                
            
              
        

            

            

    

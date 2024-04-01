#include<iostream>
using namespace std;


// BST Node 
class bstNode{
    public:
    int data;
    bstNode * left;
    bstNode * right;
    bstNode(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }    
};


// Insert a node in a BST 
void insert(bstNode* &root,int d){
    if(root == NULL){
    bstNode* newNode = new bstNode(d);
    root = newNode;
    }

    else if(d <= root -> data){
        insert(root -> left, d);
    }
    else{
        insert(root -> right, d);
    }
}


// For Searching an Element
bool search(bstNode* root,int d){
    if(root == NULL){
    return false;
    }
    else if(root -> data == d){
        return true;
    }
    else if(root -> data >= d){
       return search(root -> left,d);
    }
    else{
       return search(root -> right,d);
    }
}


// Find Min Using Iterative approach
int Min(bstNode* root){
    if(root == NULL){
        cout<<"Tree Does't have Node"<<endl;
        return -1;
    }
    while(root -> left != NULL){
        root = root -> left;
    }
    return root -> data;
}


// Find Max using Recursive Approach
int Max(bstNode* root){
    if(root == NULL){
        return -1;
    }
    else if(root -> right == NULL){return root -> data;}
    return Max(root -> right);
}


// Find the Height of BST
int height(bstNode* root){
    if(root == NULL){
        return 0;
    }
    int left = height(root -> left);
    int right = height(root -> right);
    return max(left,right) + 1;
}

// PreOrder Traversal
void PreOrder(bstNode* root){
    if(root == NULL) return;
    cout<<root -> data<<" ";
    PreOrder(root -> left);
    PreOrder(root -> right);
}

// InOrder Traversal
void InOrder(bstNode* root){
    if(root == NULL) return;
    InOrder(root -> left);
    cout<<root -> data<<" ";
    InOrder(root -> right);
}

// PostOrder Traversal
void PostOrder(bstNode* root){
    if(root == NULL) return;
    PostOrder(root -> left);
    PostOrder(root -> right);
    cout<<root -> data<<" ";
    
}


// Level-Order-Traversal Or Breadth-First-Traversal 
// Print nodes at a current level
void printCurrentLevel(bstNode* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root -> data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}


void printNode(bstNode* root)
{
    int h = height(root);
    int i;
    for (i = 0; i <= h; i++){
        printCurrentLevel(root, i);
    }
    cout<<endl;
}

/*
// Debug the code deleting a Node of a Tree

void deleteNode(bstNode* root, int data){
    if(root == NULL) return ;
    else if (data < root -> data) deleteNode(root -> left,data);
    else if (data > root -> data) deleteNode(root -> right,data);
    // after this the element is been found now time to delete
    else{
    // Case 1: When Deleting Leaf node
        if(root -> left == NULL && root -> right == NULL){
            delete root;
        }
    // Case 2: When Single node is attached the deleting node
        else if(root -> left == NULL){
            bstNode* temp = root;
            root = root -> right;
            delete temp;
        }
        else if(root -> right == NULL){
            bstNode* temp = root;
            root = root -> left;
            delete temp;
        }
    // Case 3: when 2 node are attached the deleting node
        else{
          root -> data = Min(root -> right);
          deleteNode(root -> right,  Min(root -> right));
        }

    }
}
*/


int main(){

    bstNode* first = new bstNode(15);
    bstNode* root = first;
    printNode(root);
    insert(root,10);
    insert(root,20);
    insert(root,17);
    insert(root,12);
    insert(root,8);
    insert(root,25);

    cout<<"Breadth First Traversal :- ";
    printNode(root);

    (search(root,10)) ? cout<<"Present"<<endl : cout<<"Not Present"<<endl;
    (search(root,120)) ? cout<<"Present"<<endl : cout<<"Not Present"<<endl;

    cout<<Min(root)<<endl;
    cout<<Max(root)<<endl;

    cout<<"Pre Order Traversal :- ";
    PreOrder(root);
    cout<<endl;

    cout<<"In Order Traversal :- ";
    InOrder(root);
    cout<<endl;

    cout<<"Post Order Traversal :- ";
    PostOrder(root);
    cout<<endl;

    // deleteNode(root,8);
    // printNode(root);

}













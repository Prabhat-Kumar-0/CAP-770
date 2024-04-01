#include<iostream>
using namespace std;


// BST Node 
class bstNode{
    public:
    string data;
    bstNode * left;
    bstNode * right;
    bstNode(string data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};


// Insert a node in a BST 
void insert(bstNode* &root,string d){
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
bool search(bstNode* root,string d){
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

void InOrder(bstNode* root){
    if(root == NULL) return;
    InOrder(root -> left);
    cout<<root -> data<<" ";
    InOrder(root -> right);
}

int main(){
    bstNode* first = new bstNode("prabhat");
    bstNode* root = first;
    insert(root,"hello");
    insert(root,"hi");
    insert(root,"how");
    insert(root,"are");
    insert(root,"you");
    InOrder(root);
    
}

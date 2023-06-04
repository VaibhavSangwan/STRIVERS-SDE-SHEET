/*
#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
/*
vector<int> bottomView(BinaryTreeNode<int>* root){
     vector<int>ans;
     if(root==NULL){
         return ans;

     }
     map<int,int>p;
     queue<pair<BinaryTreeNode<int>*,int>>q;
     q.push({root,0});
     while(!q.empty()){
         auto it=q.front();
         q.pop();
         BinaryTreeNode<int>* node=it.first;
         int x=it.second;
         p[x]=node->data;
         if(node->left!=NULL){
             q.push({node->left,x-1});

         }
         if(node->right!=NULL){
             q.push({node->right,x+1});

         }

     }
     for(auto i:p){
         ans.push_back(i.second);

     }
     return ans;

   
    
}

*/
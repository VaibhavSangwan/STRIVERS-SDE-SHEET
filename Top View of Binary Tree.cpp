/*


#include <bits/stdc++.h> 
using namespace std;
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
vector<int> getTopView(TreeNode<int> *root) {

  vector<int>ans;
  if(root==NULL){
      return ans;

  }
  map<int,int>mp;

  queue<pair<TreeNode<int>*,int>>q;
  q.push({root,0});
  while(!q.empty()){
      auto it=q.front();
      q.pop();
      TreeNode<int>* node=it.first;
      int x=it.second;
      if(mp.find(x)==mp.end()){
        mp[x]=node->val;

      }
      if(node->left!=NULL){
          q.push({node->left,x-1});

      }
      if(node->right!=NULL){
          q.push({node->right,x+1});

      }
  }

  for(auto i:mp){
      ans.push_back(i.second);

  }
return ans;



}
*/


void inorder(Node* root,vector<int>&ans)
{
    if (root==NULL)
        return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
    //for(int i=1;i<ans.size();i++){
        //cout<<ans[i-1]<<" ";}


}
	bool checkBST(Node* root) {
        vector<int>ans;
        inorder(root,ans);
        //for(int i=1;i<ans.size();i++){
        //cout<<ans[i-1]<<" ";}

        for(int i=1;i<ans.size();i++){
            //cout<<ans[i-1]<<" ";
            if(ans[i]<=ans[i-1])
                return 0;
        }
        return 1;


	}

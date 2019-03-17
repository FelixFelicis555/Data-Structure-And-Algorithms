void postOrder(Node *root) {

        if (root==NULL)
            return ; //base case

        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";



    }

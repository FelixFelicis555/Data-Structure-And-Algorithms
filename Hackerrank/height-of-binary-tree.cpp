int height(Node * root) {
        if (root==NULL)
            return 0;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        int c=0;
        while(!q.empty()){
            Node *temp=q.front();
            q.pop();
            if(temp==NULL){
                if(!q.empty())
                q.push(NULL);
                c=c+1;
            }
            else{
                //cout<<temp->data<<" ";
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);


            }
        }
        return c-1;

    }

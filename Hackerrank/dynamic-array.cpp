vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    /*
     * Write your code here.
     */
    vector<int>ans;
    vector<int>a[n];
    int last_answer=0,l1;
    for(int i=0;i<queries.size();i++){
        int a1,a2,a3;
        a1=queries[i][0];
        a2=queries[i][1];
        a3=queries[i][2];
        if(a1==1){
             l1=(a2^last_answer)%n;
            a[l1].push_back(a3);

        }
        else if(a1==2){
            l1=(a2^last_answer)%n;
            int size=a[l1].size();
            last_answer=a[l1][a3%size];
            ans.push_back(last_answer);

        }
    }
    return ans;
}

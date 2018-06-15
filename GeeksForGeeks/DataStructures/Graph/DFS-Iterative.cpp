//set will give sort the adjacent element. we can also use link list

#include<bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    set<int> *adj;
public:
    Graph(int v);
    void addedges(int v1,int v2);
    void DFS(int src);
};
Graph::Graph(int v){
this->v=v;
adj=new set<int>[v];
}

void Graph::addedges(int v1,int v2){
adj[v1].insert(v2);
adj[v2].insert(v1);
}

void Graph::DFS(int src){
stack<int>s;
vector<bool>visited(v,false);
s.push(src);
/*for(int j=0;j<visited.size();j++)
    //cout<<visited[j]<<" ";
    visited.push_back(false);
for(int j=0;j<visited.size();j++)
    {cout<<visited[j]<<" ji";}*/
while(!s.empty()){
    int v=s.top();
    s.pop();
    if(!visited[v]){
        visited[v]=true;
        cout<<v<<" ";
    }
    for(auto i=adj[v].begin();i!=adj[v].end();i++){
        if(!visited[*i])
            s.push(*i);
    }

}
}




int main(){
int n,e,v1,v2,src;
cout<<"Enter the no of vertices : ";
cin>>n;
cout<<"Enter the no of edges : ";
cin>>e;
Graph G(n);
cout<<"Enter the edges :"<<endl;
for (int i=0;i<e;i++){
    cin>>v1>>v2;
    G.addedges(v1,v2);
}
cout<<"Enter the source vertex : ";
cin>> src;
G.DFS(src);









}

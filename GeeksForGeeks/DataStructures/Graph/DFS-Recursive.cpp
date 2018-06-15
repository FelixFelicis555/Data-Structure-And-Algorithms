/*This is for connected directed graph dfs*/
#include<bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    list<int> *adj;

public:
    Graph(int v);
    void addedges(int v1,int v2);
    void dfs(int src);
    void dfsutil(bool visited[],int src);
};

Graph::Graph(int v){
    this->v=v;
    adj=new list<int>[v];
}

void Graph::addedges(int v1,int v2){
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}

void Graph::dfs(int src){
bool *visited=new bool[v];
for(int i=0;i<v;i++)
    visited[i]=false;
dfsutil(visited,src);
}

void Graph::dfsutil(bool visited[],int src){
visited[src]=true;
cout<<src<<" ";
for(auto i=adj[src].begin();i!=adj[src].end();++i){
    if(visited[*i]==false){
        dfsutil(visited,*i);
    }
}




}

int main(){
cout<<"Enter the no of vertices in the graph : ";
int n,src,e,v1,v2;
cin>>n;
cout<<"Enter no of edges in the graph : ";
cin>>e;
Graph G(n);
for(int i=0;i<e;i++){
    cin>>v1>>v2;
    G.addedges(v1,v2);
}
cout<<"enter the source vertex : ";
cin>>src;
G.dfs(src);
return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int count;
class Graph{
int v,count;
list<pair<int,int>> *adj;
public:
    Graph(int v,int m);
    void addEdges(int a,int b,int w);
    void printlist();
    int farthest(int src,int op);
    void dfsutil(bool visited[],int dist[],int src,int parent);
    void distanceprint(int y);
    void deletenode(int y);
};
Graph::Graph(int v,int m){
this->v=v+m;
this->count=0;
adj=new list<pair<int,int>>[v+m];
//int *dist=new int[v+m];
}

void Graph::addEdges(int a,int b,int w)
{
adj[a].push_back(make_pair(b,w));
}
void Graph::printlist(){
for(int i=0;i<v;i++){
    cout<<"Vertex : "<<i<<"--->";
    for(auto j=adj[i].begin();j!=adj[i].end();j++){
        cout<<j->first<<" "<<j->second<<endl;
    }
}}
int Graph::farthest(int src,int op){
//vector<int>d(v,INF);
//d[src]=0;
bool *visited=new bool[v];
int *dist=new int[v];
for(int i=0;i<v;i++)
    visited[i]=false;
for(int i=0;i<v;i++)
    dist[i]=INF;
dist[src]=0;
int parent=src;
dfsutil(visited,dist,src,parent);
int dp=1;
//for(int i=0;i<v;i++){
  //      cout<<"vertex : "<<i+1<<" "<<dist[i]<<endl;
//}
vector<int>val;
for(int i=0;i<v;i++){
    if(dist[i]!=INF){
        val.push_back(dist[i]);
    }
}

count=val.size();
if(op==4){
    return (*max_element(val.begin(),val.end()));

}
else if(op=99){
    return val.size();
}
else
return (distance(val.begin(),max_element(val.begin(),val.end())));

}

void Graph::dfsutil(bool visited[],int dist[],int src,int parent){
visited[src]=true;
//cout<<src<<" ";
for(auto i=adj[src].begin();i!=adj[src].end();++i){
    int u=i->first;
    int w=i->second;
    if(visited[u]==false){
            dist[u]=dist[parent]+w;
        dfsutil(visited,dist,u,u);
    }
    else if(visited[u]==true){
        if(dist[u]>dist[parent]+w){
            dist[u]=dist[parent]+w;
        dfsutil(visited,dist,u,u);
    }

}




}}
void Graph::deletenode(int y)
{
//cout<<"far ; "<<y<<endl;
//cout<<"count : "<<count<<endl;
//s=farthest()
adj[y].clear();
for(int i=0;i<count;i++){
    //cout<<"i ="<<i<<endl;
    for(auto j=adj[i].begin();j!=adj[i].end();j++){
        //cout<<j->first<<" ";
        if(j->first==y)
            {
            adj[i].erase(j);
            break;
            }
    }
}

}

int main()
{
int v,k;
cin>>v;
//dont
int n1=v;
int e,v1,v2,m;
//cin>>e;
e=v;
vector<int>weight;
for(int i=0;i<v;i++)
{
    cin>>v1;
    weight.push_back(v1);
}
cin>>m;
Graph g(v,m);
for(int i=0;i<v;i++)
{
    if(i!=v-1){
    g.addEdges(i,i+1,weight[i]);}
    else
        g.addEdges(i,0,weight[i]);
}
//cin>>m;
//g.printlist();
//g.farthest(1);
//g.distance();
//g.addEdges(4,5,4);
//g.printlist();
//g.farthest(1);
int a1,x,w;
int up_v=n1;
while(m--){
    cin>>a1;
    if(a1==1){
        cin>>x>>w;
        int y=g.farthest(x-1,1);
        //cout<<"y "<<y<<endl;
        g.addEdges(y-1,up_v,w);
        up_v++;
        //g.printlist();
    }
    else if(a1==2){
            cin>>x>>w;
            g.addEdges(x-1,up_v,w);
            up_v++;
    }
    else if(a1==3){
        cin>>x;
        int y=g.farthest(x-1,3)-1;
        //cout<<y<<endl;
        g.deletenode(y);

    }
    else if(a1==4){
        cin>>x;
        int y=g.farthest(x-1,4);
        cout<<y<<endl;
    }
}
return 0;


}


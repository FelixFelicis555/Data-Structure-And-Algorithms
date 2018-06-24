#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int count;
class Graph{
int v,count;
list<pair<int,int>> *adj;
public:
    Graph(int v);
    void addEdges(int a,int b,int w);
    void printlist();
    vector<int> farthest(int src,int d,int k);
    void dfsutil(bool visited[],int dist[],int src,int parent,int k);
    void distanceprint(int y);
};
Graph::Graph(int v){
this->v=v;
adj=new list<pair<int,int>>[v];
}

void Graph::addEdges(int a,int b,int w)
{
adj[a].push_back(make_pair(b,w));
adj[b].push_back(make_pair(a,w));
}

void Graph::printlist()
{
for(int i=0;i<v;i++){
    cout<<"Vertex : "<<i<<"--->";
    for(auto j=adj[i].begin();j!=adj[i].end();j++){
        cout<<j->first<<" "<<j->second<<endl;
    }
}}

vector<int> Graph::farthest(int src,int d,int k){
bool *visited=new bool[v];
int *dist=new int[v];
//int *value=new int[v];
for(int i=0;i<v;i++)
    visited[i]=false;
for(int i=0;i<v;i++)
    dist[i]=INF;
dist[src]=0;
int parent=src;
dfsutil(visited,dist,src,parent,k);
vector<int>index;
for(int i=0;i<v;i++){
    if(dist[i]<=d){
        index.push_back(i);
    }
}
return index;
}



void Graph::dfsutil(bool visited[],int dist[],int src,int parent,int k){
visited[src]=true;
for(auto i=adj[src].begin();i!=adj[src].end();++i){
    int u=i->first;
    int w=i->second;
    if(visited[u]==false){

            if(dist[parent]+w<=k){
                 dist[u]=dist[parent]+w;
                dfsutil(visited,dist,u,u,k);
            }
    }

}
}

int main()
{
int n,l,v1,v2,q,u,d,k;
cin>>n;
vector<int>a;
for(int i=0;i<n;i++){
    cin>>l;
    a.push_back(l);
}

Graph g(n);
for(int i=0;i<n-1;i++)
{
    cin>>v1>>v2;
    g.addEdges(v1-1,v2-1,1);
}
cin>>q;
//g.printlist();
/*for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }*/
while(q--){
        vector<int>ind;
        multiset<int>as;
    cin>>u>>d>>k;
    ind=g.farthest(u-1,d,k);
    /*for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }*/
    for(int i=0;i<ind.size();i++){
            int s=ind[i];
        //cout<<s<<" "<<endl;
        //cout<<a[s]<<endl;
        as.insert(a[ind[i]]);
    }
    /*for(auto i=as.begin();i!=as.end();i++){
        cout<<*i<<" "<<endl;
    }*/
    if(ind.size()>=k){
    //sort(as.begin(),as.end());
    multiset<int>::iterator it = std::next(as.begin(),k-1);
    cout<<*it<<endl;}
    else{
        cout<<"-1"<<endl;
    }


}
}

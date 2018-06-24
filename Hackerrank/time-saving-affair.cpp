#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
class Graph{
int v;
list<pair<int,int>> *adj;
public:
    Graph(int v);
    void addEdges(int a,int b,int w);
    void findminimumtime(int src,int k);
};
Graph::Graph(int v){
this->v=v;
adj=new list<pair<int,int>>[v];
}
void Graph::addEdges(int a,int b,int w){
adj[a].push_back(make_pair(b,w));
adj[b].push_back(make_pair(a,w));
}

void Graph::findminimumtime(int src,int k){
set<pair<int,int>>s;
vector<int>d(v,INF);
s.insert(make_pair(0,src));
d[src]=0;
int f=v;
    //cout<<f<<endl;
while(!s.empty()){
        int flag=0;
    pair<int,int> tmp=*(s.begin());

    s.erase(s.begin());
    int u=tmp.second;
    for(auto i=adj[u].begin();i!=adj[u].end();i++){
        int v=(*i).first;
        int w=(*i).second;
        int m=d[u]+w;
        int q=m/k;
        if(q%2!=0&&v!=(f-1)){
            m=k*(q+1);
        }
        if(d[v]>m){
            if(d[v]!=INF){
                s.erase(s.find(make_pair(d[v],v)));}
            d[v]=m;
            s.insert(make_pair(d[v],v));
            }
        }
    }
    /*cout<<"Vertex distance from source"<<endl;
    for(int i=0;i<v;i++){
        cout<<i+1<<" "<<d[i]<<endl;
    }*/
    cout<<d[v-1]<<endl;

}
int main(){
//cout<<"Enter no of vertices :"<<endl;
int v,k;
cin>>v;
//cout<<"Enter k :"<<endl;
cin>>k;
Graph g(v);
//cout<<"Enter no of Edges :"<<endl;
int e,v1,v2,v3;
cin>>e;
//cout<<"Enter edges along with their weight"<<endl;
while(e--){
    cin>>v1>>v2>>v3;
    g.addEdges(v1-1,v2-1,v3);
}
g.findminimumtime(0,k);


return 0;


}




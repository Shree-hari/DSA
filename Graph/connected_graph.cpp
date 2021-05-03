#include <bits/stdc++.h>
using namespace std;

class graph{
    
    public:
    
    int V;
    vector<int> *adj;

    graph(int v){
        V = v;
        adj = new vector<int>[V] ;
    }

    void addEdge( int u , int v ){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void display(){

        for(int i = 0 ; i < V ; i++ ){

            cout<<i<<" -> ";

            for( auto it = adj[i].begin() ; it != adj[i].end() ; it++ ){

                cout<< *it << " | " ;

            }cout<<endl;

        }

    }

    void dfs(vector<bool> &vis , int s){

        vis[s]=true;
        cout<<s<<" ";

        for(auto it = adj[s].begin() ; it != adj[s].end() ; it++){

            if(vis[*it]==false)
            dfs(vis,*it);

        }

    }

};


int main(){

    graph g(4);
    int count = 0;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(4,5);
    g.addEdge(4,7);
    g.addEdge(5,7);
    g.addEdge(5,6);
    g.display();
    vector<bool> vis(4,false);
    
    for(int i = 0 ; i<4 ; i++){
      
      count++;
      if(vis[i]==false)
        g.dfs(vis,0);
      
    }
  
    cout<< "Total Disconnected Graphs :- "<<count;
    return 0;
}

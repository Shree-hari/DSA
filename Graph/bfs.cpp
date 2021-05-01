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

    void bfs(vector<bool> &vis, int s){

        queue<int> q;

        q.push(s);
        vis[s] = true;
        while(!q.empty()){

            int u = q.front();
            q.pop();
            cout<<u<< " ";
            vis[u]= true;

            for( auto it = adj[u].begin() ; it!=adj[u].end() ; it++ ){

                q.push(*it);
                vis[*it]=true;

            }

        }

    }

};


int main(){

    graph g(7);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(2,4);
    g.display();
    vector<bool> vis(7,false);

    g.bfs(vis,0);
	
    return 0;
}

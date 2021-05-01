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

};


int main(){

    graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.display();
	
    return 0;
}

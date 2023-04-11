#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <queue>
#include<bits/stdc++.h>
using namespace std;
const int INF = 999; 
//Default header size is 20B
//to depict no relation between any node in a topology INF=999
class Fragmentation{
    public:
    int mtu;
    int payload;
    int header=20;
    Fragmentation(int mtu,int payload){
        this->mtu=mtu;
        this->payload=payload;
    }
    public:
    int no_of_packets(){
        int n=ceil((payload-header)/(mtu-header));
        return n;
    }

};
void dijkstra(vector<vector<int>>& graph, int src, int dest){
    int n=graph.size();
    vector<int> dist(n, INF); 
    vector<int> parent(n, -1);
    vector<bool> visited(n, false);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // Create a min-heap of pairs (distance, node)
    pq.push(make_pair(0, src)); 
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        if(u==dest){
            cout<<"shortest distance is "<<dist[dest]<<endl;
            break;
        }
        if (visited[u]) continue; 
        visited[u] = true;
        for (int v=0; v<n;v++){
            if (graph[u][v] == INF) continue;
            int ans=dist[u]+graph[u][v];
            if(ans<dist[v]){
                dist[v]=ans;
                parent[v] = u;
                pq.push(make_pair(dist[v],v));
            }
        } 
    }
    vector<int> path;
    int sum=0;
    int u = dest;
    while (u != -1) {
        path.push_back(u);
        u = parent[u];
    }
    reverse(path.begin(), path.end());
    for(int z=0;z<path.size();z++){
        cout << path[z] << " ";
        if (z < path.size() - 1) {
            cout << "-> ";
        }
    }
    cout<<endl;

}
 vector<vector<int>> create_graph(){
    int n;
    cout<<"Enter the number of vertices:"<<endl;
    cin>>n;
    vector<vector<int>> graph(n,vector<int>(n));
    cout<<"Enter the adjacency matrix of the graph: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    cout << "The adjacency matrix of the graph is:" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
   return graph;
}
int main(){
    
    int mtu,payload;
    cout<<"Enter the value of mtu:"<<endl;
    cin>>mtu;
    cout<<"Enter the value of payload(including header size):"<<endl;
    cin>>payload;
    Fragmentation fragments(mtu,payload);
    int packet_size=fragments.no_of_packets();
    vector<vector<int>> graph;
    // vector<vector<int>> coded_graph(6,vector<int>(6));
    // coded_graph={{0,7,12,INF,INF,INF},
    //              {INF,0,2,9,INF,INF},
    //              {INF,INF,0,INF,10,INF},
    //              {INF,INF,INF,0,INF,1},
    //              {INF,INF,INF,4,0,5},
    //              {INF,INF,INF,INF,INF,0}
    //             };
    graph=create_graph();
    int choice;
    for(int j=0;j<packet_size;j++){
        cout<<"Do you want a new topology(if yes presss 1, if no press 0):"<<endl;
        cin>>choice;
        if(choice==1){
            vector<vector<int>> new_graph;
            new_graph=create_graph();
            int src,dst;
            cout<<"Enter source for packet "<<j<<":"<<endl;
            cin>>src; 
            cout<<"Enter destination for packet "<<j<<":"<<endl;
            cin>>dst; 
            cout<<"For node "<<j<<" the shortest path is"<<endl;
            dijkstra(new_graph,src,dst);
            graph=new_graph;
        }
        else{
            int src,dst;
            cout<<"Enter source for packet "<<j<<":"<<endl;
            cin>>src; 
            cout<<"Enter destination for packet "<<j<<":"<<endl;
            cin>>dst; 
            cout<<"For node "<<j<<" the shortest path is"<<endl;
            int shortest_path;
            dijkstra(graph,src,dst);
        }
       
    }
    return 0;
}
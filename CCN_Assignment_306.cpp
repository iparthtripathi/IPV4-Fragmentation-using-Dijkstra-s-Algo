#include <bits/stdc++.h>
#include <queue>
using namespace std;

const int INF=1000;   //Defined as infinity

vector<vector<int>> createGraph(){
    cout<<"Enter the number of nodes\n";
    int n;
    cin>>n;

    vector<vector<int>> graph(n,vector<int>(n));
    cout<<"Enter the adjacency matrix for the graph\n";    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    cout<<"The matrix entered is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return graph;
}

void dijkstra(vector<vector<int>>& graph, int source, int des){

    int num=graph.size();
    vector<int> cost(num,INF),path(num,-1);
    vector<bool> visited(num,false);

    cost[source]=0;
    queue<int> q;
    q.push(source);

    while(!q.empty()){
        int p = q.front();
        q.pop();
        visited[p] = true;
        for(int v=0;v<num;v++){
            if(graph[p][v] == INF){
                continue;
            }
            int dist = cost[p] + graph[p][v];
            if(dist < cost[v]){
                cost[v] = dist;
                path[v] = p;
                if(!visited[v]){
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
    }

    vector<int> revPath;
    int k=des;
    while(k!=-1){
        revPath.push_back(k);
        k=path[k];
    }
    reverse(revPath.begin(),revPath.end());

    cout<<"Shortest Distance is "<<cost[des]<<endl;
    for(int i=0;i<revPath.size();i++)
        cout<<revPath[i]<<" ";
    
}

int main(){

    int payload,mtu,header=20;
    cout<<"Enter the payload size including header size\n";
    cin>>payload;
    cout<<"Enter the mtu size"<<endl;
    cin>>mtu;
    int pacSize=ceil(((float)(payload-header))/(mtu-header));

    vector<vector<int> > graph=createGraph();
    for(int i=0;i<pacSize;i++){
        cout<<"Do you want a new topology(Y/N)?\n";
        char ch;
        cin>>ch;
            if(ch=='Y'){
            vector<vector<int>> graphNew;
            graphNew=createGraph();
            int source,dest;
            cout<<"Enter source for packet "<<i<<":"<<endl;
            cin>>source;
            cout<<"Enter destination for packet "<<i<<":"<<endl;
            cin>>dest;
            cout<<"The shortest path for packet "<<i<<" is:\n";
            dijkstra(graphNew,source,dest);
            graph=graphNew;
            }
            else{
                int source,dest;
            cout<<"Enter source for packet "<<i<<":"<<endl;
            cin>>source;
            cout<<"Enter destination for packet "<<i<<":"<<endl;
            cin>>dest;
            cout<<"The shortest path for packet "<<i<<" is:\n";
            dijkstra(graph,source,dest);
            }
        
    }
    return 0;

}

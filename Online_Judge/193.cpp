//Ejercicio 11
//Acepatado
//Graph Coloring

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 101
int color[max];
vector<int> adj[max];
vector<int> ans;

void Backtracking(int u,vector<int> aux, int n){
    vector<int> guardar;
    color[u] = -1;
    aux.push_back(u);
    for(int i=0;i<adj[u].size();i++){
        int v = adj[u][i];
        if(color[v]==0){
            color[v] = 1;
            guardar.push_back(v);
        }
    }
    bool temp = false;
    for(int i = u;i<=n;i++){
        if(color[i]==0){
            Backtracking(i,aux,n);
            temp = true;
            break;
        }
    }
    if(!temp && ans.size()< aux.size()){
        ans = aux;
    }

    for(int i=0;i<guardar.size();i++){
        color[guardar[i]] = 0;
    }
    color[u] = 1;
    aux.pop_back();
    for(int i=u;i<=n;i++){
        if(color[i]==0){
            Backtracking(i,aux,n);
            break;
        }
    }
    color[u] = 0;
}

int main(){
    int m,n,k;
    int n1,n2;
    cin>>m;
    while (m--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            adj[i].clear(); // por nodo
            color[i] = 0; // color de los nodos
        }
        while(k--){
            cin>>n1>>n2;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }
        ans.clear();
        Backtracking(1,ans,n);
        cout<<ans.size()<<endl;
        if(ans.size()>0){
            cout<<ans[0];
        }
        for( int i=1,j=ans.size();i<j;i++){
            cout<<" "<<ans[i];
        }
        cout<<endl;
    }
    

    return 0;
}
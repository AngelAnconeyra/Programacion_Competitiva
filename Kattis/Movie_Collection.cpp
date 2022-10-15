#include<bits/stdc++.h>
using namespace std;

void find(vector<int> &peli,int ai){
    long cont=0;
    for(auto i=peli.begin();i!=peli.end();++i){
        if(*i==ai){
            cout<<cont<<" ";
            peli.erase(i);
            peli.insert(peli.begin(), ai);
            return;
        }
        else{
            cont++;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a;
    cin>>a;
    if(a>100){
        return 0;
    }
    while(a--){
        long m,r;
        cin>>m>>r;
        if(m<1 || r>100000){
            break;
        }
        vector<int> peli(m);
        for(int i=0;i<m;i++){
            peli[i]=i+1;
        }
        int ai;
        for(int i=0;i<r;i++){
            cin>>ai;
            find(peli,ai);
        }
        cout<<endl;
    }
    return 0;
}
//time limit exceeded
/*
#include<iostream>
#include<vector>
using namespace std;

int comparar(vector<int> ja,vector<int> ji){
    int cont=0;
    for(int i=0;i<ja.size();i++){
        for(int j=0;j<ji.size();j++){
            if(ja[i]==ji[j]){
                cont++;
            }
        }
    }

    return cont;
}

int main(){
    int N,M;
    while (cin>>N>>M && N!=0 && M!=0){
        vector<int> ja,ji;
        int num;
        for(int i=0;i<N;i++){
            cin>>num;
            ja.push_back(num);
        }

        for(int i=0;i<M;i++){
            cin>>num;
            ji.push_back(num);
        }
        cout<<comparar(ja,ji)<<endl;
    }
    
    return 1;
}
*/

//Run time error
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,M,cont;
    while (cin>>N>>M){
        if(N==0 && M==0){
            break;
        }
        vector<bool> cd(200000,false);
        int num;
        cont=0;
        for(int i=0;i<N+M;i++){
            cin>>num;
            if(cd[num]){
                cont++;
            }
            else{
                cd[num]=true;
            }
        }
        cout<<cont<<endl;
    }
    exit(0);
    
    return 0;
}
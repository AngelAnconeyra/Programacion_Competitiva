//Mount Marathon
//Aceptado
//https://www.beecrowd.com.br/judge/en/problems/view/2915

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,a,con=0;
    cin>>N;
    vector<int> C[N];
    cin>>a;
    C[0].push_back(a);
    for(int i=1;i<N;i++){
        cin>>a;
        C[i].push_back(a);
        if(C[i-1][0]>=a){
            C[i].push_back(C[i-1][0]);
            C[i-1][0]=0;
        }
    }
    for(int i=0;i<N;i++){
        if(C[i][0] != 0){
            con++;
        }
    }
    cout<<con<<endl;

    return 0;
}
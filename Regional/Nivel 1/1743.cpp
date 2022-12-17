//Automated Cheacking Machine
//Aceptado
//https://www.beecrowd.com.br/judge/en/problems/view/1743

#include<iostream>
using namespace std;

int main(){
    int X[5],Y;
    bool com= true;
    for(int i=0;i<5;i++){
        cin>>X[i];
    }
    for(int i=0;i<5;i++){
        cin>>Y;
        if(X[i]==Y){
            com= false;
        }
    }
    if(com)cout<<"Y\n";
    else cout<<"N\n";
    
    return 0;
}
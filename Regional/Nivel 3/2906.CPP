//Database of Clients
//https://www.beecrowd.com.br/judge/en/problems/view/2906

#include<iostream>
#include<string>
using namespace std;

void solve(string cad[],int j){
    string email;
    bool mas = false;
    //se elimina despues del +
    for(int i=0;i<cad[j].size();i++){
        if(cad[j][i] == '+'){
            mas = true;
        }
        if(cad[j][i] == '@'){
            mas = false;
        }
        if(mas){
            continue;
        }
        else{
            email += cad[j][i];
        }
    }
    cad[j] = email;
    email.clear();
    bool arr = true;
    //Se elimina los puntos
    for(int i=0;i<cad[j].size();i++){
        if(cad[j][i] == '@'){
            arr = false;
        }
        if(cad[j][i] == '.' && arr){
            continue;
        }
        else{
            email += cad[j][i];
        }
    }
    cad[j] = email;
}

int main(){
    int N,cont=0;
    cin>>N;
    string cad[N];
    bool dir[N]={false};
    for(int i=0;i<N;i++){
        cin>>cad[i];
        solve(cad,i);
    }
    for(int i=0;i<N;i++){
        if(!dir[i]){
            cont++;
            dir[i] = true;
            for(int j=i+1;j<N;j++){
                if(cad[i]==cad[j]){
                    dir[j]=true;
                }
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
//Different Digits
//Aceptado
//https://www.beecrowd.com.br/judge/en/problems/view/1285

#include<iostream>
#include<string>
using namespace std;

bool solve(int num){
    string cad;
    cad = to_string(num);
    if(cad.size()==2){
        if(num%11 ==0){
            return true;
        }
    }
    else if(cad.size()==1){
        return false;
    }
    else{
        for(int i=0;i<cad.size();i++){
            for(int j=i+1;j<cad.size();j++){
                if(cad[i] == cad[j]){
                    return true;
                }
            }
        }
        return false;
    }
    return false;
}

int main(){
    int N,M,cont;
    int numero[4];
    while(cin>>N>>M){
        cont = 0;
        for(int i=N;i<=M;i++){
            int dig=0,flag=0,num = i;
            if(solve(i)){
                continue;
            }
            else{
                cont++;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
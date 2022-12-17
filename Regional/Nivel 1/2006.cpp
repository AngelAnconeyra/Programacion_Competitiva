//Identifying Tea
//Aceptado
//https://www.beecrowd.com.br/judge/en/problems/view/2006

#include<iostream>
using namespace std;

int main(){
    int T;
    int ans,sum=0;
    cin>>T;
    for(int i=0;i<5;i++){
        cin>>ans;
        if(T==ans){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
//Hard Choise
//Aceptado
//https://www.beecrowd.com.br/judge/en/problems/view/2702

#include<iostream>
using namespace std;

int main(){
    int C,B,P;
    int c,b,p;
    int sum=0;
    cin>>C>>B>>P;
    if(0<=C && C<=100 && 0<=B && B<=100 && 0<=P && P<=100){
        cin>>c>>b>>p;
        if(0<=c && c<=100 && 0<=b && b<=100 && 0<=p && p<=100){
            if(c>C){
                sum+= c-C;
            }
            if(b>B){
                sum+= b-B;
            }
            if(p>P){
                sum+= p-P;
            }
            cout<<sum<<endl;
        }
    }
    else{
        cin>>c>>b>>p;
    }

    return 0;
}

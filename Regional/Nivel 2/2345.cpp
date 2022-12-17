//Assigning Teams
//Aceptado
//https://www.beecrowd.com.br/judge/en/problems/view/2345

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a;
    int entrada[4];
    for(int i=0;i<4;i++){
        cin>>a;
        entrada[i]= a;
    }
    cout<<abs((entrada[0]+entrada[3])-(entrada[1]+entrada[2]))<<endl;
    return 0;
}
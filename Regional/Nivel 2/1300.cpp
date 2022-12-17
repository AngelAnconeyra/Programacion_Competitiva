//Hours and Minutes
//https://www.beecrowd.com.br/judge/en/problems/view/1300

#include<iostream>
using namespace std;

int main(){
    int A;
    while(cin>>A){
        if(A%6 == 0){
            cout<<"Y\n";
        }
        else{
            cout<<"N\n";
        }
    }
    return 0;
}
///Entregado
#include<iostream>
#include<string>
using namespace std;
char letra(char let){
    if(let=='A'||let=='E'||let=='I'||let=='O'||let=='U'||let=='H'||let=='W'||let=='Y'){
        return '0';
    }
    else if(let=='B'||let=='F'||let=='P'||let=='V'){
        return '1';
    }
    else if(let=='C'||let=='G'||let=='J'||let=='K'||let=='Q'||let=='S'||let=='X'||let=='Z'){
        return '2';
    }
    else if(let=='D'||let=='T'){
        return '3';
    }
    else if(let=='L'){
        return '4';
    }
    else if(let=='M'||let=='N'){
        return '5';
    }
    else{
        return '6';
    }
}

int main(){
    string palabra;
    while(getline(cin,palabra)){
        string produccion;
        if(palabra=="" || palabra.size()>20) continue; //Error en el tamaño era 20 no 19
        for(int i=0;i<palabra.size();i++){
            produccion+= letra(palabra[i]);
        }
        for(int i=0;i<produccion.size()-1;i++){
            if(produccion[i] == produccion[i+1]){
                produccion[i]='0';
            }
        }
        for(int i=0;i<produccion.size();i++){
            if(produccion[i]!='0'){
                cout<<produccion[i];
            }
        }
        cout<<endl;
    }
    

    return 0;
}
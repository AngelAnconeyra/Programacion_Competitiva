/*
#include<iostream>
using namespace std;

int find(int **dato,int p,int n){
    for(int i=0;i<n;i++){
        if(dato[i][p-1]== 1){
            return i;
        }
    }
    return 0;
}

void sumar(int **dato,int p,int n){
    int fil,cont=0;
    long long suma=0;
    fil= find(dato,p,n);
    for(int i=0;i<n;i++){
        if(dato[fil][i] == 1){
            suma+= i+1;
            cont++;
        }
    }
    cout<<cont<<" "<<suma<<endl;
}

void mover(int**dato,int p,int q,int n){
    int filp,filq;
    filp= find(dato,p,n);
    filq= find(dato,q,n);
    if(filp != filq){
        dato[filp][p-1] = 0;
        dato[filq][p-1] = 1;
    }
    else{
        return;
    }
}

void union_conjuntos(int**dato,int p,int q,int n){
    int filp,filq;
    filp= find(dato,p,n);
    filq= find(dato,q,n);
    if(filp != filq){
        for(int i=0;i<n;i++){
            if(dato[filq][i]==1){
                dato[filp][i] = 1;
                dato[filq][i] = 0;
            }
        }
    }
    else{
        return;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,m;
    int **datos;
    while (cin>>n>>m && n>=1 && m<=100000){
        datos = new int*[n];
        for(int i=0;i<n;i++){
            datos[i]= new int[n];
            datos[i][i]=1;
        }
        int opcion;
        int p,q;
        for(int i=0;i<m;i++){
            cin>>opcion;
            if(opcion==1){
                cin>>p>>q;
                union_conjuntos(datos,p,q,n);
            }
            else if(opcion==2){
                cin>>p>>q;
                mover(datos,p,q,n);
            }
            else{
                cin>>p;
                sumar(datos,p,n);
            }
        }
    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int arr[200000 + 5];
int tam[200000 + 5];
long long sum[200000 + 5];

int find(int x){
    if(x == arr[x]) return x;
    else return arr[x] = find(arr[x]);
}
void unir(int p, int q){
    int a = find(p);
    int b = find(q);
    if(a == b) return;
    arr[a] = b;
    tam[b] += tam[a];
    sum[b] += sum[a];
}
void mover(int p, int q){
    int a = find(p);
    int b = find(q);
    if(a == b) return;
    arr[p] = b;
    tam[a]--;
    sum[a] -= p;
    tam[b]++;
    sum[b] += p;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, x, p, q;
    while(cin >> n >> m){
        for ( int i = 1, j = n + 1; i <= n; ++i, ++j ) {
            arr[i] = j;
            arr[j] = j;
            tam[j] = 1;
            sum[j] = i;
        }
        for(int i=0; i<m; i++){
            cin>> x;
            switch (x)
            {
                case 1:
                    cin >> p >> q;
                    unir(p,q);
                    break;
                case 2:
                    cin >> p >> q;
                    mover(p,q);
                    break;
                case 3:
                    cin >> p;
                    int a = find(p);
                    cout << tam[a] << " " << sum[a] << "\n";
                    break;
            }
        }   
    }

    
}

#include<bits/stdc++.h>
using namespace std;

int arr[1000000 + 5];
int tam[1000000 + 5];

int find(int x){
    if(x == arr[x]) return x;
    else return arr[x] = find(arr[x]);
}
void unir(int p, int q){
    int a = find(p);
    int b = find(q);
    if(tam[a] > tam[b]){
        arr[b] = a;
    }else{
        arr[a] = b;
        if(tam[a] == tam[b]) tam[a]++;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, p, q;
    char x;
    while(cin >> n >> m){
        for(int i = 0; i< n;i++){
            arr[i] = i;
            tam[i] = 1;
        }
        for(int i=0;i<m; i++){
            cin>> x;
            switch (x)
            {
                case '=':
                    cin >> p >> q;
                    unir(p,q);
                    break;
                case '?':
                    cin >> p >> q;
                    int a = find(p);
                    int b = find(q);
                    if(a == b) cout << "yes\n";
                    else cout << "no\n";
                    break;
            }
        }   
    }

    
}
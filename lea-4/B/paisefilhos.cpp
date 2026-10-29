#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    //indice comeca em 1 pra ficar facil: filhos de i sao 2*i e 2*i+1, pai eh i/2
    vector<int> v(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    int c;
    cin >> c;
    while(c--){
        int i;
        cin >> i;

        //arvore vazia
        if(v[1] == -1){
            cout << "NULL" << "\n";
            continue;
        }

        if(i == 1){
            cout << "RAIZ";
        }else{
            cout << v[i/2];
        }
        cout << " - ";

        int esq = 2*i;
        int dir = 2*i + 1;

        //se passou do tamanho do vetor ou eh -1, o filho eh nulo
        if(esq > n || v[esq] == -1){
            cout << "NULL";
        }else{
            cout << v[esq];
        }
        cout << " ";
        if(dir > n || v[dir] == -1){
            cout << "NULL";
        }else{
            cout << v[dir];
        }
        cout << "\n";
    }
}

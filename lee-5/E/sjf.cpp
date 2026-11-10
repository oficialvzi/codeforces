#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    //a fila de prioridade tira primeiro o maior tempo
    //se o tempo empatar, tira o maior nome (alfabetica invertida)
    priority_queue<pair<int, string>> fila;

    for(int i = 0; i < n; i++){
        string s;
        int u;
        cin >> s >> u;

        fila.push({u, s});
    }

    while(!fila.empty()){
        pair<int, string> atual = fila.top();
        fila.pop();

        cout << atual.second << " " << atual.first << "\n";

        //se ainda tem mais que 1 minuto, volta pra fila com a metade do tempo
        if(atual.first > 1){
            fila.push({atual.first / 2, atual.second});
        }
    }
}

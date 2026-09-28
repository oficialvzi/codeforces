#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, q;
    cin >> n >> m >> q;

    //guarda pra cada numero a posicao (linha, coluna) onde ele apareceu primeiro
    map<int, pair<int, int>> posicao;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int v;
            cin >> v;

            //so salva se for a primeira vez que o numero aparece
            if(posicao.find(v) == posicao.end()){
                posicao[v] = {i, j};
            }
        }
    }

    while(q--){
        int v;
        cin >> v;

        if(posicao.find(v) != posicao.end()){
            cout << posicao[v].first << " " << posicao[v].second << "\n";
        }else{
            cout << "-1 -1" << "\n";
        }
    }
}

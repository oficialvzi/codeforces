#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, q;
    cin >> c >> q;

    //vetor de contagem (cola: cont[x]++), tamanhos vao ate 1000
    vector<int> cont(1001, 0);

    for(int i = 0; i < c; i++){
        int a, b;
        cin >> a >> b;
        //a caixa tem um parafuso de cada tamanho de a ate b
        for(int j = a; j <= b; j++){
            cont[j]++;
        }
    }

    while(q--){
        int p;
        cin >> p;
        if(cont[p] > 0){
            cout << "Contem " << cont[p] << " parafuso(s) do tipo " << p << "\n";
        }else{
            cout << "Nao contem parafusos do tipo " << p << "\n";
        }
    }
}

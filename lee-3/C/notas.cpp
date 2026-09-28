#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, q;
    cin >> a >> q;

    //as notas ja vem em ordem, entao da pra usar busca binaria
    vector<int> notas(a);
    for(int i = 0; i < a; i++){
        cin >> notas[i];
    }

    while(q--){
        int c;
        cin >> c;

        //upper_bound acha a posicao da primeira nota que é MAIOR que c
        int pos = upper_bound(notas.begin(), notas.end(), c) - notas.begin();

        //tudo dali pra frente é maior que c
        cout << a - pos << " notas maiores que " << c << "\n";
    }
}

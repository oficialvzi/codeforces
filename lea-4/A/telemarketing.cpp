#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    long long k;
    cin >> c >> k;
    vector<long long> t(c);

    for(int i = 0; i < c; i++){
        cin >> t[i];
    }

    for(int i = 0; i < c; i++){
        //vetor ja vem ordenado: primeira ligacao com tempo >= t[i] - k (cola: lower_bound)
        int pos = lower_bound(t.begin(), t.end(), t[i] - k) - t.begin();

        //de pos ate i estao todas as ligacoes da janela
        int resposta = i - pos + 1;

        if(i > 0) cout << " ";
        cout << resposta;
    }
    cout << "\n";
}

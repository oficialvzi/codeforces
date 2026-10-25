#include <bits/stdc++.h>
using namespace std;

//quantos crachas todas as impressoras fazem em x minutos
long long producao(vector<int>& w, vector<int>& t, long long x){
    long long total = 0;
    for(int i = 0; i < w.size(); i++){
        //se ainda ta aquecendo nao imprimiu nada
        if(x >= w[i]){
            total = total + (x - w[i]) / t[i];
        }
    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> w(n), t(n);

    for(int i = 0; i < n; i++){
        cin >> w[i] >> t[i];
    }

    //busca binaria (parecido com a questao doutor)
    //pior caso: aquece 10^6 e imprime 10^6 crachas de 10^3 minutos cada
    long long lo = 0;
    long long hi = 2000000000;
    while (lo < hi){
        long long mid = (lo + hi)/2;
        if(producao(w, t, mid) >= m){
            hi = mid;
        }else{
            lo = mid + 1;
        }
    }

    cout << lo << "\n";
}

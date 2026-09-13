#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //n = numero
    //q = qntd de casos
    int q, c;
    unsigned long long n;
    cin >> n >> q;

    while(q--){
        cin >> c;
        //pega o numero 'n' e pega o 1ULL(tudo zero e apenas um '1' na posicao 0) e mexe pra esquerda 'c' vezes
        //se tiver um '1' no numero n, o if da como verdadeiro
        if(n & (1ULL << c)){
            cout << "acesa" << "\n";
        }else{
            cout << "apagada" << "\n";
        }

    }
}
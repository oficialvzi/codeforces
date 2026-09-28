#include <bits/stdc++.h>
using namespace std;

//conta quantos digitos o numero tem
int digitos(long long n){
    int qnt = 0;
    while(n > 0){
        qnt++;
        n /= 10;
    }
    return qnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c, x;
    cin >> a >> b >> c >> x;

    //quanto mais pessoas, mais caro fica, entao da pra fazer busca binaria na quantidade
    long long ini = 1, fim = 1e9;
    long long resposta = 0;

    while(ini <= fim){
        long long meio = (ini + fim) / 2;
        long long custo = a * meio + b * digitos(meio) + c;

        //se da pra pagar, guarda e tenta levar mais gente. se nao, tenta menos
        if(custo <= x){
            resposta = meio;
            ini = meio + 1;
        }else{
            fim = meio - 1;
        }
    }

    cout << resposta << "\n";
}

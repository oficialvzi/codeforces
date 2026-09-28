#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;

    //como B <= A, a funcao A*x + B*cos(x) so cresce
    //entao da pra fazer busca binaria no valor de x
    double ini = 0, fim = 1e9;

    //repete varias vezes pra ir chegando cada vez mais perto do x certo
    for(int i = 0; i < 100; i++){
        double meio = (ini + fim) / 2;

        //se deu menor que C, o x ta mais pra direita. se nao, ta mais pra esquerda
        if(a * meio + b * cos(meio) < c){
            ini = meio;
        }else{
            fim = meio;
        }
    }

    cout << fixed << setprecision(4) << ini << "\n";
}

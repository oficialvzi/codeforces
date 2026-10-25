#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    //pilha com as caixas abertas, o topo eh a ultima caixa aberta
    stack<int> caixas;
    bool pode = true;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(a < 0){
            //abrindo uma caixa: tem que ser menor que a caixa que contem ela
            int k = -a;
            if(!caixas.empty() && k >= caixas.top()){
                pode = false;
            }
            caixas.push(k);
        }else{
            //fechando: tem que ser a ultima caixa aberta
            if(caixas.empty() || caixas.top() != a){
                pode = false;
            }else{
                caixas.pop();
            }
        }
    }

    //se sobrou caixa aberta no final tambem nao da
    if(!caixas.empty()){
        pode = false;
    }

    if(pode){
        cout << "Pode construir!" << "\n";
    }else{
        cout << "Volte para a prancheta!" << "\n";
    }
}

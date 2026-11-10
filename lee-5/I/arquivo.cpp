#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int l;
        cin >> l;

        //guarda os pares {matricula, disciplina} que ja apareceram
        set<pair<string, string>> vistos;
        int erros = 0;

        while(l--){
            string matricula, disciplina;
            cin >> matricula >> disciplina;

            if(vistos.count({matricula, disciplina}) > 0){
                erros++;
            }else{
                vistos.insert({matricula, disciplina});
            }
        }

        if(erros == 0){
            cout << "Arquivo OK" << "\n";
        }else{
            cout << "Corrompido com " << erros << " erro(s)" << "\n";
        }
    }
}

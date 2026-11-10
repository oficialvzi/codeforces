#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    //a fila fica na ordem de chegada: {nome, fome}
    vector<pair<string, int>> fila;

    while(a--){
        string acao;
        cin >> acao;

        if(acao == "CHEGA"){
            string nome;
            int f;
            cin >> nome >> f;

            fila.push_back({nome, f});
        }else if(acao == "FOME"){
            string nome;
            int x;
            cin >> nome >> x;

            for(int i = 0; i < fila.size(); i++){
                if(fila[i].first == nome){
                    fila[i].second += x;
                }
            }
        }else if(acao == "SAI"){
            string nome;
            cin >> nome;

            for(int i = 0; i < fila.size(); i++){
                if(fila[i].first == nome){
                    fila.erase(fila.begin() + i);
                    break;
                }
            }
        }else{
            if(fila.empty()) continue;

            //procura o mais faminto. usa > pra quem chegou primeiro ganhar no empate
            int maior = 0;
            for(int i = 1; i < fila.size(); i++){
                if(fila[i].second > fila[maior].second){
                    maior = i;
                }
            }

            cout << fila[maior].first << "\n";
            fila.erase(fila.begin() + maior);
        }
    }
}

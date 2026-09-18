#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    queue<int> fila;
    //colocar as cartas na fila
    for(int i = n; i >= 1; i--){
        fila.push(i);
    }

    vector<int> descarte;

    while(fila.size() > 1){
        //1. descartar a primeira cara
        descarte.push_back(fila.front());
        fila.pop(); //descarto

        //2. mover a nova primeira carta para o final da fila
        int seguinte = fila.front(); //novo topo
        fila.push(seguinte);
        fila.pop();
    }

    cout << "Descarte: ";
    for(int i = 0; i < descarte.size(); i++){
        if(i == 0){
            cout << descarte[i];
        }else{
            cout << ", " << descarte[i];
        }
    }
    cout << "\n";

    cout << "Ultima carta: " << fila.front() << "\n";
}
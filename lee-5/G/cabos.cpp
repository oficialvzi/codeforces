#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> fila;

    for(int i = 0; i < n; i++){
        long long c;
        cin >> c;
        fila.push(c);
    }

    long long custo = 0;

    //sempre junta os dois menores cabos
    while(fila.size() > 1){
        long long menor = fila.top();
        fila.pop();
        long long segundo = fila.top();
        fila.pop();

        //o custo é o maior dos dois, e como saiu depois o segundo é o maior
        custo += segundo;
        fila.push(menor + segundo);
    }

    cout << custo << "\n";
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p;
    cin >> p;
    
    //a fila das pedras
    queue<pair<int,int>> fila;
    //ler as pedras e colocar em 'fila'
    for(int i = 0; i < p; i++){
        int a, b;
        cin >> a >> b;

        fila.push({a, b});
    }

    //logica dos dominos
    while(!fila.empty())
    {
        //1. botar a primeira pedra na mesa
        pair<int, int> atual = fila.front();
        fila.pop(); //remove da fila

        //2. imprimir ela
        cout << atual.first << " " << atual.second << "\n";

        //3. se a fila ficar vazia, break
        if(fila.empty()) break;

        //4. checkar se a soma dos digitos da PRÓXIMA pedra == 7
        pair<int, int> proxima = fila.front(); //ler a próxima pedra
        int soma = proxima.first + proxima.second;
        fila.pop(); //tirar a pedra da fila
        if(soma == 7) //se a soma for == 7, vai para o final da fila. se n, é descartada
        {
            fila.push(proxima);
        }
    }
}
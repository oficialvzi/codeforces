#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    // as notas so vao de 0 a 10, entao so conta quantas vezes cada nota aparece
    int cont[11] = {0};
    for (int i = 0; i < a; i++)
    {
        int nota;
        cin >> nota;
        cont[nota]++;
    }

    // imprime cada nota a quantidade de vezes que ela apareceu, ja em ordem
    for (int nota = 0; nota <= 10; nota++)
    {
        for (int i = 0; i < cont[nota]; i++)
        {
            cout << nota << "\n";
        }
    }
}

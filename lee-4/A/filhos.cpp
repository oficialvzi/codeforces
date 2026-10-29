#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    // comeca do 1 pra ficar facil: os filhos do no i ficam em 2*i e 2*i+1
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    while (c--)
    {
        int no;
        cin >> no;

        // se a raiz for -1, a arvore toda é nula (menor arvore possivel)
        if (v[1] == -1)
        {
            cout << "NULL" << "\n";
            continue;
        }

        int esq = 2 * no;
        int dir = 2 * no + 1;

        // se passou do tamanho do vetor ou for -1, o filho é nulo
        if (esq > n || v[esq] == -1)
        {
            cout << "NULL";
        }
        else
        {
            cout << v[esq];
        }

        cout << " ";

        if (dir > n || v[dir] == -1)
        {
            cout << "NULL";
        }
        else
        {
            cout << v[dir];
        }

        cout << "\n";
    }
}
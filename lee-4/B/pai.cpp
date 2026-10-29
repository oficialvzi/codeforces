#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    while (c--)
    {
        int no;
        cin >> no;

        // se a raiz for -1, a arvore toda é nula
        if (v[1] == -1)
        {
            cout << "NULL" << "\n";
        }
        else if (no == 1)
        {
            cout << "RAIZ" << "\n";
        }
        else
        {
            // o pai do no i fica na posicao i/2
            cout << v[no / 2] << "\n";
        }
    }
}
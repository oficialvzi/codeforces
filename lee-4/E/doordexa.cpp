#include <bits/stdc++.h>
using namespace std;

// conta quantas viagens o robo faz com essa capacidade
int viagens(vector<int> &p, int capacidade)
{
    int qnt = 1;
    int carga = 0;
    for (int i = 0; i < p.size(); i++)
    {
        // se nao cabe mais, faz uma viagem nova
        if (carga + p[i] > capacidade)
        {
            qnt++;
            carga = 0;
        }
        carga = carga + p[i];
    }
    return qnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> p(n);

    int lo = 0, hi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        lo = max(lo, p[i]); // precisa pelo menos carregar o pacote mais pesado
        hi = hi + p[i];     // com a soma de tudo da pra levar em uma viagem so
    }

    // busca binaria na capacidade
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (viagens(p, mid) <= m)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }

    cout << lo << "\n";
}

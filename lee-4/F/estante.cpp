#include <bits/stdc++.h>
using namespace std;

long long trocas = 0;

// merge sort normal, mas contando os pares fora de ordem quando junta as duas metades
void mergesort(vector<int> &v, int ini, int fim)
{
    if (ini >= fim)
        return;

    int meio = (ini + fim) / 2;
    mergesort(v, ini, meio);
    mergesort(v, meio + 1, fim);

    vector<int> aux;
    int i = ini, j = meio + 1;
    while (i <= meio && j <= fim)
    {
        if (v[i] <= v[j])
        {
            aux.push_back(v[i]);
            i++;
        }
        else
        {
            // se o da direita é menor, ele ta fora de ordem com todos que sobraram na esquerda
            trocas = trocas + (meio - i + 1);
            aux.push_back(v[j]);
            j++;
        }
    }
    while (i <= meio)
    {
        aux.push_back(v[i]);
        i++;
    }
    while (j <= fim)
    {
        aux.push_back(v[j]);
        j++;
    }

    for (int k = 0; k < aux.size(); k++)
    {
        v[ini + k] = aux[k];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    mergesort(v, 0, n - 1);

    cout << trocas << "\n";
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    //fiz usando o erase pois minha cola tinha exatamente isso
    s.erase(unique(s.begin(), s.end()), s.end());

    //o que foi apagado eh o que precisava ser removido
    int resposta = n - s.size();

    cout << resposta << "\n";
}

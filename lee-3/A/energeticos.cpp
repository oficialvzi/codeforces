#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int total = a + b + c;
    int maior = max(a, max(b, c));

    //cada ida pega 2 energeticos, entao no maximo da pra ir total/2 vezes
    //mas se um sabor tiver muito mais que os outros, ele sempre precisa de outro sabor pra fazer par
    //ai o limite vira a soma dos outros dois sabores (total - maior)
    int resposta = min(total / 2, total - maior);

    cout << resposta << "\n";
}

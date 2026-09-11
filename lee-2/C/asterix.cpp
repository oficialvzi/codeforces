#include <bits/stdc++.h>
using namespace std;

int main(){
    // optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n, a, b, qnt;
    cin >> n;

    while(n--){
        cin >> a >> b;
        qnt = __builtin_popcountll(a & b); //conta os bits '1'

        cout << qnt << "\n";
    }
}
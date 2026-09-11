#include <bits/stdc++.h>
using namespace std;

unsigned long long trocarBits(unsigned long long n, int p1, int p2){
    unsigned long long bit1 = (n >> p1) & 1;
    unsigned long long bit2 = (n >> p2) & 1;

    if(bit1 != bit2){
        unsigned long long mascara = (1ULL << p1) | (1ULL << p2);

        n ^= mascara;
    }

    return n;
}

int main(){
    // optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        unsigned long long num = 0;
        int p, q;
        cin >> num >> p >> q;

        cout << trocarBits(num, p, q) << "\n";
    }
}
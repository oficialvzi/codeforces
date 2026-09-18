#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    unsigned long long saida = 0;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        saida = saida | (1ULL << a);
    }

    cout << saida << "\n";
}
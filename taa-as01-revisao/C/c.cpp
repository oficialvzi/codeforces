#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        cout << a[i];
        if (i < n) cout << " ";
    }
    cout << "\n";

    int trocas = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i] < a[j]){
                swap(a[i], a[j]);
                trocas++;
            }
        }
        for (int k = 0; k < n; k++){
            cout << a[k] << " ";
        }
        cout << "- " << trocas << "\n";
    }

    return 0;
}
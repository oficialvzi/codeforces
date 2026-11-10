#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    //fixa um numero e faz dois ponteiros no resto
    for(int i = 0; i < n - 2; i++){
        int l = i + 1, r = n - 1;

        while(l < r){
            int soma = v[i] + v[l] + v[r];

            if(soma == k){
                cout << v[i] << " " << v[l] << " " << v[r] << "\n";
                return 0;
            }else if(soma < k){
                l++;
            }else{
                r--;
            }
        }
    }

    cout << "Nao existe" << "\n";
}

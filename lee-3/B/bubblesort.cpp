#include <bits/stdc++.h>
using namespace std;

void imprimir(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        if(i == v.size() - 1){
            cout << v[i];
        }else{
            cout << v[i] << " ";
        }
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    //primeiro imprime a sequencia original
    imprimir(v);

    //bubble sort normal: vai comparando de dois em dois e o maior vai "subindo" pro final
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
                //toda vez que trocar, imprime a sequencia inteira
                imprimir(v);
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

void imprimir(vector<int> &a){
    for (int i = 0; i < (int)a.size(); i++){
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << "\n";
}

int insertionSort(vector<int> &a){
    int counter = 0;
    int n = a.size();

    imprimir(a); // sequência original

    for (int i = 1; i < n; i++){
        int value = a[i];
        int j = i;
        while (j > 0 && a[j - 1] > value){
            a[j] = a[j - 1];
            j--;
            counter++;
        }
        a[j] = value;
        imprimir(a); 
    }
    return counter;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    int deslocamentos = insertionSort(A);

    cout << deslocamentos << "\n";
}
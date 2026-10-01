#include <bits/stdc++.h>
using namespace std;

int selectionSort(vector<int>& a){
    int counter = 0;
    for(int i = 0; i < a.size() - 1; i++){
        int minIndex = i;
        for(int j = i+1; j < a.size(); j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(a[i], a[minIndex]);
            counter++;
        }
    }
    return counter;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> A(N);

    for(int i = 0; i < N; i ++){
        cin >> A[i];
    }
    
    int trocas = selectionSort(A);

    for(int i = 0; i < N; i++){
        if(i > 0) cout << " ";
        cout << A[i];
    }
    cout << "\n";
    cout << trocas << "\n";
}
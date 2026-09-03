#include <iostream>
#include <vector>

int main(){
    // optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    const int MAXN = 30;

    //utilizaremos um array pois com recursividade a funcao iria estourar muito rapido
    std::vector<long long> f(MAXN + 1); 
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= MAXN; i++){
        f[i] = f[f[i - 1]] + f[i - f[i - 1]];
    }

    int C = 0;
    std::cin >> C;

    while (C--){
        int N;
        std::cin >> N;
        std::cout << f[N] << "\n";
    }

    return 0;
}

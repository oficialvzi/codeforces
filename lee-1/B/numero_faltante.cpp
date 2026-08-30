#include <iostream>

int main(){
    //optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N = 0;
    std::cin >> N;

    // formula para achar a soma esperada de '1 a N'
    long long esperado = (long long) N * (N + 1) / 2;

    long long fornecido = 0;
    for (int i = 0; i < N - 1; i++)
    {
        int num;
        std::cin >> num;
        fornecido += num;
    }
    
    std::cout << esperado - fornecido << '\n';
    
    return 0;
}
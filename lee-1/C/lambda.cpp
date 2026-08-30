#include <iostream>
#include <vector>

long long P(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    //resolve o problema da complexidade ficar muito alta 
    //guarda os dois ultimos numeros para nao ter que calcular novamnete toda vez
    long long p_anterior2 = 0; //P(n-2)
    long long p_anterior1 = 1; // P(n-1)
    long long p_atual = 0;     // P(n)

    for(int i = 2; i <= n; i++){
        p_atual = 2 * p_anterior1 + p_anterior2;
        p_anterior2 = p_anterior1;
        p_anterior1 = p_atual;
    }

    return p_atual;

}
int main(){
    //optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int C = 0;
    std::cin >> C;

    std::vector<long long> N(C); //vetor de tamanho C (ou mais)
    for(int i = 0; i < C; i++){
        std::cin >> N[i];     
    }
    for (int i = 0; i < C; i++){
        std::cout << P(N[i]) << '\n';
    }

    return 0;
}

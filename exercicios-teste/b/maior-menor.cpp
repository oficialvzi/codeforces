#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    std::vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] > b[i])
            std::cout << a[i] << " " << b[i] << '\n';
        else{
            std::cout << b[i] << " " << a[i] << '\n';
        }
        
    }

    return 0;
}

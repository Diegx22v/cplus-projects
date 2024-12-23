#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,contador = 0;
    cin >> n;
    vector<int> tripletas;
    for (int i = 0; i < n; ++i)
    {
        int ing;
        cin >> ing;
        tripletas.push_back(ing);
    }
    for (int i = 0; i < n -2; ++i)
    {
        for ( int j = i + 1; j < n-1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (tripletas[i] + tripletas[j] + tripletas[k] == 5000)
                    contador++;
            }
        }
    }
    cout << contador;
    return 0;
}

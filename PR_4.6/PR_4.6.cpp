#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S_all, S_part;
    int n, k;

    S_all = 0;
    k = 1;
    while (k <= 10)
    {
        S_part = 0;
        n = 1;
        while (n <= k)
        {
            S_part += sin(k * n);
            n++;
        }
        S_all += S_part / k;
        k++;
    }
    cout << "1) while: " << S_all << endl;

    S_all = 0;
    k = 1;
    do {
        S_part = 0;
        n = 1;
        do {
            S_part += sin(k * n);
            n++;
        } while (n <= k);
        S_all += S_part / k;
        k++;
    } while (k <= 10);
    cout << "2) do-while: " << S_all << endl;

    S_all = 0;
    for (k = 1; k <= 10; k++)
    {
        S_part = 0;
        for (n = 1; n <= k; n++)
        {
            S_part += sin(k * n);
        }
        S_all += S_part / k;
    }
    cout << "3) for++: " << S_all << endl;

    S_all = 0;
    for (k = 10; k >= 1; k--)
    {
        S_part = 0;
        for (n = k; n >= 1; n--)
        {
            S_part += sin(k * n);
        }
        S_all += S_part / k;
    }
    cout << "4) for--: " << S_all << endl;

    return 0;
}
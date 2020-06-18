#include <bits/stdc++.h>

using namespace std;
int i, j, k, n, m, ok, nr,x,fr[110],max1;
int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        fr[x]++;
    }
    for (i = 1; i <= 100; i++)
        if (fr[i] + fr[i + 1] > max1)
            max1 = fr[i] + fr[i + 1];
    cout << max1;
    return 0;
}

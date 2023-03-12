#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n /= 10;
    }
    cout << sum << endl;
    while (sum > 9)
    {
        int temp = sum;
        sum = 0;
        while (temp > 0)
        {
            int r = temp % 10;
            sum += r;
            temp /= 10;
        }
        cout << sum << endl;
    }
   

    return 0;
}
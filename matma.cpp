#include<bits/stdc++.h>
using namespace std;

char x;
int digit[10];
int sum_digit = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("matma.inp", "r", stdin);
    freopen("matma.out", "w", stdout);

    while(cin >> x)
    {
        sum_digit += x-'0'; // -48
        digit[x-'0']++;
    }
        if(sum_digit % 3 != 0 || digit[0] == 0)
        {
            cout << -1;
            return 0;
        }


    for(int i = 9; i > -1; i--)
        for(int j = 1; j <= digit[i]; j++)
            cout << i;
    return 0;
}

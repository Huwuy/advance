#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("robot.inp", "r", stdin);
    freopen("robot.out", "w", stdout);

    int n;
    cin >> n;
    int cnt = 0;
    int x = N / 2;
    int y = N / 2;
    set<pair<int, int>> mark;

    for (int i = 0; i < n; i++)
    {
        char d;
        int m;
        cin >> d >> m;

        while (m > 0)
        {
            if (d == 'D' && mark.insert({x, y - 1}) )
            {
                cout << mark.insert({x - 1, y})  << " ";
                cnt++;
                y--;
            }
            else if (d == 'R' && mark.insert({x + 1, y}) )
            {
                cnt++;
                x++;
            }
            else if (d == 'U' && mark.insert({x, y + 1}) )
            {
                cnt++;
                y++;
            }
            else if (d == 'L' && mark.insert({x - 1, y}) )
            {
                cnt++;
                x--;
            }
            else
            {
                cnt++;
                break;
            }

            m--;
        }
    }

    cout << cnt;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

void next(char &x) {
    if (x <= 'b') x++;
    else x = 'a';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        char cur = 'a';
        for (int i = 0; i < n; ++i)
        {
            cout << cur;
            next(cur);
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, sum = 0, i;
    scanf("%d%d", &n, &k);
    k = 240 - k;
    for(i = 1;i <= n; i++){
            sum += 5 * i;
            if(sum > k){break;}
    }
    cout << i - 1 << endl;
    return 0;
}

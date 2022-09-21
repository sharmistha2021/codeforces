#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        int ans;
        cin >> n >> k;
        if(n < k){
            if(k%n == 0){
                ans = k / n;
            }
            else{
                ans = (k / n) + 1;
            }
        }
        else{
            if(n%k == 0){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
        cout << ans << endl;

    }
    return 0;
}

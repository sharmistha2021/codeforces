#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x, f = 1;
        cin >> n >> x;
        if(n > 2){
            n = n - 2;
            if(n%x == 0){
                f += n/x;
            }
            else{
                f += (n/x) + 1;
            }
        }
        printf("%d\n", f);
    }
    return 0;
}

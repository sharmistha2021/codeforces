#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int k, n = 0;
        cin >> k;
        for(int i = 1; i < 10000000; i++){
            for(int j = 1; j <= i + 1; j++){
                n += 1;
                if( n == k){
                    cout << j << " " << i << endl;
                    break;
                }
            }
        }

    }
    return 0;
}

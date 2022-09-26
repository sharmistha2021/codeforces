#include <bits/stdc++.h>

using namespace std;

bool cmp (int a, int b){
    return a > b;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, sum = 0;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, cmp);
//        for(int i = 0; i < n; i++){
//            cout << a[i] << endl;
//        }
//        for(int i = 0; i < n; i++){
//            cout << b[i] << endl;
//        }
        for(int i = 1; i <= k; i++){
            if(a[i-1] < b[i-1]){
                a[i-1] = b[i-1];
            }
        }
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}

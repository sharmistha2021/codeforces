#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int Max = arr[0];
        for(int i = 0; i < n; i++){
            if(Max < arr[i]){
                Max = arr[i];
            }
        }
        int Min = arr[0];
        for(int i = 0; i < n; i++){
            if(Min > arr[i]){
                Min = arr[i];
            }
        }
        cout << Max - Min << endl;
    }
    return 0;
}

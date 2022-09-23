#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int arr[100], n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int pos1 = 0;
        int pos2, sum1 = 1, sum2 = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[0]){
                sum1++;
            }
            else{
                pos2 = i;
                sum2++;
            }
        }
    if(sum1 == 1)
        cout << pos1+1 << endl;
    else
        cout << pos2+1 << endl;
    }


    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector <int> v;
    cin >> n;
    int arr[100005];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        v.push_back(1);
    }
    int j = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            v[j]++;
        }
        else{
            j++;
        }
    }

    int ans = 0;
    for(int i = 1; i <= v.size(); i++){
        ans = max(ans, min(v[i], v[i-1]));
    }

    cout << ans * 2 << endl;

    return 0;
}

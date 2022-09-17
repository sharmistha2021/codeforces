#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int arr[26];
        for(int i = 0; i < 26; i++){
            arr[i] = 1;
        }
        int k = 0;
        for(int i = 65; i < 92; i++){
            for(int j = 0; j < s.length(); j++){
                if(s[j] == i){
                    arr[k] += 1;
                }
            }
             k++;
        }
        int sum = 0;
        for(int i = 0; i < 26; i++){
                if(arr[i] > 1){
                    sum += arr[i];
                }
        }
        cout << sum << endl;
    }
    return 0;
}

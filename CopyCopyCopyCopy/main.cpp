#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        vector < int > num;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            num.push_back(a);
        }
        sort(num.begin(), num.end());
        int c = 1;
        for(int i = 0; i < num.size() - 1; i++){
            if(num[i] != num[i + 1]){
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}

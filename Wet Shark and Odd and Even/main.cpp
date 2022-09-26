#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, sum = 0, min_odd = 999999999;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        sum += num;
        if(num % 2 != 0){
            if (num < min_odd) {
                min_odd = num;
            }
        }

    }

    ((sum % 2) == 0) ? cout << sum : cout << sum - min_odd;
    cout << endl;
//    cout << "sum" << sum << endl;
//    if(sum % 2 != 0){
//        sort(odd, odd + siz);
//        cout << "index 0 :" << odd[0] << endl;
//        sum = sum - odd[0];
//        cout << sum << endl;
//    }
//    else
//        cout << sum << endl;


    return 0;
}

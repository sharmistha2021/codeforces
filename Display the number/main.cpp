#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int light, n;
        cin >> light;
        long long int noOfDigits = light/2;
        if(light%2 == 0){
            n = 1;
        }
        else{
            n = 7;
        }
        //int flag = 0;
        for(long long int i = noOfDigits; i > 0; i--){
          //long long int p = 10;
           // n = (n * p) + 1;
            //p = p * 10;
           // if(flag = 0)
                cout << n;
           // else
             //   cout << "1" << endl;
             n = 1;
        }
         cout << endl;
    }

    return 0;
}

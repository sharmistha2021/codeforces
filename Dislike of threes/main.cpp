#include <bits/stdc++.h>

using namespace std;


//
//int sequence(int n){
//
//    for(int i = 0; i <= 1666; i++){
//            if(i % 3 == 0){
//                continue;
//            }
//            int l = i % 10;
//            if(l == 3){
//               continue;
//            }
//            else{
//                v.push_back(i);
//            }
//    }
//    return v[n];
//}

int main()
{
    int t;
    cin >> t;
    vector < int > v;
    for(int i = 1; i <= 1666; i++){
            if(i % 3 == 0){
                continue;
            }
            int l = i % 10;
            if(l == 3){
               continue;
            }
            else{
                v.push_back(i);
            }
    }
    while(t--){
            int n;
            cin >> n;
            cout << v[n-1] << endl;
    }
    return 0;
}

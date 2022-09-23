#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int a, b, m1, m2, m3, m4, flag = 0;
        cin >> a >> b;
       // if(b%2 == 0){
        //    flag = 1;
           // break;
       // }
        while(a--){
            cin >> m1 >> m2 >> m3 >> m4;
            if(m2 == m3){
                if(b%2 == 0){
                flag = 1;
               // break;
               cout << flag << endl;
                }
            }
        }
        if(flag = 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

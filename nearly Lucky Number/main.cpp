#include <iostream>

using namespace std;

int main()
{
    long long int num, count = 0;
    cin >> num;
    while(num != 0){
        int n;
        n = num % 10;
        num = num / 10;
        if((n == 7) || (n == 4))
            count++;
    }
    if(count == 7 || count == 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

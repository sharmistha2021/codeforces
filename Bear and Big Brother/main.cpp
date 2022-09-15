#include <iostream>

using namespace std;

int main()
{
    int a, b, i = 1;
    cin >> a >> b;
    while(a <= b){
        b = b * 2 * i;
        a = a * 3 * i;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}

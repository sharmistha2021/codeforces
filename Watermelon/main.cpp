#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if(w < 4)cout << "No" << endl;
    else
    w % 2 == 0 ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}

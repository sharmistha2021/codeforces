#include <iostream>

using namespace std;

int main()
{
    int num, noOfSub;
    cin >> num >> noOfSub;
    for(int i = 0; i < noOfSub; i++)
    {
        if(num%10 == 0)
        {
            num = num / 10;
        }
        else
        {
            num = num - 1;
        }
    }
    cout << num << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter Two Numbers: ";
    cin >> x >> y;

    int max, min;

    if (x > y)
    {
        max = x;
        min = y;

        cout << "Max= " << max << endl;
        cout << "Min= " << min << endl;
    }
    else if (y > x)
    {

        max = y;
        min = x;
        cout << "Max= " << max << endl;
        cout << "Min= " << min << endl;
    }

    else
    {
        cout << "Both are equal" << endl;
    }

    return 0;
}
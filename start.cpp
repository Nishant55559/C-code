#include <iostream>
using namespace std;
int main()
{

    /*  cout << "hello world" << endl;*/

    int a, b, c;
S
    cout << "enter the first no a";
    cin >> a;

    cout << "enter the second no b ";
    cin >> b;

    cout << "enter the second no c ";
    cin >> c;
    /*
          cout << "a + b is " << a + b << endl;

          cout << "a * b is " << a * b << endl;

          cout << "a - b is " << a - b << endl;

          cout << "a / b is " << (float)a / b << endl;*/

    if (a < b)
    {
        if (b < c)
        {
            cout << "c is greater" << endl;
        }

        else
        {

            (cout << "b is greater") << endl;
        }
    }

    if (a > b)
    {
        if (a < c)
        {
            cout << "c is greater" << endl;
        }

        else
        {

            cout << "a is greater" << endl;
        }
    }

    return 0;
}

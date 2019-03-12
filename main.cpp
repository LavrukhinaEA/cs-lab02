#include <iostream>

using namespace std;

int main()
{
    int a, b, max, min;
    cout << "Enter A  and B: ";
    cin >> a >> b;

    if(a > b){
        min = b;
    }
    else
        min = a;


    if(a > b){
        max = a;
    }
    else
        max = b;

    cout << "A + B = " << a + b << '\n'
        << "A - B = " << a - b << '\n'
        << "A * B = " << a * b << '\n'
        << "A / B = " << a / b << '\n'

        << "max = " << max << '\n'

        << "min = " << min << '\n';

    return 0;
}

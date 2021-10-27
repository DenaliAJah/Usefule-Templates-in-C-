#include <iostream>
#include<iomanip>

using namespace std; 

int main () 
{
    double a;
    double b;
    char c; 
    double result; 
    string deF; 

    cout << "Enter a number:" << endl; 
    cin >> a; 
    cout << "Enter another number:" << endl; 
    cin >> b; 
    cout << "Enter an operator:" <<  endl; 
    cin >> c; 

    cout << fixed << setprecision(2); 

    switch (c) 
    {
        case '+':
        result = a + b; 
        cout << a << " " << c << " " << b << " " << "=" << " " << result << endl; 
        break; 

        case '-':
        result = a - b;
        cout << a << " " << c << " " << b << " " << "=" << " " << result << endl; 
        break;

        case '*' : 
        result = a * b;
        cout << a << " " << c << " " << b << " " << "=" << " " << result << endl; 
        break;

        case '/':
        result = a / b;
        cout << a << " " << c << " " << b << " " << "=" << " " << result << endl; 
        break; 

        default: 
        deF = "Invalad operator!";
        cout << deF; 
    }
}
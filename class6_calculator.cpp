#include <iostream>
#include <cmath>

using namespace std;

class simplecalculator
{
protected:
    int n1, n2;

public:
    void simple_show(char s)
    {
        switch (s)
        {
        case '+':
            cout << "the addition of both numbers are : " << n1 + n2 << endl;
            break;
        case '-':
            cout << "the addition of both numbers are : " << n1 - n2 << endl;
            break;
        case '*':
            cout << "the addition of both numbers are : " << n1 * n2 << endl;
            break;
        case '/':
            cout << "the addition of both numbers are : " << (float)(n1 / n2) << endl;
            break;
        default:
            cout << "sorry not able understand" << endl;
            break;
        }
    }
};

class scientific_calculator
{
protected:
    int n3, n4;

public:
    void scientific_show(char s)
    {
        switch (s)
        {
        case 's':
            cout << "The value of sin(" << n3 << ") and sin(" << n4 << ") is : " << sin(n3) << " and " << sin(n4) << endl;
            break;
        case 'c':
            cout << "The value of cos(" << n3 << ") and cos(" << n4 << ") is : " << cos(n3) << " and " << cos(n4) << endl;
            break;
        case 't':
            cout << "The value of tan(" << n3 << ") and tan(" << n4 << ") is : " << tan(n3) << " and " << tan(n4) << endl;
            break;
        case 'e':
            cout << "The value of exp(" << n3 << ") and exp(" << n4 << ") is : " << exp(n3) << " and " << exp(n4) << endl;
            break;
        default:
            cout << "sorry not able to understand" << endl;
            break;
        }
    }
};

class hybrid_calculator : public simplecalculator, public scientific_calculator
{

public:
    void setdata()
    {
        cout << "****************FOR SIMPLE CALCULATOR**********************" << endl;
        cout << "Enter the first number : " << endl;
        cin >> n1;
        cout << "Enter the second number : " << endl;
        cin >> n2;

        cout << "****************FOR SCIENTIFIC CALCULATOR******************" << endl;
        cout << "Enter the first number : " << endl;
        cin >> n3;
        cout << "Enter the second number : " << endl;
        cin >> n4;
    }
};

int main()
{
    hybrid_calculator c;
    c.setdata();
    char s;
    cout << "enter the operation : " << endl;
    cin >> s;
    c.simple_show(s);

    cout << "enter the operation : " << endl;
    cin >> s;
    c.scientific_show(s);

    return 0;
}
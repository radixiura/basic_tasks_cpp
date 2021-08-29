#include <iostream>
 
double getValue()
{
    std::cout << "Enter a double value: ";
    double a;
    std::cin >> a;
    return a;
}
 
char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char sm;
    std::cin >> sm;
    return sm;
}
 
void printResult(double a, char sm, double b)
{
    if (sm == '+')
        std::cout << a << " + " << b << " is " << a + b << '\n';
    else if (sm == '-')
        std::cout << a << " - " << b << " is " << a - b << '\n';
    else if (sm == '*')
        std::cout << a << " * " << b << " is " << a * b << '\n';
    else if (sm == '/')
        std::cout << a << " / " << b << " is " << a / b << '\n';
}
 
int main()
{
    double a = getValue();
    char sm = getOperator();
    double b = getValue();
 
    printResult(a, sm, b);
 
    return 0;
}

#include<iostream>

using namespace std;

int octalToDecimal(int, int=0, int=0);
void decimalToTernary(int);

int main()
{
    int n;
    cout << "Enter an octal number ->";
    cin >> n;
    cout << "Ternary value of octal number is: ";

    decimalToTernary(octalToDecimal(n));
}
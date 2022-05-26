#include <iostream>

using namespace std;


int octalToDecimal(int oct, int deci = 0, int i = 0) {
    if (oct == 0)
        return deci;

    deci += (oct % 10) * pow(8, i);
    return octalToDecimal(oct / 10, deci, ++i);
}

void decimalToTernary(int N)
{
    if (N == 0)
        return;
    int x = N % 3;
    N /= 3;
    decimalToTernary(N);
    cout << x;
}

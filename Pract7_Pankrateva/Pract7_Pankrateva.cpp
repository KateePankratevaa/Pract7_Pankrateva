#include <iostream>

using namespace std;

int& maxdig(int num)
{
    setlocale(LC_ALL, "Russian");

    static int max(0);

    if (num)
    {
        if (num % 10 > max)
            max = num % 10;
    }
    else
        return max;

    return maxdig(num / 10);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Наибольшее число десятичной записи неотрицательного числа: " << maxdig(1234856789) << endl;

}


#include <iostream>
#include <cstdarg>
#include <vector>

int polynomial(int x, int n, ...)
{
    va_list list;
    va_start(list, n);
    std::vector<int> allCoefficient(n + 1);

    for (int i{}; i <= n; i++)
    {
        allCoefficient[i] = va_arg(list, int);
    }
    va_end(list);

    int result{allCoefficient[0]};

    for(int i{1}; i < allCoefficient.size(); i++)
    {
        result = result*x + allCoefficient[i];
    }
    return result;
}


int main()
{
    std::cout << "Student: Drobotun Yulija \nGroup: M8O-210B-20\n";

    std::cout << "Result: " << polynomial(4, 3, 1, 2, 3, 4) << '\n';
    return 0;
}

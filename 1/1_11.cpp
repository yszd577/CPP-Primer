#include <iostream>
int main()
{
    int low, high;
    std::cout << "please input two integers:" << std::endl;
    std::cin >> low >> high;
    if (low > high)
    {
        int temp = low;
        low = high;
        high = temp;
    }
    while (low <= high)
    {
        std::cout << low++ << ' ';
    }
    return 0;
}
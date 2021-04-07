#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item currval, val;
    if (std::cin >> currval)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (currval.isbn() == val.isbn())
                cnt++;
            else
            {
                std::cout << currval.isbn() << " occurs " << cnt << " times" << std::endl;
                currval = val;
                cnt = 1;
            }
        }
        std::cout << currval.isbn() << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item total_item, curr_item;
    if (std::cin >> total_item)
    {
        while (std::cin >> curr_item)
            total_item += curr_item;
        std::cout << total_item << std::endl;
    }
    else
        std::cerr << "No data" << std::endl;
    return 0;
}
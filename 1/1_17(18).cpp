#include <iostream>
int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
                ++cnt;
            else
            {
                std::cout << currVal << " occurs " 
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}

/*
* 1
* 1
* 1
* 1
* 1
* ^Z
* 1 occurs 5 times
*/

/* 
   1
   2
   1 occurs 1 times
   3
   2 occurs 1 times
   4
   3 occurs 1 times
   ^Z
   4 occurs 1 times
*/
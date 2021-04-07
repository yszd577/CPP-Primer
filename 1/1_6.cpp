#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl; 
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;   
	std::cout << "The sum of " << v1;
              << " and " << v2;
	          << " is " << v1 + v2 << std::endl;
	return 0;
}

// 1_6.cpp: In function 'int main()':
// 1_6.cpp:8:15: error: expected primary-expression before '<<' token
//                << " and " << v2;
//                ^~
// 1_6.cpp:9:12: error: expected primary-expression before '<<' token
//             << " is " << v1 + v2 << std::endl;
//             ^~
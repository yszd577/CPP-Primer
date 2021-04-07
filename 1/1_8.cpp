#include <iostream>
int main(){
    std::cout << "/*";                  //True, /*
    std::cout << "*/";                  //True, */
    std::cout << /* "*/" */;            //False, Correct: std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;    //True, /*
    return 0;
}
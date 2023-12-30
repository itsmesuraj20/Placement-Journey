
#include <iostream>
#include <limits>
using namespace std;

int main() {

    std::cout << "Int Min " << std::numeric_limits<int>::min() << endl;
    std::cout << "Int Max " << std::numeric_limits<int>::max() << endl;
    std::cout << "Unsigned Int  Min " << std::numeric_limits<unsigned int>::min() << endl;
    std::cout << "Unsigned Int Max " << std::numeric_limits<unsigned int>::max() << endl;
    std::cout << "Long Int Min " << std::numeric_limits<long int>::min() << endl;
    std::cout << "Long Int Max " << std::numeric_limits<long int>::max() << endl;

    std::cout << "Unsigned Long Int Min " << std::numeric_limits<unsigned  long int>::min() <<endl;
    std::cout << "Unsigned Long Int Max " << std::numeric_limits<unsigned  long int>::max() << endl;

}
/*
Int Min -2147483648
Int Max 2147483647
Unsigned Int  Min 0
Unsigned Int Max 4294967295
Long Int Min -2147483648
Long Int Max 2147483647
Unsigned Long Int Min 0
Unsigned Long Int Max 4294967295

*/
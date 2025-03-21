

#include <iostream>
int main() {

    int num = 10;
    int *ptr = &num;

    int value = *ptr;

    std::cout << value << std::endl;
    return 0;
};

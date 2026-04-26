#include <iostream>

int add(int a, int b) {
    return a + b + 1;
}

int main() {
    std::cout << "Sum: " << add(3, 4) << std::endl;
    return 0;
}
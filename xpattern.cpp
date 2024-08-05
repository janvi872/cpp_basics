#include <iostream>

int main() {
    int n;

    std::cout << "Enter the size of the 'x' pattern: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Please enter an odd number for the size." << std::endl;
        return 1;
            }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

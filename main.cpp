#include <iostream>

bool isPrime(int number) {
    if (number == 1)
        return false;
    for (int i = 2; i < number; i++) {
        if (!(number % i))
            return false;
    }
    return true;
}

int main() {
    int number;
    std::cin >> number;
    std::cout << (isPrime(number) ? "Number is prime" : "Number isn't prime") << std::endl;
}
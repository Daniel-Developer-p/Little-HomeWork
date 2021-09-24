#include <iostream>

void podelit_i_umnoshit(int n) {
    std::cout << n / 3 * 3 << std::endl;
}

int main() {
    int num;
    std::cin >> num;
    podelit_i_umnoshit(num);
    return 0;
}

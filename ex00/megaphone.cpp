#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < argc; ++i) {
            for (char *c = argv[i]; *c != '\0'; ++c) {
                std::cout << (char)toupper(*c);
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

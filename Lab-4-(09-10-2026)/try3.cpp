#include <iostream>
using namespace std;

class f {
public:
    f(int ft) {
        int fact = 1;

        for (int i = 1; i <= ft; i++) {
            fact = i * fact;
        }

        cout << fact;
    }
};

int main() {
    f factorial(5);
}

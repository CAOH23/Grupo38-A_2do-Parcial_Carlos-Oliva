#include <iostream>
using namespace std;

// Sobrecarga de funciones con distintos tipos de argumentos
void test(int i) {
    cout << "The int is " << i << endl;
}

void test(double f) {
    cout << "The float is " << f << endl;
}

void test(char const *ch) {
    cout << "The char* is " << ch << endl;
}

int main() {
    test(5);        // Llama a la versión con int
    test(5.5);      // Llama a la versión con double
    test("five");   // Llama a la versión con char const*
    return 0;
}

#include "iostream"
#include "cmath"
using namespace std;

int main() {
    int a, b;
    float c;
    cin >> a >> b;

    //Ако искаме да проверим дали за стойности за а и b не са ни дадени отрицателни стойности можем да напишем следния код

////    while (a < 0 || b < 0) {
////        if (a < 0) {
////            cin >> a;
////        }
////
////        if (b < 0) {
////            cin >> b;
////        }
////    }

    c = (float) sqrt(pow(a, 2) + pow(b, 2));

    cout << c << endl;

    system("pause");
    return 0;
}
#include "iostream"
using namespace std;

int main() {
    int maxChar, minChar;
    int maxInt, minInt;
    long long maxLong, minLong;

    maxChar = CHAR_MAX;
    minChar = CHAR_MIN;

    maxInt = INT_MAX;
    minInt = INT_MIN;

    maxLong = LLONG_MAX;
    minLong = LLONG_MIN;

    printf("Max char value: %d\nMin char: value %d\n", maxChar, minChar);
    printf("Max int value: %d\nMin int: value %d\n", maxInt, minInt);
    printf("Max long value: %lld\nMin long: value %lld\n", maxLong, minLong);

    system("pause");
    return 0;
}
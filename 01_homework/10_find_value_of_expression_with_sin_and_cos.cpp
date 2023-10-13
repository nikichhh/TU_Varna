#define _USE_MATH_DEFINES
#include "iostream"
#include "cmath"
using namespace std;

inline double sind(double angle);
inline double cosd(double angle);

int main() {
    float x, y;
    cin >> x;

    y = float(2 * sind(x) * pow(cosd(x), 2) + 1);
    cout << y << endl;

    system("pause");
    return 0;
}

//Понеже sin и cos работят с радиани съм направил тези две функции, които радианите ми ги превръща в градуси

inline double sind(double angle) {
    return sin(angle * (M_PI / 180));
}

inline double cosd(double angle) {
    return cos(angle * (M_PI / 180));
}
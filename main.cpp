#include <iostream>

using namespace std;

int main()

{
    double C,F;
    cout << "Introduceti Temperatura in grade Fahrenheit:" << endl;
    cin >> F;
    C = (F-32)*5./9;
    cout << "Temperatura in grade Celsius este: " << C <<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()

{
    double G,I,V;
    cout << "Introduceti Inaltimea" << endl;
    cin >> I;
    cout << "Introduceti varsta:" << endl;
    cin >> V;
    G= 50+0.75*(I-150)+0.25*(V-20);
    cout << "Greutatea ideala este :" << G <<endl;
    return 0;
}

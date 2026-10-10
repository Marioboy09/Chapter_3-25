#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double V;
    double R;
    double E;
    double S;

    cout << "Enter the length of row, in feet: ";
    cin >> R;

    cout << "Enter the amount of space used by an end-post assembly, in feet: ";
    cin >> E;

    cout << "Enter the amount of space between the vines, in feet: ";
    cin >> S;

    V = (R - (2 * E)) / S;
    
    cout << "The number of grapevines that will fit in the row is: " << V << " in" << endl;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <iomanip>

using namespace std;

double calc(int a)
{
    int count = 1;
    double total;
    for(int x = 0; x < a; x++)
    {
        int b;  
        cout << "Enter age #" << count << ": ";
        cin >> b;

        total = total+b;

        count++;
    }
    return total/a;
}
int main()
{
    int a;

    cout << "Average Age Calculator\nEnter the amount of people: ";
    cin >> a;

    cout << fixed << showpoint << setprecision(2) << calc(a) << " is the average age.\n" << "Input anything to close." << endl;
    cin >> a;

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;
//TODO: make an array, append it within the loop, calculate average of elements in the array.
double calc(int a)
{
    int count;
    for(int x = 0; x < a; x++)
    {
        int age;
        cout << "Enter age #" << count << ": ";
        cin >> age;
        count++;
    }
}
int main()
{
    int a;

    cout << "Average Age Calculator\nEnter the amount of people: ";
    cin >> a;

    calc(a);

    return 0;
}
//Creates 'art' out of random printable ASCII characters.
#include <cstdlib>
#include <random>
#include <fstream>
#include <chrono>

using namespace std;

default_random_engine dre (chrono::steady_clock::now().time_since_epoch().count());

int rng()
{
    uniform_int_distribution<> distr(33, 90);
    return distr(dre);
}
int main()
{
    int x = 0;

    ofstream outFile;

    outFile.open("art.txt");

    for (int x = 0; x < 25; x++)
    {
        for(int x = 0; x < 25; x++)
        {
          char b = char(rng());
          outFile << b << " " 
        }
        outFile << endl;
    }
    outFile.close();
    return 0;
}

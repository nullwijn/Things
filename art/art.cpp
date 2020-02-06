//Creates 'art' out of random printable ASCII characters.
#include <cstdlib>
#include <random>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;
    
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(65, 90);

    outFile.open("art.txt");

    for(int x = 0; x < 25; x++)
    {
        for(int x = 0; x < 25; x++)
        {
            
            char b = char(distr(eng));
            outFile << b << " ";
        }
        outFile << endl;
    }
    outFile.close();
    return 0;
}
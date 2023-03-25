#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, i;
    int res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> i;
    
    i = 1 << i;
    
    res = a ^ i;
    
    ofs << res;

    return 0;
}

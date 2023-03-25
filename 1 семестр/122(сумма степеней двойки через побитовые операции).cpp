#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, m;
    int res1, res2;
    int res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n >> m;
    res1 = 1 << n;
    res2 = 1 << m;
    
    res = res1|res2;
    
    ofs << res;

    return 0;
}

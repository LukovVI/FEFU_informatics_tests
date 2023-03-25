#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, l, n;
    int res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> b >> l >> n;
    
    res = (a*2+b*2)*(n-1) + l*2 + a;
    
    
    ofs << res;

    return 0;
}

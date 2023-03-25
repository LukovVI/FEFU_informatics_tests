#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, n;
    int m = 0;
    int res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> n;
    
    for (int i = 0; i < n; i++){
        m = (m<<1)^1;
    }
    res = a&m;
    
    ofs << res;

    return 0;
}

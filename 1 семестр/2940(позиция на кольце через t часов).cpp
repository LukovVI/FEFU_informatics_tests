#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v, t;
    int res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> v >> t;
    
    res = (v*t)%109;
    
    if (res<0){
        res = 109 + res;
    }
    
    
    ofs << res;

    return 0;
}

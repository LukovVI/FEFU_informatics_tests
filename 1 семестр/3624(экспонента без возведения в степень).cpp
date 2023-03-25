#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    double x, p = 1, res = 1;
    unsigned long long n;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n >> x;
    
    for(int i = 1; i <= n; i++){
        p *= x/i;
        res += p;
    }
    
    ofs << res;
    return 0;
}
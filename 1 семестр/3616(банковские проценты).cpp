#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    double p;
    unsigned long long x, y, s, k;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> p >> x >> y >> k;
    p = p/100;
    s = x * 100 + y;
    for(int i = 0; i < k; i++){
        s += s*p;
    }
    x = s/100;
    y = s%100;
    ofs << x << " " << y;
    return 0;
}
#include <iostream>
#include <fstream>
#include <bitset>
#include <math.h>

using namespace std;

int main()
{
    int a, n;
    int r;
    int m = 0;
    int res1, res2, res;
    int b;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> n;
    r = sizeof(a) * 8;
    n = n%r;
    
    if (a >= 0){
        res1 = a>>(r-n);
        res2 = a<<n;
        res = res1|res2;
    }
    else{
        res1 = ~(~(a)>>(r-n));
        res2 = ~(~(a)<<n);
        res = res1 & res2;
    }
    
    ofs << res;

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    int n;
    double x, n1, res = 0;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n;
    ifs >> x;
    
    for(int i = 0; i<=n; i++){
        ifs >>n1;
        res *=x;
        res += n1;
    }
    
    ofs << res;
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    double a;
    long long b;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a;
    
    a = a*10;
    b = (long long)a;
    b = b%10;
    ofs << b;
    return 0;
}
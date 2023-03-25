#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <iomanip>


using namespace std;

double LF(int n){
    double z = 1, ch = 1;
    for(int i = 0; i < n; i++){
        
        z /= i+1;
        ch += 1*z;
    }
    return ch;
}

int main()
{
    int n;
    
    double res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n;
    
    res = LF(n);
    
    
    ofs <<res;
}
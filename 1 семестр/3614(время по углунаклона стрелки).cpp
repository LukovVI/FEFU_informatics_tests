#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <iomanip>


using namespace std;

int main()
{
    int cek, resch, resmin, rescek;
    double a;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a;
    
    cek = a*120;
    
    resch = cek/3600;
    resmin = (cek/60)%60;
    rescek =cek%60;
    ofs << resch << " " << resmin << " " << rescek;
    return 0;
}
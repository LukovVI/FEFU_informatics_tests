#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char a;
    int n;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a;
    n = (int)a;
    
    if(n > 64 && n < 91){
        a = char(n+32);
    }
    else if(n > 96 && n < 123){
        a = char(n-32);
    }
    
    
    ofs << a;

    return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long n, res, s = 0, sr, a, a1;
    
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n;
    for(int i = 0; i <=n; i++){
        s += ((i+n)*(n-i+1))/2 + i*(n-i+1);;
    }
    
    ofs << s << " ";
    return 0;
    
}
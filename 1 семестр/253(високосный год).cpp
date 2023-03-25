#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int a;
    string res = "NO";
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a;
    
    if ((a%4 == 0 && a%100 != 0)|| a%400 == 0){
        res = "YES";
    }
    
    ofs << res;

    return 0;
}

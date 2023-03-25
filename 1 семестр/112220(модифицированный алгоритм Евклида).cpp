#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b;
    int res1, res2;
    int r = 0;
    int res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> b;
    
    while (a > 0 && b > 0){
        if (a > b){
            a = a%b;
        }
        else{
            b = b%a;
        }
	r++;
    }
    res = a + b;
    
    ofs << res <<" "<< r;

    return 0;
}

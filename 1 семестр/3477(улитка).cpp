#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, h;
    int res = 1;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> h >> a >> b;
    
    h = h-a;
    if (h > 0){
        res = res + h/(a-b);
        if (h%(a-b)!= 0){
            res++;
        }
    }
    
    
    ofs << res;

    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int n, res = 0;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> b;
    
    n = a.size();
    for(int i = 0; i < n; i++) if (a[i] != b[i]) res++;
    
    ofs << res;

    return 0;
}

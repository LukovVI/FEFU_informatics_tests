#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <vector>


using namespace std;

int main()
{
    int n;
    int p;
    vector<int> v = {};
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    ifs >> n;
    
    for(int i = 0; i < n; i++){
        ifs >> p;
        v.push_back(p);
    }
    for(int i = 0; i < n/2; i++){
        p = v[i];
        v[i] = v[n-i-1];
        v[n-i-1] = p;
    }
    
    for(int i = 0; i < n; i++){
        ofs << v[i] << " ";
    }
    
    return 0;
}
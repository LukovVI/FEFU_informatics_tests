#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <vector>


using namespace std;

vector<float> kvyr(float a, float b, float c){
    float res1, res2, d;
    d = b*b-(4*a*c);
    if(d > 0){
        res1 = (-b+sqrt(d))/(2*a);
        res2 = (-b-sqrt(d))/(2*a);
        return {res1, res2};
    }
    else if(d == 0){
        res1 = -b/(2*a);
        return {res1};
    }
    return {};
}

int main()
{
    float a, b, c;
    vector<float> res = {};
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> b >> c;
    
    res = kvyr(a, b, c);
    
    for(int i = 0; i < res.size(); i++){
        ofs << res[i] << endl;
    }
    
    return 0;
}
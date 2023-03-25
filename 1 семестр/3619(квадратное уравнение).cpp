#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <vector>


using namespace std;

vector<float> kvyr(float a, float b, float c){
    float res1, res2, d;
    d = b*b-(4*a*c);
    if(a == 0){
        if(b == 0){
            if(c == 0) return {a, b, c};
            return{};
        }
        else{
            return {-c/b};
        }
    }
    
    if(d > 0){
        res1 = (-b+sqrt(d))/(2*a);
        res2 = (-b-sqrt(d))/(2*a);
        return {res1, res2};
    }
    if(d == 0){
        res1 = -b/(2*a);
        return {res1};
    }
    return {};
}

int main()
{
    float a, b, c;
    int s;
    vector<float> res = {};
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> a >> b >> c;
    
    res = kvyr(a, b, c);
    
    s = res.size();
    ofs << s << " ";
    
    if(s == 2){
        if(res[0]>res[1]){
            res = {res[1], res[0]};
        }
    }
    if(s < 3){
        for(int i = 0; i < s; i++){
            ofs << res[i] << " ";
        }
    }
    
    return 0;
}
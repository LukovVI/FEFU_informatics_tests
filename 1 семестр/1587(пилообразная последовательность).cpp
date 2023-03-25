#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    int n, x, x1, res = 0;
    bool b = true, sr = false;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n;
    ifs >> x1;
    
    for(int i = 1; i < n; i++){
        ifs >> x;
        if(x!=x1){
            if(sr){
                if(b){
                    if(x > x1){
                        b = false;
                    }
                    else{
                        res++;
                    }
                }
                else{
                    if(x < x1){
                        b = true;
                    }
                    else{
                        res++;
                    }
                }
            }
            else{
                b = x<x1;
                sr = true;
            }
        }
        else{
            res++;
        }
        x1 = x;
    }
    ofs << res;
    return 0;
}
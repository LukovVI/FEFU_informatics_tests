#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    int n, n1, res = 0, i = 1, p1 = 0, p2 = 0;
    bool p = true;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    ifs >> n1;
    
    do{
        ifs >> n;
        if(n == 0){
            break;
        }
        if(n > n1){
            p = true;
        }
        else{
            if(p){
                p2 = i;
                if(p1>0){
                    if(p2-p1 < res || res == 0){
                        res = p2-p1;
                    }
                }
                p1 = p2;
            }
            p = false;
        }
        i++;
        n1 = n;
    }while (n!=0);
    
    
    
    ofs << res;
    return 0;
}
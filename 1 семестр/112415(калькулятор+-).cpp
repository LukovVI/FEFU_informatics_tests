#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v = {};
    int res = 0, p = 0;
    char d = '0';
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    for(char ch; ifs >> ch; ){
        if (ch >= '0' && ch <='9'){
            p = p*10+((int)ch-48);
        }
        else if(d != '0'){
            switch (d){
                case '+': res += p; p = 0; break;
                case '-': res -= p; p = 0; break;
            }
            d = ch;
        }
        else {
            res = p;
            p = 0;
            d = ch;
        }
        
    }
    switch (d){
        case '+': res += p; break;
        case '-': res -= p; break;
    }
    ofs << res;
    return 0;
}

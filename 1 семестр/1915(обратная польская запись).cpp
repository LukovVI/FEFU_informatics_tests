#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v = {};
    int l = -1;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    for(char ch; ifs >> ch; ){
        if (ch >= '0' && ch <='9'){
            v.push_back((int)ch-48);
            l++;
        }
        else{
            switch (ch){
                case '+': v[l-1] = v[l-1] + v[l]; v.pop_back(); l--; break;
                case '-': v[l-1] = v[l-1] - v[l]; v.pop_back(); l--; break;
                case '*': v[l-1] = v[l-1] * v[l]; v.pop_back(); l--; break;
            }
        }
    }
    ofs << v[0];
    return 0;
}

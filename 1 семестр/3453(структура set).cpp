#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <set>

using namespace std;

int main()
{
    string st;
    int n;
    int elem;
    set<int> mas = {};
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n;
    
    for(int i = 0; i < n; i++){
        ifs >> st;
        if(st != "COUNT"){
            ifs >> elem;
            if(st == "ADD"){
                mas.insert(elem);
            }
            else{
                if(mas.count(elem)){
                    ofs << "YES" << endl;
                }
                else{
                    ofs << "NO" << endl;
                }
            }
        }
        else{
            ofs << mas.size() << endl;
        }
    }
    
    return 0;
}
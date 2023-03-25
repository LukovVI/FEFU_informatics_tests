#include <fstream>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int pere(char s){
    if(s == '+' || s == '-') return 0;
    if(s > '0' && s <= '9') return 1;
    if(s == '0') return 2;
    if(s == '.') return 3;
    if(s == 'e' || s == 'E') return 4;
    return 5;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 2, 10, 10, 10, 10}, {10, 4, 4, 10, 10, 10, 10}, {10, 2, 2, 5, 6, 10, 11}, {10, 10, 10, 5, 10, 10, 11}, {10, 10, 10, 5, 6, 10, 11}, {10, 7, 7, 10, 10, 10, 10}, {8, 9, 9, 10, 10, 10, 10}, {10, 7, 7, 10, 6, 10, 11}, {10, 9, 9, 10, 10, 10, 10}, {10, 9, 9, 10, 10, 10, 11}};
    int p = 0;
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    for(char ch; ifs >> ch; ){
        p = v[p][pere(ch)];
        if(p == 10){
            ofs << "NO";
            return 0;
        }
    }
    if(v[p][6] == 11) ofs << "YES";
    else ofs << "NO";
    return 0;
}

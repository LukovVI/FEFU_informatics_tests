#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main()
{
    int n;
    int p;
    int j;
    int res = 0;
    vector<int> v = {};
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n;
    
    for(int i = 0; i < n; i++){
        ifs >> p;
        v.push_back(p);
    }
    for(int i = 1; i < v.size(); i++){
        if(v[i-1] == v[i]){
            j = i;
            while(j<v.size()-1 && v[j] == v[j+1]){
                j++;
            }
            if(j - i > 0){
                v.erase(v.cbegin() + i - 1, v.cbegin() + j + 1);
                i= 0;
            }
        }
    }
    res = n-v.size();
    ofs << res;
    return 0;
}
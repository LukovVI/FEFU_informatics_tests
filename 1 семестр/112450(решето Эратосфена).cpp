#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

vector<int> pr = {2};

void del(int d, int p){
        int si;
        si = pr.size();
        auto beg = pr.begin();
        for(int j = si-1; j>p; j--){
            if(pr[j]%d == 0){
                pr.erase(beg + j);
            }
        }
    }
    
int main()
{
    int n;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> n;
    
    for(int i = 3; i<=n; i += 2){
        pr.push_back(i);
    }
    
    for(int i = 1; i<pr.size(); i++){
        del(pr[i], i);
    }
    
    n = pr.size();
    
    for(int i = 0; i < n; i++){
        ofs << pr[i] << endl;
    }
    
    return 0;
}

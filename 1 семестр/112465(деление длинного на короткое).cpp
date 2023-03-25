#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{   
    string a;
    long long b;
    vector<int> int_1 = {}, int_2 = {};
    int n, n1, n2, p, t;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    
    ifs >> a >> b;
    n1 = a.size();
    
    for(int i = 0; i < n1; i++) int_1.push_back((int)a[i]-48);
    
    t = 0;
    
    for(int i = 0; i<n1; i++){
        t = t*10 + int_1[i];
        if(int_2.size() > 0 || t/b > 0){
            int_2.push_back(t/b);
            t = t%b;
        }
    }
    
    n = int_2.size();
    
    for(int i = 0; i<n; i++) ofs << int_2[i];
    ofs << endl << t;
    return 0;
}

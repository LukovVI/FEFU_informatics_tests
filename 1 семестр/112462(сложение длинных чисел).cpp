#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{   
    string a, b;
    vector<int> int_1 = {}, int_2 = {};
    int n, n1, n2, p, t;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    
    ifs >> a >> b;
    n1 = a.size();
    n2 = b.size();
    
    for(int i = 0; i < n1; i++) int_1.push_back((int)a[i]-48);
    
    for(int i = 0; i < n2; i++) int_2.push_back((int)b[i]-48);
    
    n = max(n1, n2);
    
    for(int i = 0; i<n1/2; i++){
        p = int_1[i];
        int_1[i] = int_1[n1-i-1];
        int_1[n1-i-1] = p;
    }
    
    for(int i = 0; i<n2/2; i++){
        p = int_2[i];
        int_2[i] = int_2[n2-i-1];
        int_2[n2-i-1] = p;
    }
    
    for(int i = n1; i<n; i++) int_1.push_back(0);
    
    for(int i = n2; i<n; i++) int_2.push_back(0);
    
    t = 0;
    
    for(int i = 0; i<n; i++){
        p = int_1[i] + int_2[i] + t;
        int_1[i] = p%10;
        t = p/10;
    }
    if(t != 0){
        int_1.push_back(t);
        n++;
    }
    for(int i = n-1; i>=0; i--) ofs << int_1[i];
    return 0;
}

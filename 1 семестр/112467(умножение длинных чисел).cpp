#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{   
    string a, b;
    vector<int> int_1 = {}, int_2 = {};
    int n1, n2, n3, p, t;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    
    ifs >> a >> b;
    n1 = a.size();
    n2 = b.size();
    n3 = n1+n2;
    vector<int> int_3(n3, 0);
    for(int i = 0; i < n1; i++) int_1.push_back((int)a[i]-48);
    for(int i = 0; i < n2; i++) int_2.push_back((int)b[i]-48);
    
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
    
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            int ij = i+j;
            t = int_1[i] * int_2[j];
            int_3[ij] += t;
            int_3[ij+1] += int_3[ij]/10;
            int_3[ij] = int_3[ij]%10;
            if(int_3[ij+1] > 9) int_3[ij+2] += int_3[ij+1]/10;
            int_3[ij+1] = int_3[ij+1]%10;
        }
    }
    
    if(int_3[n3-1]==0) n3 -= 1;
    for(int i = n3-1; i>=0; i--) ofs << int_3[i];
    return 0;
}

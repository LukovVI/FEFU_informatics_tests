#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int dx, mx, gx;
    int dn, mn, gn;
    int numx, numn;
    int res;
    
    ifstream ifs ("input.txt");
    ofstream ofs ("output.txt");
    
    ifs >> dx >> mx >> dn >> mn >> gn;
    
    if (mx > mn){
        gx = gn;
    }
    else if (mx == mn && dx >= dn){
        gx = gn;
    }
    else {
        gx = gn+1;
    }
    
    if (mx ==2 && dx == 29){
        while (!((gx%4 == 0 && gx%100!=0) || gx%400 == 0)){
            gx++;
        }
    }
    
    int ax, mkx, ykx;
    int an, mkn, ykn;
    
    ax = (14-mx)/12;
    mkx = mx + 12*ax - 3;
    ykx = gx + 4800 - ax;
    
    an = (14-mn)/12;
    mkn = mn + 12*an - 3;
    ykn = gn + 4800 - an;
    
    numx = dx + ((153*mkx)+2)/5 + 365*ykx +ykx/4 -ykx/100 + ykx/400;
    numn = dn + ((153*mkn)+2)/5 + 365*ykn +ykn/4 -ykn/100 + ykn/400;
    res = numx - numn;
    
    ofs << res;

    return 0;
}
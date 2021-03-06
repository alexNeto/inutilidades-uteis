#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct fraction{
    int numerator;
    int denomenator;
}fra;

int gcd(int u, int v){
    int r;
    while(true){
        r = u % v;
        if(r == 0)
            break;
        u = v;
        v = r;
    }

    return v;
}

int main()
{
    while(true){
        while(cin >> fra.numerator && cin >> fra.denomenator){
            if(fra.numerator > 0 && fra.denomenator > 0) cout << fra.numerator << ' '
                                                              << fra.denomenator << ' '
                                                              << gcd(fra.numerator, fra.denomenator)
                                                              << endl;
            else{
                fra.numerator = 0;
                fra.denomenator = 0;
                break;
            }
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <cmath>
#include <chrono>

using namespace std;

int main() {
    string setPass = "373905289";

    int setPassLen = setPass.length();
    long long passCombi = pow(10, setPassLen);

    cout << "Checking " << passCombi << " Combination" << endl;

    auto starttime = chrono::high_resolution_clock::now();

    for (long long i=0; i<passCombi; i++ ) {
        
        string istr = to_string(i);
        
        if ( istr.length() < setPassLen ) {
            istr = string(setPassLen - istr.length(), '0') + istr;
        };

        if (istr == setPass) {

            auto endtime = chrono::high_resolution_clock::now();

            chrono::duration<double> elapsed = endtime - starttime;

            cout << "The password is -- " << istr << endl;
            cout << "It took " << elapsed.count() << " sec" << endl;
            break;
            };
    };

    return 0;
};


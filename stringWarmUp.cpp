/* stringWarmUp.cpp
0836901 9/8/25
reversing Strings */

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
    /*
    cout<<"Ola. Como vai?"<<endl;
    string ddt = "Dengxiaoping";
    cout<<ddt<<endl;

    reverse(ddt.begin(), ddt.end());

    cout << "\nMy reversed string is: " << ddt << endl;

    char fee[] = "Call this number right now!";

    reverse(fee, fee + strlen(fee));
    cout << fee << endl;

    string wiseWords = "supercalifragilisticexpialidocious";

    cout << wiseWords << endl;

    cout << wiseWords[2] << endl;
    int strlength = wiseWords.length();
    cout << strlength << endl;

    char tempChr;

    for (int i = 0; i <= strlength/2; i++) {

        //cout << "i = " << i << " and the char at " << i << " is " << wiseWords[i] << endl;
        tempChr = wiseWords[i];
        wiseWords[i] = wiseWords[strlength - i - 1];
        wiseWords[strlength - i - 1] = tempChr;
        cout << tempChr << endl;
    }
    */
    int bbn[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };

    cout << bbn[0][1] << endl;

    return 0;


}


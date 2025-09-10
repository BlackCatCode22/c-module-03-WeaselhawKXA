/* [program name].cpp
0836901 9/10/2025 */

#include <iostream>
#include <cctype>

using namespace std;


int main()
{
    int n = 5;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2=&v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

    int boingo;
    int* ptr3=&boingo;
    *ptr3 = 2;
    cout << "boingo=" << boingo << endl;

    int ngage = 32;
    int* pngage = &ngage;
    double tigerE = 22.4;
    double * ptigerE = &tigerE;
    string brickGame = "\nNGage gawt moar gaem then u gawt brensals.";
    string* pbrickGame = &brickGame;

    /*
    cout << "ngage:" << &ngage << endl;
    cout << "tigerE:" << &tigerE << endl;
    cout << "brickGame:" << &brickGame << endl;
    */

    cout << *pbrickGame << endl;
    cout << *&tigerE << endl;
    cout << pngage << endl;

    cout << "Press any key to exit.";
    system("pause>0");
    return 0;


}
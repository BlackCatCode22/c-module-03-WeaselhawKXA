/* [linkedListPopQuiz.cpp]
0836901 Le 17 sept 2025
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Node{
        char data;
        Node* next;
    };

int main() {

    //Right now, pHead points to nothing.
    string myStr = "abcDefg";
    //Testing the struct, I think.
    //Creates a pointer called pHead.
    Node* pHead = nullptr;
    //Create a new node.
    Node* pNew = new Node();
    pNew->data = myStr[0];
    pNew->next = nullptr;
    //Some output to see what it looks like, sort of.
    cout << pNew->data << endl;
    cout << pNew->next << endl;
    //The linked list is made.
    pHead = pNew;

    //Time fo a lil verificaaaashunh.
    cout << pHead->data << endl;
    cout << pHead->next << endl;

    //Jonny! Jonny!
    //Yes, Papa?
    //Adding nodes?
    //No, Papa.
    //Telling lies?
    //No, Papa.
    //Memory leaked.
    pNew = new Node();

    printf ("Blunt");
    return 0;
}
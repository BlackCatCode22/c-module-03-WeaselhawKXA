/* [kalinklistKalinklist.cpp]
0836901 Le 15 sept 2025
 */


#include <iostream>

using namespace std;

struct Node{
    public:
        char data;
    Node* pNext;
};

void repeat(){
    Node* pNew=new Node();
    pNew->data=0;
    pNew->pNext=nullptr;
    Node* pHead = pNew;


    for(int i=1;i<5;i++) {
        pNew=new Node;
        pNew->data='i';
        pNew->pNext=pHead;
        pHead=pNew;
    }
}

int main() {
    Node* pHead=new Node();
    pHead->data='A';
    pHead->pNext=nullptr;

    Node* pNew=new Node();
    pNew->data='B';
    pNew->pNext=pHead;
    pHead=pNew;

    /*Node* pNeo=new Node();
    pNeo->data='C';
    pNeo->pNext=nullptr;
    pNeo=pNew;

    pNew=pHead;
    pHead->data='A';*/


    repeat();
    return 0;
}
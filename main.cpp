
#include<iostream>
#include"ListNode.h"
#include"headers.h"
#include"func.h"
#include<string>
using namespace std;


int main(void){

    vector<int> vec = {1,2,3,4,5,6};
    ListNode* list = makeListNode(vec);
    ListNode** pHead = &list;
    printNode(pHead);
    
    return 0;
}
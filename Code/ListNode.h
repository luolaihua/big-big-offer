#include"headers.h"
using namespace std;
struct ListNode
{
    /* data */
    int val;
    ListNode *next;
    ListNode():val(0),next(nullptr){}
    ListNode(int value):val(value),next(nullptr){}
};
//使用指针的指针，是为了防止传入空指针
void AddToTail(ListNode** pHead,int value);
int RemoveNode(ListNode** pHead,int value);
void printNode(ListNode** pHead);

    // ListNode *test = new ListNode(666);
    // ListNode** pHead = &test;
    // AddToTail(pHead,555);
    // AddToTail(pHead,444);
    // AddToTail(pHead,333);
    // AddToTail(pHead,222);
    // printNode(pHead);
    // RemoveNode(pHead,444);
    // cout << "----------" <<endl;
    
    // printNode(pHead);
/**
 * @brief 根据数组生成指针
 * 
 * @param vec 
 */
ListNode* makeListNode(vector<int> &vec);
/**
 * @brief 从尾到头打印链表
 * 
 * @param head 
 */
vector<int> printListReversingly(ListNode *head);

#include "ListNode.h"

using namespace std;
/**
 * @brief 在尾部插入一个节点
 * 
 * @param pHead 
 * @param value 
 */
void AddToTail(ListNode **pHead, int value)
{
    ListNode *pNew = new ListNode(value);
    if (*pHead == nullptr)
    {
        *pHead = pNew;
        return;
    }
    ListNode *cur = *pHead;
    while (cur->next)
    {
        cur = cur->next;
    }
    cur->next = pNew;
}
/**
 * @brief 删除值为alue的节点
 * 
 * @param pHead 
 * @param value 
 * @return int 
 */
int RemoveNode(ListNode **pHead, int value)
{
    if (pHead == nullptr || *pHead == nullptr)
        return 0;
    ListNode *pDeleteNode = nullptr;
    if ((*pHead)->val == value)
    {
        *pHead = (*pHead)->next;
        pDeleteNode = *pHead;
    }
    else
    {
        ListNode *cur = *pHead;
        while (cur->next != nullptr)
        {
            if(cur->next->val == value){
                pDeleteNode = cur->next;
                cur->next = cur->next->next;
                break;
            }else{
                cur = cur->next;
            }
        }
    }
    if(pDeleteNode != nullptr){
        delete pDeleteNode;
        return 1;
    }else{
        return -1;
    }
}
/**
 * @brief 打印链表
 * 
 * @param pHead 
 */
void printNode(ListNode** pHead){
    if(pHead == nullptr) return ;
    ListNode*cur = *pHead;
    cout << "链表打印: " ;
    while(cur){
        std::cout << " "<< cur->val;
        cur = cur->next;
    }
    cout<<endl;
}
ListNode* makeListNode(vector<int> &vec)
{
    int n = vec.size();
    if(n == 0) return nullptr;
    ListNode* head = new ListNode(vec[0]);
    ListNode*pHead = head;
    for(int i=1; i<n;++i)
    {
        head->next = new ListNode(vec[i]);
        head = head->next;
    }
    head->next = nullptr;
    return pHead;
}
vector<int> printListReversingly(ListNode *head)
{
    vector<int> ans;
    //使用栈
    stack<ListNode*> stk;
    while(head != nullptr)
    {
        stk.push(head);
        head = head->next;
    }
    while(!stk.empty())
    {
        ans.push_back(stk.top()->val);
        stk.pop();
    }
    return ans;
}

#include<iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        int temp_val = temp->next->val;
        temp->val = temp_val;
        temp->next = temp->next->next;
    }
};
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
    bool hasCycle(ListNode* head) {
        bool check = false;
        ListNode* fast = head;
        ListNode* slow = head;
        if (slow == NULL)
            return check;
        else {
            while (slow->next != NULL) {
                if (fast == NULL)
                    return check;
                else
                    fast = fast->next;
                if (fast == NULL)
                    return check;
                else
                    fast = fast->next;
                slow = slow->next;
                if (fast == slow) {
                    check = true;
                    break;
                }
            }
            return check;
        }
    }
};
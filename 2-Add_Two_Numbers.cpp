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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry) {
            int digit = carry;
            if (l1 != NULL) {
                digit += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                digit += l2->val;
                l2 = l2->next;
            }

            carry = digit / 10;
            digit = digit % 10;

            ans->next = new ListNode(digit);
            ans = ans->next;
        }

        return dummy->next;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        if (p1 == NULL) {
            return p1;
        } else {
            for (int i = 0; i < n; i++) {
                p1 = p1->next;
            }
            if (n == 1) {
                if (p1 == NULL) {
                    return NULL;
                } else {
                    while (p1->next != NULL) {
                        p1 = p1->next;
                        p2 = p2->next;
                    }
                    p2->next = NULL;
                }
            } else {
                if (p1 == NULL) {
                    head = head->next;
                    return head;
                }
                while (p1->next != NULL) {
                    p1 = p1->next;
                    p2 = p2->next;
                }
                ListNode* temp = (p2->next)->next;
                p2->next = temp;
            }
            return head;
        }
    }
};
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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 1;
        while (temp->next != NULL) {
            count++;
            temp = temp->next;
        }
        int middle = 0;
        if (count % 2 == 0) {
            middle = count / 2 + 1;
        } else {
            middle = ceil(double(count) / 2);
        }
        temp = head;
        for (int i = 0; i < middle-1; i++) {
            temp = temp->next;
        }
        return temp;
    }
};
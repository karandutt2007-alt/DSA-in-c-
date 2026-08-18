#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

int main() {
    int n;
    cin >> n;

    ListNode* head = NULL;
    ListNode* temp = NULL;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if(head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    temp = head;

    while(temp != NULL && temp->next != NULL) {
        if(temp->val == temp->next->val)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }

    temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
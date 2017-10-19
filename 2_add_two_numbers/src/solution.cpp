#include "solution.hpp"

#include <math.h>
#include <sstream>
typedef long big_int;

const big_int SIZE = (big_int)ceil(powf(2, sizeof(big_int) * 8));
unsigned char *pDigits = 0;

ListNode *reverseList(ListNode *head) {
  ListNode *temp = head;
  ListNode *cursor = nullptr;
  ListNode *next;
  while (temp) {
    next = temp->next;
    temp->next = cursor;
    cursor = temp;
    temp = next;
  }
  head = cursor;
  return head;
}

long long getDigits(ListNode *head) {
  head = reverseList(head);
  ListNode *temp = nullptr;
  temp = head;
  std::ostringstream oss;
  while (temp != nullptr) {
    oss << temp->val;
    temp = temp->next;
  }
  std::istringstream iss(oss.str());
  long long response;
  iss >> response;
  return response;
}

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
  ListNode *head = new ListNode(0);

  unsigned long long number = getDigits(l1) + getDigits(l2);

  ListNode *currentNode = head;
  while (number) {
    currentNode->next = new ListNode(number % 10);
    number /= 10;
    currentNode = currentNode->next;
  }
  if (head->next != nullptr) {
    return head->next;
  } else {
    return head;
  }
}
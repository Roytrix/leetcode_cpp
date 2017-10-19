#include "single_linked_list.hpp"
#include <iostream>

void List::addNode(int val) {
  ListNode *temp = new ListNode(val);
  if (head_ == nullptr) {
    head_ = temp;
    tail_ = temp;
    temp = nullptr;
  } else {
    tail_->next = temp;
    tail_ = temp;
  }
}

void List::insertStart(int val) {
  ListNode *temp = new ListNode(val);
  temp->val = val;
  temp->next = head_;
  head_ = temp;
}

void List::deleteFirst() {
  ListNode *temp = nullptr;
  temp = head_;
  head_ = head_->next;
  delete temp;
}

void List::deleteLast() {
  ListNode *current = nullptr;
  ListNode *previous = nullptr;
  current = head_;
  while (current->next != nullptr) {
    previous = current;
    current = current->next;
  }
  tail_ = previous;
  previous->next = nullptr;
  delete current;
}

void List::reverseList() {
  ListNode *temp = head_;
  ListNode *cursor = nullptr;
  ListNode *next;
  while (temp) {
    next = temp->next;
    temp->next = cursor;
    cursor = temp;
    temp = next;
  }
  head_ = cursor;
}

void List::display() {
  ListNode *temp = nullptr;
  temp = head_;
  while (temp != nullptr) {
    std::cout << temp->val << " " << std::flush;
    temp = temp->next;
  }
}

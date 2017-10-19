#pragma once

#include "listnode.hpp"

class List {
private:
  ListNode *head_, *tail_;

public:
  List() {
    head_ = nullptr;
    tail_ = nullptr;
  }
  void addNode(int val);
  void insertStart(int val);
  void deleteFirst();
  void deleteLast();
  void reverseList();
  void display();
  ListNode *getHead() { return head_; };
}

;
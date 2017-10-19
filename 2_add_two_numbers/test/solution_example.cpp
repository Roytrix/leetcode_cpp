#include "../src/single_linked_list.hpp"
#include "../src/solution.hpp"
#include "catch_main.hpp"

Solution solution;

SCENARIO("do the summ of 2 digits, represented in 2 reverse linked list") {
  GIVEN("two linked list first{2,4,3} and second {5,6,4}") {
    List firstList;
    firstList.addNode(0);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(2);
    firstList.addNode(9);
    firstList.addNode(3);
    firstList.addNode(1);
    firstList.addNode(1);
    firstList.addNode(0);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(2);
    firstList.addNode(9);
    firstList.addNode(3);
    firstList.addNode(1);
    firstList.addNode(1);
    firstList.addNode(0);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(2);
    firstList.addNode(9);
    firstList.addNode(3);
    firstList.addNode(1);
    firstList.addNode(1);

    List secondList;
    secondList.addNode(0);
    secondList.addNode(9);
    secondList.addNode(1);
    secondList.addNode(5);
    secondList.addNode(5);
    secondList.addNode(5);
    secondList.addNode(1);
    secondList.addNode(1);
    secondList.addNode(6);
    firstList.addNode(0);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(2);
    firstList.addNode(9);
    firstList.addNode(3);
    firstList.addNode(1);
    firstList.addNode(1);
    firstList.addNode(0);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(8);
    firstList.addNode(2);
    firstList.addNode(9);
    firstList.addNode(3);
    firstList.addNode(1);
    firstList.addNode(1);

    ListNode *firstListNode = firstList.getHead();
    ListNode *secondListNode = secondList.getHead();
    WHEN("i reverse and sum the the digits made from them") {
      ListNode *response =
          solution.addTwoNumbers(firstListNode, secondListNode);
      THEN("the answer should be 708") {
        List answerList;
        answerList.addNode(1);

        ListNode *answer = answerList.getHead();

        REQUIRE(response->val == answer->val);
      }
    }
  }
}
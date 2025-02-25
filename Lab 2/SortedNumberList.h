#ifndef SORTEDNUMBERLIST_H
#define SORTEDNUMBERLIST_H
#include "NumberList.h"

class SortedNumberList : public NumberList {
private:
   // Optional: Add any desired private functions here

public:
   SortedNumberList() {
      head = nullptr;
      tail = nullptr;
   }

   // Inserts the number into the list in the correct position such that the
   // list remains sorted in ascending order.
   void Insert(double number) {
      // TODO: Type your code here
   }
   
   // Removes the node with the specified number value from the list. Returns
   // true if the node is found and removed, false otherwise.
   bool Remove(double number) {
      // TODO: Type your code here
      return false;
   }
};

#endif
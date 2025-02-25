Step 1: Inspect the NumberListNode.h file
Inspect the class declaration for a doubly-linked list node in NumberListNode.h. The NumberListNode class has three member variables:

data: A double for the node's numerical data value
next: A pointer to the next node
previous: A pointer to the previous node
Each member variable is protected. So code outside of the class must use the provided getter and setter member functions to get or set a member variable.

NumberListNode.h is read-only since no changes are required.


Step 2: Inspect NumberList.h and SortedNumberList.h
NumberList.h contains the NumberList class definition. NumberList is a base class for a double-linked list of NumberListNodes. The list's head and tail pointers are protected member variables, and a Print() utility function exists to print the list's contents from head to tail. The file is read-only since no changes are required.

SortedNumberList.h contains the SortedNumberList class definition. SortedNumberList inherits from NumberList and adds Insert() and Remove() member functions.


Step 3: Implement Insert()
Implement SortedNumberList's Insert() member function to create a new node with the number argument as the node's data, then insert the node into the proper sorted position in the linked list. Ex: Suppose a SortedNumberList's current list is 23 → 47.25 → 86, then Insert(33.5) is called. A new node with data value 33.5 is created and inserted between 23 and 47.25, thus preserving the list's sorted order and yielding: 23 → 33.5 → 47.25 → 86.


Step 4: Run code and verify output
A vector of doubles named numbersToInsert is defined near the start of main(). Each is inserted into a SortedNumberList, and the list is printed after each insertion. Try changing the vector's content, and verify that each output is a sorted list.


Step 5: Implement Remove()
Implement SortedNumberList's Remove() member function. The function takes an argument for the number to remove from the list. If the number does not exist in the list, the list is not changed and false is returned. Otherwise, the first instance of the number is removed from the list and true is returned.

Once Remove() is implemented, change the value of the includeRemovals variable, defined at the start of main(), from false to true. Run the code and make sure that the list is correct after each removal.

Try different tests in main() as needed, then submit code for grading. Unit tests are used to grade submitted code, so output from main() does not affect grading.

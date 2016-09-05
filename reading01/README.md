Reading 01
==========

Thomas Franceschi

1. Using templates is advantageous because it allows you to write 
one function or class that works with multiple data types. This 
allows you to save writing repetitious code and increase reusability.

2. It violates the rule of three because it explicitly declares the 
 destructor, but not the copy constructor or the copy assignemt 
 operator. It is problematic because now the complier generated 
 version will not fit the needs of the class for one case and will 
 probably not fit in the other cases. I would fix it by adding a 
 copy constructor and copy assignment operator.
 
 3. Dynamic Array

 Locate element O(n)
 Insert front O(n)
 Insert back O(1)
 
 The number of elements in use by a dynamic array is its size, while 
 the maximum size of the underlying array is the capacity. These 
 properties influence the insert function because if the size of 
 a dynamic array reaches its capacity, the whole array must be 
 recopied and allocate a larger capacity to insert another element.
 
 4. Linked List
 
 Locate Element O(n)
 Insert front O(1)
 Insert Back O(1)
 
 A singly linked list reduces the complexity for insert because 
 it requires half as many links to be created when inserting a node 
 because it only needs to be able to be traversed one way. 

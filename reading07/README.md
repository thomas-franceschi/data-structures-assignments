Reading 07
==========

 1. The purpose of a hash function is to map the key values of the data to the location of 
 that data.

 2. Collision is when multiple data entries have the same hash value. In a hash table that 
 uses separate chaining, collisions are handled by placing every data entry that has the same 
 hash value into a linked list.

 3. A good hash function should have very few collisions, should evenly distribute the values 
 in its output range, and should always generate the same output hash value for an input value.

 4. Hashing with separate chaining:

 Search:
    Average Case: O(1)
    Worst Case: O(n)

Insert:
    Average Case: O(1)
    Worst Case: O(n)

Remove:
    Average Case: O(1)
    Worst Case: O(n)

If all of the values arestored in the same hash value then it takes n time to look through 
the entire linked list to find a value in the worst case.
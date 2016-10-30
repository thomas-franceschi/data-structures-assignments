Reading 08
==========
 1. Collisions are handled in a hash table that uses open addressing by finding the intended 
 slot, and if it is already in use, proceeds to probe until an unused slot is found and inserts 
 the element in it. Linear probing does this action in a linear manner, meaning if a slot is 
 used, then is checks the next one in order and proceeds linearly through the array until it 
 finds an unoccupied slot.

 2. The load factor is the number of elements in use divided by the total number of slots in the 
 hash table. As the load factorgrows, the performance of the table decreases until it either 
 stops functioning or must be copied into a new table with mroe space. As the load factor approaches 
 zero it is indicative that the table is larger than neccessary for the given data and is consuming 
 unnecesary memory.

 3. 
    Bucket: Value:
    0       68
    1       14
    2       2
    3       3
    4       72
    5       13
    6       56
    7       7
    8       78
    9       79

4. 
    Search:
        Average Case: O(1)
        Worst Case: O(n)

    Insert:
        Average Case: O(1)
        Worst Case: O(n)

    Remove:
        Average Case: O(1)
        Worst Case: O(n)

    Worst case is O(n) for every operation because as the table fills up, if there are frequent 
    collisions then it becomes more resource intensive to locate and modify each element.
# Overview
In this project I will choose between chaining or probing to handle collision resolution for a Hash Table. 

# Given Code
1. HashTable.h
    - Header file
    - Declaration of all methods
    - Decide on data structure for hash table, based on collision resolution approach
2. HashTable.cpp
      - Stubs for all the methods for HashTable and HashTableBucket classes
      - HashTableBucket methods have all been written

# Tasks
1. Handle collision resolution
      - Chaining
      - Probing
2. Add appropriate data structure into HashTable class
3. Writing the bodies of the HashTable methods
4. Storing the data
      - Chaining
      - Open Adressing
5. Table Resizing
6. Report the time complexity of
      - Insert
      - Remove
      - Contains
      - Get
      - Operator[]

# Topics for Review
1. Map ADT - Associates keys with values
        - Keys can't be duplicated
        - Insert Operation - takes 2 parameters (key, value), if key does not exsist the key-value pair is inserted. If the key does exsist then the value is updated
        - Get Operation - takes 1 parameter (key) and returns the value. If the key doesn't exsist it returns null
   
1. Hash Table - a data structure (a way of organizing information) used to insert, look up and remove key-value pairs quickly
        - Stores unordered items by mapping/hashing each item to a location in an array
        - Each array element is called a bucket

3. Hash Map - implementation of map ADT using a hash table. Each operation has key parameter and the key is converted to a bucket index. 

4. C ++ syntax (I still don't understand these that well)
      - Header file - Store predefined functions. Gives the compiler the information needed to share definitions between compilation units (.ccp files) (Kind of like the methods/classes you can call in Java )
      - cpp file - Implements the code (Kind of like the main code in java)

6. Collision Resolution - Collision occurs when 2 different keys map to the same buckey index
      - Chaining - each bucket has a list of items (A bucket could have keys 5 and 6)
      - Probing (Open Addressing) - If a bucket already has a key an empty buckey is looked for somewhere else in the table
          * Linear Probing - Starts at the key's mapped bucket and then linear searches subsequent buckets until an empty bucket is found
          * Pseudo-random - prevents primary clustering
              * Create an array called offsets size(n-1).
              * The array is initialized with values 1 - (n-1)
              * Shuffle them randomly
              * Location for the probe is given by (home + offsets[i-1])
                 
          * Quadratic Probing
          * Double Hashing
7. Enum BucketType
8. Data Storage
      - Chaining
          * What is a C++ Container? (List, Vector)
      - Open Addressing
          * Pseudo Random Probing
          * Double Hashing
9. Time Complexity

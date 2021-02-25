# Student Database implemented using hash table

This project creates a student database implemented as a Hash Table.
Objectives:
- Implement a data structure to meet given specifications
- Design, implement, and use a closed hash table data structure
- Use a hash table as an index to a data store
Aim: To implement a closed hash table data structure, and to use hash as the index for rapid searching, inserting and deleting of a database of student records.

Procedure:
- A structure is created storing the roll number of type int, an array of name of type char and the telephone number of type long long int to store the records of the students
- The hash table is implemented as an array of TableSize objects of the above sturcture. The value of TableSize should initially be #define as 10.
- The hash table accepts integer value, string and long long integer value.
- The hash table should support the following operations:
  - void init_hash_table(): This function initialises hash table to NULL.
  - unsigned int hash(int key): This function returns the hash value of key which needs to be inserted in the hash table
  - bool insert(person *p): If the hash value to the hash table table is NULL it assigns the structure to the hash table and returns true, else false.
  - person *remove_element(int key): This function searches the key using the hash function and if it is NULL then it returns NULL, else it is deleted and the function.
  - person *edit(int key): This function searches the key using the hash function and if it is NULL then it returns NULL, else it edits the name and telephone number.
  - size_of_hashtable(): This function returns the current size of the the hash table.
  - void printTable(): This function prints the hash table.
- These functions are initialised in a main program that allows a user to insert, search, editted and delete from the database. Example program operation :
            
            1.Insert student details in the Hash Table"
            2.Remove student information from the Hash Table"
            3.Edit student information from the Hash Table"
            4.Check the size of Hash Table"
            5.Display the Hash Table"
            Enter your choice: 
            Enter Roll No.: 4
            Enter Name: ABCD
            Enter telephone number: 907816917
            
            Start
         0       ----
         1       ----
         2       ----
         3       ----
         4      4        ABCD    907816917
         5       ----
         6       ----
         7       ----
         8       ----
         9       ----
            End
         Do you want to continue (press 1 for yes): 1
            1.Insert student details in the Hash Table"
            2.Remove student information from the Hash Table"
            3.Edit student information from the Hash Table"
            4.Check the size of Hash Table"
            5.Display the Hash Table"
            Enter your choice: 2
            Enter the roll no. to be deleted-:4
            Start
               0       ----
               1       ----
               2       ----
               3       ----
               4       ----
               5       ----
               6       ----
               7       ----
               8       ----
               9       ----
            End
            Do you want to continue (press 1 for yes): 1
            1.Insert student details in the Hash Table"
            2.Remove student information from the Hash Table"
            3.Edit student information from the Hash Table"
            4.Check the size of Hash Table"
            5.Display the Hash Table"
            Enter your choice: 4
            Size of Hash Table is-:0
            
            

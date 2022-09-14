# PSYCH0zZZz
This is my resum's repo.

C03-C13 derictories with some functions and examples of sorts, trees, list etc. In each directory i added pdf file with tasks


BSQ - BSQ is a file parser, my program will receive one or more files, which are maps, in these maps, you will have to find the biggest square. We made our best so our BSQ can go as quick as possible.

dzfibbon3 - fibbonachi founder

dz1 - in this task i searched for the roots of the equation


=============exam directory=================

mp1:

    An array of data about the employees of the military regiment: full name, rank, company number, age (comparison by fields - rank, full name, company number)
    
1) Implement in C++ sorting for an array of objects in
according to option.

2) Overload comparison operators (>, <, >=, <=) for comparison
objects.

3) The input data for sorting the array must be read from
external sources: text file, MS Excel file, MS Access,
data from the DBMS (any one to choose from).

4) Select 7-10 datasets for sorting dimension from 100 and
more (but not less than 100,000). Detect (programmatically) the sorting time of each algorithm. Based on the points obtained, plot graphs of sorting time versus array dimension for each of the sorting algorithms on one coordinate axis. Make a conclusion about which method is better to use in which case.

sorting:

a) Selection sort

c) Sorting by simple insertions

e) Heap sort

An array of data about the employees of the military regiment: full name, rank, company number, age (comparison by fields - rank, full name, company number)


mp2:

1) Implement direct and binary search for a given element in an array of objects by key in accordance with the variant (the key is the first non-numeric field of the object).


2) The input data for the search must be read from external sources: text file, MS Excel file, MS Access, data from the DBMS (any choice).


3) Search 7-10 times on arrays of different dimensions from 100 or more (but not less than 100000). Time the search (programmatically) for the following methods: direct search, binary search in a pre-sorted array, array sorting (the most efficient method from work 2) and binary search in it. Based on the obtained points, construct graphs of the dependence of the search time on the dimension of the array.


4) Write the input data to the multimap<key, object> associative array and compare the search time for the key in it with the search time from step 3. Add search time data in an associative array to a general comparison with other methods and build a graph of search time versus array dimension.


5) Make a report containing a title page, program code with specifications of each method and detailed comments, graphs of search speeds and conclusions.

mp3:

1) Come up with a “simple” (without going too far into the probability of collisions) and “complex” (more efficient in speed and with fewer collisions) hash functions for calculating the hash of the key field of your version (of your class).


2) Add a field with a hash value to the class, change the constructors and methods accordingly.


3) Build a hash table based on the hash value and write a function to search for an element in an array of objects using a hash table, implement one of the collision resolution methods.


4) Conduct experiments to study the dependence of the search time on the array dimension for both hash functions, build graphs, draw conclusions.


5) Compare the obtained results with the search time results obtained in the previous work.


6) Investigate the dependence of the number of collisions for each hash function on the array dimension, build a graph.

Get_next_line:

get_next_line
Write a function that will store, in the parameter “line”, a line that has been read from the given file descriptor.

Requirements
Your function must be prototyped as follows: int get_next_line(int fd, char **line);
Your function should be memory leak free.
What we call a “line that has been read” is a succession of 0 to n characters that end with ‘\n’ (ascii code 0x0a) or with End Of File (EOF).
The string stored in the parameter “line” should not contained any ‘\n’.
The parameter is the address of a pointer to a character that will be used to store the line read.
Return values
The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed (meaning read has returned 0), or if an error has happened respectively.

When you’ve reached the End Of File, you must store the current buffer in “line”. If the buffer is empty you must store an empty string in “line”.
When you’ve reached the End Of File, your function should keep 0 memory allocated with malloc except the last buffer that you should have stored in “line”.
What you’ve stored in “line” should be free-able.
Final words
Calling your function get_next_line in a loop will therefore allow you to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines. Therfore, make sure that your function behaves well when it reads from a file, from the standard output, from a redirection etc. For the mandatory part, no call to another function will be done on the file descriptor between 2 calls of get_next_line.

Finally we consider that get_next_line has an undefined behavior when reading from a binary file. You may make this work accordingly, but its not part of the bonus nor is it required.

ft_printf:

Instructions

The only functions allowed are:


write

malloc

free

exit


Features from the original printf included

Displaying signed numbers (%d %i)

Displaying unsigned numbers (%u)

Displaying unsigned numbers in octal format (%o) or hexadecimal format (%x %X)

Displaying pointers addresses (%p)

Displaying chars and strings (%c %s)

Complete support of floats and long floats, included DBL_MIN/MAX, LDBL_MIN/MAX, NaN and inf (%f with flags l and L)

Management of %%

Management of minimum field-width

Management of the precision

Management of the following flags: #0-+* and space

Support of the following length flags: hh, h, l and ll

Also you can check my GitLab repo.
https://gitlab.com/PSYCH0zZZz/psycho/-/tree/main

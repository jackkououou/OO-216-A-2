# OO-216-A-2

LOOK AT A1 OF DATA STRUCT.
Operator overloading
Read Operator Overloading in your  book and the lecture posted under Pages with the same title.

Define a Fraction class similar to the one shown in earlier modules with num and den as its private data.
Include a constructor to initialize the fraction to 0/1, a copy constructor, a destructor, and overloading
functions to overload the assignment operator =, the comparison operators <, >, ==, !=, arithmetic
operators +, +=, -, -=, *, *=, /, /=, as well as friend functions (non-member) to overload << and >> to 
output and input a fraction (see book example). Also, include a private member function called reduce() 
that gets called after arithmetic operations to reduce the frraction. +, -, *, / must return the result 
of the operation; e.g.: the sum or difference of the two fractions. +=, -=, *= and /= must assign the
result of the operation to the object that's invoking the operation; i.e.: frac1 += frac2 must modify 
frac1 to make it equal to the sum of the two fractions,but frac1 + frac2 must simply return the sum.

If n1/d1 and n2/d2 are two fractions, their sum fraction's numertor is: n1 * d2 + n2 * d1 and its 
denominator is d1 * d2. To compare the two fractions, you can compare n1 * d2 with n2 * d1.

Define a class called FracList with private members fracPtr, a Fraction pointer and size to hold the 
size of the array of Fraction objects. Use the List container class developed in the modules as an example. 
Include constructor, destructor, copy constructor and overload the assignment, insertion (>>) and extraction
(<<) operators. the [] operators for accessing array elements (both as lvalue and rvalue - see the example
given in last module) and relational operators <, >, ==, and !=. For < and >, compare the size of the two FracList
objects and for == and != see if they're identical with identical array elements. Also, include two resize() member
function to resize the list, one keeping the existing vales and one without keeping old values (see the List example).
Also, include a sort and binary search function (see the example).

In main, create two FracList objects, ask the user how many elements to allocate for each list, read as many Fraction
objects from the keyboard as specified by the user into each (using >> operator). Sort both lists using the sort member
function and display them; and then search for a value read from the user in both lists and print the index of the first
occurrence or that it could not be found in either list.

Swap the two lists entered by the user so that the smaller size list (using < or > operator which only compares 
their size) is the first and larger size is the second. Use a swap function to swap the two lists. The example given
in module did not use a function. Remember to swap two objects, you must either pass them by reference, or pass their
addresses into couple of pointers. Print both lists again to verify the swap.

Resize the larger list to a size one larger than its original size, keeping all its values and assigning to its last
element the sum of all other fractions (after reducing it), and print again.

Example run of the program:

Enter size of first fraction list:  5

Enter size of second fraction list: 3

Enter 5 fractions for first list:  1/4  1/8  2/3  1/3  1/2

Enter 3 fractions for second list:  3/4 1/5 1/4

 

Sorted lists:

1/8  1/4  1/3  1/2  2/3

1/5  1/4  3/4

Enter a fraction to search for:  1/4

1/4 was found at index 1 of list 1.

Swapped lists:

1/5  1/4  3/4

1/8  1/4  1/3  1/2  2/3

Resized list with sum of fractions at the end:

1/8  1/4  1/3  1/2  2/3  15/8

Press any key to continue.

Use separate files for class definitions (.h), function definitions and main program (3 files).

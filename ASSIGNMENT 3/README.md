     ASSIGNMENT3 
     Task 1
     Short Notes
1. Difference Between a Normal Variable and a Pointer
A normal variable stores a value directly in memory, while a pointer stores the memory address of another variable.
Normal variables access and modify data directly using the variable name, whereas pointers access data indirectly through the stored address.
Example:
A variable may store the value 10 directly, while a pointer stores the address where that value is located and uses it to access or modify the value.

2. Variable vs Pointer Declaration and Definition
Variables store data directly, while pointers store addresses of data.
 Variable declaration introduces a variable and its type, while definition allocates memory and may assign a value.
 Pointer declaration uses the * operator to indicate that the variable will store an address, and pointer definition
 assigns a valid address using the & operator.
Example:
A pointer can be declared to point to an integer and later defined by assigning it the address of an existing integer variable.

3. Dereferencing a Pointer
Dereferencing a pointer means accessing or modifying the value stored at the memory location referenced by the pointer.
 This allows indirect access to variables through their memory addresses.
Example:
If a pointer holds the address of a variable, dereferencing the pointer allows reading or changing the value of that variable.

4. Use Cases of Pointers
Pointers are useful when a function needs to modify a variable defined outside the function and when passing large data such
as arrays or structures efficiently without copying them.
Example:
Passing the address of an array to a function allows the function to update its elements directly.

5. Limitations of Pointers
Pointers may cause memory leaks if allocated memory is not released, dangling pointers if they reference freed memory,
and segmentation faults if invalid memory locations are accessed.
Example:
Using a pointer after the memory it points to has been freed can result in unpredictable program behavior.

6. Call by Value vs Call by Reference
In call by value, a copy of the data is passed to a function, so changes inside the function do not affect the original data.
 In call by reference, the address of the data is passed, allowing the function to modify the original value.
Example:
A function receiving a copy of a number cannot change the original, while a function receiving its address can.

7. Preferred Scenarios
Call by value is preferred when the original data should remain unchanged and program safety is important while,
 Call by reference is preferred when the function must modify original data, handle large data efficiently, or return multiple results.
Example:
Mathematical calculations prefer call by value, while swapping values or updating arrays prefers call by reference.

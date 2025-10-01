# Aim: To study and implement Constructor Overloading
# Software used:
Visual Studio
# Theory:

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

+ Overloaded constructors essentially have the same name (exact name of the class) and different by number and type of arguments.
A constructor is called depending upon the number and type of arguments passed.

+ While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. 

n C++, Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

In this article, we will further discuss about operator overloading in C++ with examples and see which operators we can or cannot overload in C++.

<ins>C++ Operator Overloading</ins>:
Operator Overloading in C++ is a feature that allows you to redefine the way operators work for user-defined types (like classes). It enables you to give special meaning to an operator (e.g., +, -, *, etc.) when it is used with objects of a class

<ins>Benefits of Constructor Overloading</ins>:

Constructor Overloading provides various benefits, making it an essential feature for creating flexible and efficient classes.

1. Flexibility in Object Initialization
It gives you multiple ways of initializing an object or Multiple Initialization Options.

2. Cleaner and Readable Code with enhanced Code Maintainability
By providing different ways of initializing an object, it reduces the need for multiple setter methods or complex initialization logic, avoids redundancy, and provides simpler object creation, which ultimately gives cleaner and more readable code and easier to modify.

3. Encapsulation of Initialization Logic
It also encapsulates the initialization logic within the constructor, which means the initialization logic is managed inside the constructor rather than being spread across various methods or outside the class.

4. Simplifies Object Cloning (Copy Constructors)
Constructor overloading allows to defined copy constructor to handle both shallow and deep copying objects, this makes sure that the object is easily copied.
# Implementation:
To demonstrate Constructor Overloading in C++ the following cases has been used,
+ Constructor overloading using volume and area calculator
+ Object overloading
+ Operator Overloading
# Algorithms:

Algorithm: Multiply Two Complex Numbers Using Operator Overloading

1. Start
2. Define a class `Complex` with private data members:
   `real` (integer)
   `imag` (integer)
3. Define a constructor `Complex(int r=0, int i=0)` to initialize the real and imaginary parts.
4. Overload the `*` operator as a member function:
   1. Take a `Complex` object `obj` as parameter.
   2. Compute the real part: `r = real*obj.real - imag*obj.imag`.
   3. Compute the imaginary part: `i = real*obj.imag + imag*obj.real`.
   4. Return a new `Complex` object with `r` and `i`.
5. Define a member function `print()` to display the complex number in the form `"real + iimag"`.
6. In `main()`:
   1. Create two `Complex` objects `c1` and `c2`.
   2. Multiply `c1` and `c2` using `c1 * c2` and store the result in `c3`.
   3. Call `c3.print()` to display the result.
7. End

Algorithm: Display Student Information Using Function Overloading

1. Start
2. Define a class `Student` with public members:
   `name` (string)
     `rollno` (integer)
3. Define two overloaded member functions:
    `Student1(string name1, int rollno1)` to display student 1 information.
     `Student2(string name1, int rollno1)` to display student 2 information.
4. In `main()`:
   1. Declare variables for two students: `std_name`, `roll_no`, `std_name2`, `roll_no2`.
   2. Prompt the user to enter details of the first student and read values.
   3. Prompt the user to enter details of the second student and read values.
   4. Create an object `s1` of class `Student`.
   5. Call `s1.Student1(std_name, roll_no)` to display the first student’s info.
   6. Call `s1.Student2(std_name2, roll_no2)` to display the second student’s info.
5. End

# Conclusion:
The above codes demonstated the use of COnstructor Overloading in C++.

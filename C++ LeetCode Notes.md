# Functions / Syntax / Boilerplate

### Essential libraries/etc

Include at the top of the file: **#include \<iostream>**


Also include at the top: **using namespace std;** for the shortened cout usage.

### If-else

Put your conditions in brackets or it will crash.

```c++
if (boolVar == true) {
    printf("True");
} else {
    printf("False");
}
```

### Printing to console

Does NOT make a new line itself, add \n for new lines.

**Text**: printf("text");

**Text w/ another string**: printf("text %s", str);

**Integers:** printf("%d", integer)

**Floats:** printf("%f", integer)

**Booleans:**

Booleans are lowercase.

There is no formatting thing for booleans **USING PRINTF**. Instead, you can check if
a boolean is true/false and printf("True") for the condition.

You can also do printf("%d", boolVar) which will print 1 if true and 
0 if false.


# OR

Use:

**cout << variable;**

Also supports concatenation (ex. cout << variable << "\n";) **Don't use +! Might be interpreted as addition**

To print booleans as **true or false** and not 1 or 0, use:

cout<<boolalpha<< variable;



``` c++
int integer = 5;
float flnum = 1.234;

printf("Hello world\n");
printf("%d\n", integer);
printf("%f", flnum);

return 0;
    
```

# Data Structures

### Pointers

**variable\*:** Pointers, take in/store a memory address to a variable of the same type.

Pointers can't be printed out themselves unless dereferenced.

**Variable to Address:** &variable

**Address to Variable (Dereference):**  \*variable


``` c++
float num = 5;
    
// Address to num.
// Of type float* (Float pointer), storing address of num (&num)
float* numAddr = &num;

printf("%f\n", num);

// Prints dereference of address of num (*numAddr)
printf("%f", *numAddr);
```

### References

**type& variable:** A reference to a variable, this reference can be set to another variable of the same type without the &.

Pointers point to memory addresses, while references point to actual values. (?)

``` c++
float x = 1.234;
    
float& xRef = x;

printf("X: %f\n", x);
printf("X reference: %f\n\n", xRef);

xRef = xRef + 5;
printf("X ref + 5: %f\n", xRef);
printf("X: %f", x);
```


### Vectors (Dynamic Arrays)

Include at the type of the file: **#include \<vector>**

Basically like an array but you don't need to specify size (like in Python). Cannot be printed directly like in Python, must be iterated.

**Initialization**

vector\<type> name = {values};

&nbsp;

**Accessing elements**

name.at(index);

&nbsp;

**Adding elements (to end)**

name.push_back(value);

&nbsp;

**Size of vector (# of elements)**

name.size()



``` c++
vector<int> arr = {1,2,3,4,5};
    
for (int i = 0; i < arr.size(); i++) {
    printf("%d\n", arr.at(i));
}
```


#

**Iterating through a vector (Best practice)**

Use an iterator: 
```c++    
vector<int> initial = {4,5,6};

vector<int> result = twoSum(initial, 4);
vector<int>::iterator iter;



for (iter = result.begin(); iter != result.end(); ++iter){
    printf("%d\n", *iter);
}
```

1. Create your vector.
2. Create your vector iterator.
3. In the for loop: you set iter to the first value of the vector. It goes to the next value each iteration until it reaches the end of the vector. The value is accessed by **dereferencing** the iterator.


```c++
// rian-kh
// 9. Palindrome Number

/* 

Given an integer x, return true 
if x is a palindrome, and false otherwise.

*/ 

#include <iostream>


using namespace std;

// First check if the number has odd digits
// Then check if the current char == (last char - current char)


bool isPalindrome(int x) {
    string input = to_string(x);
    if (input.length() % 2 == 1)
        cout << "String: " + input << "\n";
        
    
    return true;
    
}


int main()
{
    bool pal = isPalindrome(121);
    
    
    cout<<boolalpha << pal;
    

    return 0;
    
    
}

```


### Maps (Dictionaries)



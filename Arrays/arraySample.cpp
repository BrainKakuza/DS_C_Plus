#include<iostream>
#include<array>

//using namespace std;

/*
Basicly this is how arrays work

- To use an array class you need to include it 
*/

int main(void)
{
    int numbers[3];

    //Output a weird string of type of array follow by @ and then the value based on object memory 
    std::cout << numbers[0] << std::endl; 

    //How to add an number
    numbers[0] = 10;
    numbers[1] = 11;
    numbers[2] = 20;

    //Output value
    std::cout << numbers[0] << std::endl; 

    //Using the array with an array class
    std::array<int , 3> array1 = {1,2,3};

    std::cout << array1[0] << std::endl;

    //Get the size of the array
    std::cout << array1.size() << std::endl;

    /*
        Since array is limited with size if we want to add more of the size we need to create a new array and move all old element
        to the new array. We can use linkList if we want to size to be adjustable
    */

    return 0;
} 
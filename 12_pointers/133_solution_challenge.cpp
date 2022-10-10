/**
 * @file 133_solution_challenge.cpp
 * @author Daniel Jimenez (danieljimenez1185@gmail.com)
 * @brief the function expects two arrays of integers and their sizes and
 * dynamically allocates a new array of integers whose size is the product of the 
 * 2 array sizes. for example, if the array1 has 3 elements and array2 has 2, the 
 * new array will have 6 element, for of the product one-by-one of the elements. 
 * Finally, print the elements and the size
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<string>
#include<vector>

using namespace std;

/**
 * @brief this function create the new array reciving the arrays and their sizes 
 * 
 * @param arr1 is a pointer to first array
 * @param size1 is the dimension of the first array
 * @param arr2 is a pointer to second array
 * @param size2 is the dimension of the second array
 * @return int* is a pointer of the new array
 */
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2){
    int *new_array {};

    new_array = new int[size1 * size2]; //allocate 15 integer in the heap

    int position {0};

    for ( size_t i{0}; i<size2; ++i){

        for ( size_t j{0}; j<size1; ++j){

            new_array[position] = arr1[j]*arr2[i];

            ++position;
        }
    }
}


/**
 * @brief this function print the elements of the new array
 * 
 * @param arr is the pointer to the new array
 * @param size is the size of the new array
 */
void print(const int *const arr, size_t size){

    cout<<"[ ";

    for ( size_t i{0}; i<size; ++i){

        cout<<arr[i]<<" ";

    }

    cout<<"]";
    cout<<endl;
}

int main(){
    
    const size_t array_1_size{5};
    const size_t array_2_size{3};

    int array_1[]{1,2,3,4,5};
    int array_2[]{10,20,30};

    cout<<"array 1: ";
    print( array_1, array_1_size );

    cout<<"array 2: ";
    print( array_2, array_1_size );

    int *result = apply_all(array_1,array_1_size,array_2,array_2_size);
    constexpr size_t results_size {array_1_size * array_2_size};

    cout<<"Result: ";
    print( results, results_size );

    delete [] results;

    cout<<endl;
    return 0;
}
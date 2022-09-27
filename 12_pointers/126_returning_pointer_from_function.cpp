/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    returning a pointer from a Function %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& Functions can also return pointers

            type *function();

& should return pointers to
    * memory dynamically allocated in the fucntion
    * to data that was passed in

& never return a pointer to a local function variable!

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    returning a parameter %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

            int *largest_int(int *int_ptr1, int *int_ptr2){
                if(*int_ptr1 > *int_ptr2){
                    return int_ptr1;
                }else{
                    return int_ptr2;
                }
            }

            int main(){

                int a{100};
                int b{200};

                int *largest_ptr {nullptr};
                largest_ptr = largest_int(&a, &b);
                cout<<*largest_ptr<<endl;           // 200
                return 0<

            }

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    returning dynamically allocated memory %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

            int *create_array( size_t size, int int_value = 0){

                int *new_storage {nullptr};
                new_storage = new int [size];

                for(size_t i{0}; i<size; ++i){
                    *(new_storage + i) = int_value;
                }
                return new_storage;

            }

            int main(){
                int *my_array;      // will be allocated by the function

                my_array = create_array( 100, 20);

                // use it

                delete [] my_array; //be sure to free the storage
                return 0;
            }


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    never return a pointer to a local variable %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

            int *dont_do_this(){
                int size{};
                ...
                return &size;
            }

            int *or this(){
                int size{};
                int *int_ptr {&size};
                ...
                return int_ptr;
            }

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    potential pointer pitfalls  %%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& uninitilized pointers

            int *int_ptr; //pointing anywhere
            ...
            *int_ptr = 100; // hopefully a crash

& dangling pointers

    * pointer that is pointing to released memory

        - for example, 2 pointers point to the same data
        - 1 pointer releases the data with delete 
        - the other pointer access the release data
    
    * pointer that points to memory that is invalid

        - we saw this when we returned a pointer to a fucntion local variable

& not checking if new failed to allocate memory

    * if new fails an exception is thrown

    * we can use exception handling to catch exceptions

    * dereferencing a null pointer will cause your program to crash

& leaking memory (one of the most common pointers problem)

    * forgetting to release allocated memory with delete

    * if you lose your pointer to the storage allocated on the heap you have not way
    to get to that storage again

    * the memory is orphaned or leaked

*/


#include<iostream>
#include<string>
#include<vector>

using namespace std;

int *create_array( size_t size, int int_value = 0){

    int *new_storage {nullptr};
    new_storage = new int [size];

    for(size_t i{0}; i<size; ++i){
        *(new_storage + i) = int_value;
    }
    return new_storage;

}

void display( const int *const array, size_t size){
    for(size_t i{0}; i<size; ++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int *my_array {nullptr};
    size_t size;
    int int_value{};

    cout<<"\nHow many integers would you like to allocate? ";
    cin>>size;
    cout<<"what value would you like them initialized to? ";
    cin>>int_value;

    my_array = create_array(size, int_value);
    cout<<"\n----------------------------------"<<endl;

    display(my_array, size);
    delete [] my_array;     // be sure to free the storage

    cout<<endl;
    return 0;
}

/*
            How many integers would you like to allocate? 3
            what value would you like them initialized to? 2

            ----------------------------------
            2 2 2 
*/
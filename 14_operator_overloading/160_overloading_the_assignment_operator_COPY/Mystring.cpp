#include <cstring>
#include <iostream>
#include "Mystring.h"

//no-arg constructor
Mystring::Mystring()
    :str{nullptr}{
        str=new char[1];
        *str='\0';
    }

//overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str=new char[1];
            *str='\0';
        } else {
            str=new char[std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }

//copy constructor
Mystring::Mystring( const Mystring &source )
    :str{nullptr}{
        str=new char [std::strlen(source.str)+1];
        std::strcpy(str,source.str);
    }

//destructor
Mystring::~Mystring(){
    delete [] str;
}

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"copy assignment"<<std::endl;
    if ( this == &rhs)  // if the raw pointer points itself
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str,rhs.str);
    return *this;
}

//Display method
void Mystring::display() const{
    std::cout<<str<<":"<<get_lenght()<<std::endl;
}

//lenght getter
int Mystring::get_lenght() const { return std::strlen(str);}

//string getter 
const char *Mystring::get_str() const { return str;}





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

//move constructor
Mystring::Mystring( Mystring &&source)
    :str(source.str){
        source.str=nullptr;
        std::cout<<"Move constructor used"<<std::endl;
    }

//destructor
Mystring::~Mystring(){
    if (str == nullptr){
        std::cout<<"calling destructor for Mystring: nullptr"<<std::endl;
    } else {
        std::cout<<"calling destructor for Mystring: "<<str<<std::endl;
    }
    delete [] str;
}

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"copy assignment"<<std::endl;
    if ( this == &rhs){ // if the raw pointer points itself
        return *this;
    }  
        
    delete [] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str,rhs.str);
    return *this;
}

//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"using move assignment"<<std::endl;
    if (this == &rhs){
        return *this;
    } 
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
    }

//overloading operator = (Equality)
bool Mystring::operator==(const Mystring &rhs) const {

    return (std::strcmp(str, rhs.str)==0);

}

//make lowercas
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff, str);
    for (size_t i=0; i<std::strlen(buff); i++){
        buff[i]=std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//concatenation
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str)+1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}



//Display method
void Mystring::display() const{
    std::cout<<str<<":"<<get_lenght()<<std::endl;
}

//lenght getter
int Mystring::get_lenght() const { return std::strlen(str);}

//string getter 
const char *Mystring::get_str() const { return str;}





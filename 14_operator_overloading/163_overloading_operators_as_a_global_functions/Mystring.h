#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

    private:
        char *str; //pointer to a char[] that holds a C-style string
    public:
        Mystring();  // no-args constructor
        Mystring(const char *s);    //overloaded constructor
        Mystring(const Mystring &source);   //copy constructor
        Mystring(Mystring &&source);        //move constructor
        ~Mystring(); //destructor

        Mystring &operator=(const Mystring &rhs);    //Copy assignment
        Mystring &operator=(Mystring &&rhs);        //move assignment

        //Mystring operator-() const;     //make lowercase
        //Mystring operator+(const Mystring &rhs) const; //concatenate
        //bool operator==(const Mystring &rhs) const; 

        void display() const;
        
        int get_lenght() const;
        const char *get_str() const;
};

#endif // _Mystring_H_
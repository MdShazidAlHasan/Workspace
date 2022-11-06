
#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring(/* args */)
    :str(nullptr){
    str = new char[1];
    *str = '\0'; 
    }

//over loaded constructor
Mystring::Mystring(const char *s)
    :str(nullptr){
        if (s==nullptr){
            str = new char[1];
            *str = '\0';
        }else{
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}


//copy constructor 

Mystring::Mystring(const Mystring &source):str(nullptr){
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str)
    {
        source.str = nullptr;
        std::cout<<"move constructor used"<<std::endl;
    }


Mystring::~Mystring()
{
    delete [] str;
}

//ccopy assainment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<< "Copy assainment"<<std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;

}

//move assainment 
Mystring &Mystring::operator=(Mystring &&rhs){
    //std::cout<<"using move assainment"<<std::endl;
    std::cout<<"1234567890";
    if (this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str= nullptr;
    return *this;
}

void Mystring::display() const{
    std::cout<<str<<":"<<get_lenth()<<std::endl;
}

int Mystring::get_lenth() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const{
    return str;
}


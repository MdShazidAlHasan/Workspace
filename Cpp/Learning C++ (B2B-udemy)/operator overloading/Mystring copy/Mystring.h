#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    /* data */
    char *str;
public:
    Mystring(/* args */);
    Mystring(const char *s);
    Mystring(const Mystring &source);
    
    Mystring &operator=(const Mystring &rhs);

    ~Mystring();
    void display() const;
    int get_lenth() const;
    const char *get_str() const;
};
#endif
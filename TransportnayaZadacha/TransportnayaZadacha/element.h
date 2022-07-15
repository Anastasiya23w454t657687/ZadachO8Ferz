#pragma once
#ifndef ELEMENT_H
#define ELEMENT_H


class element
{
public:
    mutable int dostavka;
    mutable int summa;
    element()
    {
        dostavka = 0;
        summa = 0;
    }
    static int minimum(int a, int b)
    {
        if (a > b) { return b; }
        if (a == b) { return a; }
        else return a;

    }
    void kolichestvo(int a, int b)
    {
        dostavka = element::minimum(a, b);
    
    }
};

#endif // ELEMENT_H
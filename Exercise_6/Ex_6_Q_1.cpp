//
// Created by Jeethesh on 03-01-2021.
//
#include <stdexcept>
#include <iostream>

#include "DataSet.h"

void callbyValue( DataSet arg )
{
    arg.modify();
    arg.print("arg_callByValue");
}

void callbyReference( DataSet& arg )
{
    arg.modify();
    arg.print("arg_callByReference");
}

int main()
{
    DataSet a(5);
    DataSet b(5);
    DataSet c(6);

    a.print("a");
    b.print("b");
    c.print("c");

    callbyValue(a);
    a.print("a");

    callbyReference(b);
    b.print("b");

    try
    {
        a += b;
        a.print("a");

        a += c;
        a.print("a");
    }
    catch( std::runtime_error& e )
    {
        std::cout << e.what() << std::endl;
        return 1;
    }

    return 0;
}

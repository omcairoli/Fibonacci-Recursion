//
//  Fibonacci.cpp
//  Fibonacci
//
//  Created by Oscar M. Cairoli on 2/6/16.
//  Copyright (c) 2016 OMC. All rights reserved.
//

#include "Fibonacci.h"

int Fib( int num )
{
    if ( num == 1 )
    {
        return (1);
    }
    else
    {
        return ( num * Fib( num - 1 ) );
    }
}
#include "decrement.h"

decrement::decrement()
{
 count=10;
}

unsigned int decrement::get_count()
{
    return count;
}

decrement decrement::operator -- ()
{
    --count;
    decrement temp;
    temp.count = count;
    return temp;
}

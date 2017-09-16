#ifndef DECREMENT_H
#define DECREMENT_H


class decrement
{private:
    unsigned int count;
public:
    decrement();
     unsigned int get_count();
     decrement operator -- ();
};

#endif // DECREMENT_H

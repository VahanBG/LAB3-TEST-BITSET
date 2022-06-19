#ifndef Header_h
#define Header_h

#include <iostream>
#include <limits>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <string>

template <unsigned long long N>
class Bitset;

template <unsigned long long N>
std::ostream& operator << (std::ostream& COUT, const Bitset<N>& oth);

template <unsigned long long N>
class Bitset
{
public:
        Bitset ();//ok 
        Bitset (long long value);//one erorr "free():invalid pointer"
        Bitset (const Bitset& oth); // ok  
        Bitset (Bitset<N>&& oth); //ok
        ~Bitset ();// ok
    
private:
        unsigned long long* bits;
        int bitsSize = static_cast<int>(N);

public:
        Bitset& set();
        Bitset& setting_by_given_val(long long value);
        Bitset& reset();
        Bitset& count();
        Bitset& flip();
        Bitset& to_String();
        Bitset& to_Long();
        Bitset& checking_none_all_any();
        Bitset& choosing_operation();
        Bitset& choose(int index);
        Bitset& choosing_second();
    
        bool any();
        bool none();
        bool all();
        int getSize() const;
    
        template<unsigned long long U>
        friend std::ostream& operator << (std::ostream& COUT, const Bitset<U>& oth);
        Bitset<N>& operator = (const Bitset<N>& oth); // did not consider the self-attribution option
        Bitset<N>& operator = (Bitset <N>&& oth); //did not consider if "bits" in not nullptr 
        Bitset<N>& operator ~ (); //ok
        Bitset<N>& operator &= (const Bitset <N>& oth); //did not consider if the sizes of the comparable obeks are different
        Bitset<N>& operator |= (const Bitset <N>& oth);// did not consider if the sizes of the comparable obeks are different
        Bitset<N>& operator ^= (const Bitset <N>& oth); // did not consider if the sizes of the comparable obeks are different
        Bitset<N>& operator <<= (const Bitset <N>& oth);
        Bitset<N>& operator >>= (const Bitset <N>& oth);
        Bitset<N>& operator << (const Bitset <N>& oth);
        Bitset<N>& operator >> (const Bitset <N>& oth);
        bool operator == (const Bitset <N>& oth);
        bool operator != (const Bitset <N>& oth);
        bool operator [] (unsigned int pos);
    
};

#include "implementation.hpp" //petk chi includ anel
#endif // Header_h
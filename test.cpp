#include <iostream>
#include "Header.h"

int main()
{
   //  test defualt constructor
  /* Bitset<8> bit1;
   std::cout << "Bit1: " << bit1 << std::endl;
   // Bitset<-18> bit2;
    //std::cout << "Bit2: " << bit2 << std::endl; //error !!!true
    Bitset<9> bit3;
    std::cout << "Bit3: " << bit3 << std::endl;
    //- 9 223 372 036 854 775 807 ,+9 223 372 036 854 775 807*/
    
  /*  //  test parametr constructor
     Bitset<8> bit1(120);
     std::cout << "Bit1: " << bit1 << std::endl;
     Bitset<8> bit2(-10);
     std::cout << "Bit2: " << bit2 << std::endl;
     Bitset<8> bit3(-100);
     std::cout << "Bit3: " << bit3 << std::endl;
     Bitset<8> bit4(0);
     std::cout << "Bit4: " << bit4 << std::endl;
     Bitset<8> bit5(300);
     std::cout << "Bit5: " << bit5 << std::endl;
     Bitset<8> bit6(111700);
     std::cout << "Bit6: " << bit6 << std::endl;
    // 11011010001010100 eror!!!involid pointer!!!*/
     
     //  test copy,move constructor
    /* Bitset<8> bit1(120);
     Bitset<8> bit2(bit1);
     std::cout << "Bit2: " << bit2 << std::endl;

     //Bitset<8> bit3(111700);//erorr
     //Bitset<8> bit4(bit3);
     //std::cout << "Bit4: " << bit3 << std::endl;
     
     Bitset<8> bit5(-120);
     Bitset<8> bit6(bit5);
     std::cout << "Bit6: " << bit6 << std::endl;*/
    

    


   /* Bitset<8> bit1(120);
    Bitset<8> bit2(bit1);
    Bitset<8> bit3;
    Bitset<8> bit4;
    bit4 = bit1;
    
    std::cout << "Your initial values below\n" << std::endl;
    std::cout << "Bit1: " << bit1 << std::endl;
    std::cout << "Bit2: " << bit2 << std::endl;
    std::cout << "Bit3: " << bit3 << std::endl;
    std::cout << "Bit4: " << bit4 << std::endl;
    
   /* bit1.choosing_operation();
    bit2.choosing_operation();
    bit3 ^= bit4;
    
    std::cout << "Results" << "\nbit1: " << bit1 << "\nbit2: " << bit2  << "\nbit3: " << bit3 << "\nbit4: " << bit4 <<  std::endl;
   */ 
    return 0;
}
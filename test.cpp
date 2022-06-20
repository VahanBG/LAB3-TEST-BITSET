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
    

    // operator ~
     /*  Bitset<8> bit5(120);
     Bitset<8> bit6 = bit5;
     std::cout << "Bit6: " << bit6 << std::endl;    
     ~bit6;
     std::cout << "Bit6: " << bit6 << std::endl; */

    // operator &= 
     /*Bitset<8> bit5(120);
     Bitset<8> bit6 = bit5;
     ~bit6;
     std::cout << "Bit6: " << bit6 << std::endl; 
     bit6 &= bit5;
     std::cout << "Bit6: " << bit6 << std::endl;//ok
     Bitset<8> bit_1(255);
     std::cout << "bit1: " << bit_1 <<std::endl;
     Bitset<8> bit_2(257);
     std::cout << "bit2: " << bit_2 <<std::endl;
     bit_1 &= bit_2;*/


     // operator |=
    /* Bitset<8> bit5(120);
     Bitset<8> bit6 = bit5;
     ~bit6;
     std::cout << "Bit6: " << bit6 << std::endl;
     std::cout << "Bit5: " << bit5 << std::endl;
     //bit6 |= bit5;
     //std::cout << "Bit6: " << bit6 << std::endl;
   // bit5 |= bit6;
   // std::cout << "Bit5: " << bit5 << std::endl;

   /*  Bitset<8> bit_1(255);
     std::cout << "bit1: " << bit_1 <<std::endl;
     Bitset<8> bit_2(257);
     std::cout << "bit2: " << bit_2 <<std::endl;
     bit_2 |= bit_1;
     std::cout << "bit2: " << bit_2 <<std::endl;//eror!!!!!!!!!!!!!!!!!!!*/

      // operator ^=
     /*Bitset<8> bit5(120);
     Bitset<8> bit6 = bit5;
     ~bit6;
     std::cout << "Bit6: " << bit6 << std::endl;
     std::cout << "Bit5: " << bit5 << std::endl;
     bit6 ^= bit5;
     Bitset<8> bit44(8);
     std::cout << "Bit6: " << bit6 << std::endl;
     std::cout << "Bit44: " << bit44 << std::endl;
     bit6^=bit44;
     
     std::cout << "Bit6: " << bit6 << std::endl;
*/
    /* Bitset<8> bit_1(255);
     std::cout << "bit1: " << bit_1 <<std::endl;
     Bitset<8> bit_2(257);
     std::cout << "bit2: " << bit_2 <<std::endl;   
     bit_2 ^= bit_1 ;
     std::cout << "bit2: " << bit_2 <<std::endl; //ERORRRR!!!!!!!!!!!
*/
     
     //operator <<= , >>=
/*
     Bitset<8> bit5(120);
     Bitset<8> bit6 (3);
     std::cout << "Bit6: " << bit6 << std::endl;
     std::cout << "Bit5: " << bit5 << std::endl;
     bit5 <<= bit6;
     std::cout << "Bit5: " << bit5 << std::endl;
     bit5 >>= bit6;
     std::cout << "Bit5: " << bit5 << std::endl;
     Bitset<8> bit7 (-3);
     std::cout << "Bit7: " << bit7 << std::endl;
     // bit5 >>= bit7;
     // std::cout << "Bit5: " << bit5 << std::endl; ERORRR!!!!!!!!!!!
     bit5 <<= -1;
     std::cout << "Bit5: " << bit5 << std::endl; //sxal e tpum!!!!*/

     //operator << , >>
   /*  Bitset<8> bit5(120);
     Bitset<8> bit6 (3);
     Bitset<8> bit7 (-3);
     std::cout << "Bit6: " << bit6 << std::endl;
     std::cout << "Bit5: " << bit5 << std::endl;
     std::cout << "Bit7: " << bit7 << std::endl;
     bit5 << bit6;
     std::cout << "Bit5: " << bit5 << std::endl;
     bit5 >> bit6 ;
     std::cout << "Bit5: " << bit5 << std::endl;
     //bit5 >> bit7 ;
     //std::cout << "Bit5: " << bit5 << std::endl; ERORRR!!!!!!
    // bit5<<bit7;
     //std::cout << "Bit5: " << bit5 << std::endl; //WRONG!!!!!!!
     //bit5>>bit7;
     //std::cout << "Bit5: " << bit5 << std::endl; //ERORRR!!!!!!
*/
     //operator  == ,!=
    /* Bitset<8> bit5(120);
     Bitset<8> bit6 (3);
     Bitset<8> bit7 (-3);
     Bitset<8> bit8(120);

    /* std::cout << "Bit6: " << bit6 << std::endl;
     std::cout << "Bit5: " << bit5 << std::endl;
     std::cout << "Bit7: " << bit7 << std::endl;
     std::cout<< (bit5 == bit8)<<std::endl; //ok
     std::cout<<(bit5 == bit6)<<std::endl; //ok
     std::cout<<(bit5 != bit6)<<std::endl; //ok*/
   /*  Bitset<8> bit1(255);
    // std::cout << "Bit1: " << bit1 << std::endl;
     //Bitset<8> bit2(65527);
     //std::cout << "Bit2: " << bit2 << std::endl;
     //std::cout<< (bit1 == bit2)<<std::endl; //Wrong !!!!! հաշվի չի առել չափերը
     //std::cout<< (bit2 == bit1)<<std::endl; //ok*/


  //operator  []
 /* Bitset<8> bit5(120);
  std::cout << "Bit5: " << bit5 << std::endl;
  std::cout<<bit5[3]<<std::endl;
  std::cout<<bit5[0]<<std::endl;
  //std::cout<<bit5[10]<<std::endl; ERROR չափից մեծ ինդեքս տալը հաշվի չի առնվել
  std::cout<<bit5[-5]<<std::endl; //WRONG  բացասական թվի դեպք չիի քննարկվել*/
     
// bool none(); any () , all()
/*Bitset<8> bit5(0);
  std::cout << "Bit5: " << bit5 << std::endl;
  std::cout<< "none "<<bit5.none()<<std::endl;
  std::cout<< "any "<<bit5.any()<<std::endl;*/
  /*Bitset<8> bit4(254);
  std::cout << "Bit4: " << bit4 << std::endl;
  std::cout<< "all "<<bit4.all()<<std::endl;
  std::cout<< "getsize "<<bit4.getSize()<<std::endl;*/
  
 // set () , setting_by_given_val , reset() , count() , flip () ,to_String() , to_Long()
 /*   Bitset<8> bit5();
    std::cout << "Bit5: " << bit5 << std::endl;*/
    //std::cout<< "set() "<<bit5.set()<<std::endl;
   // std::cout<< "setting_by_given_val() "<<bit5.setting_by_given_val(350)<<std::endl;
  // std::cout<< "reset() "<<bit5.reset()<<std::endl;
 /* std::cout<< "count() ";
  bit5.count();
  std::cout<<std::endl;*/
 /* bit5.flip();
  std::cout << "Bit5: " << bit5 << std::endl;*/
  /*std::cout<< "to_string() ";
  /*bit5.to_String();
  std::cout<<std::endl;*/
  /*std::cout<< "to_long() "<<bit5.to_Long()<<std::endl;*/
  





   Bitset<8> bit1(120);
    Bitset<8> bit2(bit1);
    Bitset<8> bit3;
    Bitset<8> bit4;
    bit4 = bit1;
    
    std::cout << "Your initial values below\n" << std::endl;
    std::cout << "Bit1: " << bit1 << std::endl;
    std::cout << "Bit2: " << bit2 << std::endl;
    std::cout << "Bit3: " << bit3 << std::endl;
    std::cout << "Bit4: " << bit4 << std::endl;
    
   bit1.choosing_operation();
    bit2.choosing_operation();
    bit3 ^= bit4;
    
    std::cout << "Results" << "\nbit1: " << bit1 << "\nbit2: " << bit2  << "\nbit3: " << bit3 << "\nbit4: " << bit4 <<  std::endl;
   
    return 0;
}
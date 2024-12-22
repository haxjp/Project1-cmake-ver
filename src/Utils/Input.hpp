#pragma once
#include "../PCH.hpp"
class Input {
public:
    static inline std::map<int,std::bitset<16>> keymap[2] ;

    Input(){

    }

    static bool getKeyCondition(int vkey,bool dontcount_succession){
        static bool result;
        if(result)
        result = false;
        keymap[0][vkey] = GetKeyState(vkey);
        
        if(dontcount_succession){
            if(keymap[0][vkey][7] == keymap[1][vkey][7])
            result = false;
            else{
                if(keymap[0][vkey][7] == 1)
                result = true;
            } 
        }
        else {
            if(keymap[0][vkey][7])
            result = true;
            else result = false;
        }

        keymap[1] = keymap[0];
        return result;
    }
   
};
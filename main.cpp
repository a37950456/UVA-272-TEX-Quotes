//
//  main.cpp
//  TEX Quotes
//
//  Created by Tina Tsai on 2017/7/31.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//將單數的"變成`` 雙數的變成''

#include <cstdio>
#include <cstdlib>


int main(){
    bool word = false;
    int c;
    while((c=getchar())!= EOF){
        
        if(c=='"'){
            if(word)  //true
                printf("''");
            else
                printf("``"); //false
                word =! word ;  //true轉false false轉true
            }
        
        else
            putchar(c);
    }
    return 0;
}




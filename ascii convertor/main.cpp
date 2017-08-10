    //
    //  main.cpp
    //  ascii convertor
    //
    //  Created by Kanishk Verma on 06/08/17.
    //  Copyright © 2017 Kanishk Verma. All rights reserved.
    //

#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(int argc, const char * argv[]) {

    char a;

    int result,b=15,c=250,out,x,y,carry;
    cin>>a;
    cout<<"ascii is"<<int(a);
    cout<<"the left one is"<<endl;
    result = ((int)a) & b;

    if(result >9) {
    result = 63 + result%10;
    } else {
    cout<< result<< endl;
    }
    x = result;


    cout<<"the other half is ";
    out = ((int)a) & c;
    out = out >> 4;


    if(out > 9) {
    out = 63 + out % 10;
    cout<<(char)out;
    } else {
    cout<< out<< endl;
    }
    //the back convertion
    out = out << 4;
    y = out;

    while(x != 0) {

    carry = y & x ;
    y = y ^ x;
    x = carry << 1;
    }


    cout<<(char)y;
    return 0;

}


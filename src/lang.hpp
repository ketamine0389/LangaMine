#ifndef LANG_H
#define LANG_H
#include <iostream>
using namespace std;

int main()
{
    cout << "no errors?\n";
    return 0;
}

//////////////////////////////////////
// TOKENS ////////////////////////////
//////////////////////////////////////

const char T_NUM[4] = "num";
const char T_ID[3] = "id";
const char T_OP[3] = "op";
const char T_CHAR[5] = "char";

class Token 
{
    public:
        string printableForm();
        Token( void );
        Token( char v[5], char tt[5] );
    private:
        char* tokenType;
        bool b;
        char* value;
};

Token::Token( char v[5], char tt[5] )
{
    b = true;
    value = v;
    tokenType = tt;
}

string Token::printableForm()
{
    if(value)
    {
        return ( "%5s: %5s", tokenType, value );
    }
}

//////////////////////////////////////
// DATATYPES /////////////////////////
//////////////////////////////////////

const char DT_INT[4] = "int";
//const char DT_INT[]

#endif
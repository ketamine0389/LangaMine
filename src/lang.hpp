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
// CONSTANTS (not tokens) ////////////
//////////////////////////////////////

const char DIGITS[11] = "0123456789";
const char OPERATORS[11] = "+-*/()[]{}";
//const char OPERANDS[] = "" 
// ^ make 2 dimen for && || and so on

//////////////////////////////////////
// ERRORS ////////////////////////////
//////////////////////////////////////

class Error
{
    //stub
};

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
// LEXER /////////////////////////////
//////////////////////////////////////

class Lexer
{
    public:
        Lexer( char t[16] );
        void advance();
        void makeTokens();
        void makeNum();
    private:
        char* text;
        int pos = -1;
        char currentChar = '\0';
};

Lexer::Lexer( char t[16] )
{
    text = t;
}

void Lexer::advance()
{
    pos += 1;
    if(pos < size_t(text))
    {
        currentChar = text[pos];
    }
}

void Lexer::makeTokens()
{
    std::string tokens = {};

    while(this->currentChar != '\0')
    {
        bool b = false;
        // digits
        for(int i = 0; i < DIGITS.length(); i++)
        {
            if(currentChar == DIGITS[i])
            {
                tokens.append(makeNum());
                b = true;
            }
        }

        // operators
        /*


         * left off here lol


        */
    }
}

//////////////////////////////////////
// DATATYPES /////////////////////////
//////////////////////////////////////

const char DT_INT[4] = "int";
//const char DT_INT[]

#endif
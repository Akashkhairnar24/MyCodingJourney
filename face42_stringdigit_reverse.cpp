/*
Given a string Str, which contains numbers (0 to 9)and also letters of the English and to 'Z'). The task is to reverse string the string in such a way that the positiors of numbers in the string are left unaltered.

Example 1:

Input:

a1b2igh3 -> Value of Str

Output:

h1g2iba3

Explanation:

Without changing the positions of 1, 2 and 3, only the positions of characters 'h', 'g, "i', 'b' and 'a' have been reversed.



﻿Example 2:

Input:

Ab5c7de96 -> Value of Str

Output:

ed5c7bA96


*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string str;
    cin>>str;
    int n = str.length();
    int i=0,j=n-1;
    while(i<=j)
    {
        if(!isdigit(str[i]) && !isdigit(str[j]))
        {
            swap(str[i],str[j]);
            i++;
            j--;
        }
        else if(!isdigit(str[i]) && isdigit(str[j]))
        j--;
        else if(isdigit(str[i]) && !isdigit(str[j]))
        i++;
        else
        {
            i++;
            j--;
        }
    }
    cout<<str<<"\n";
    return 0;
}
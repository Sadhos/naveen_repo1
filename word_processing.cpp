#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//semistatic string 
char a[20] = "HELLLO!";

const char * source = "testing string"; // one way to create a sting(best method)
char * p = (char*)"ACCC"; // another way(explict conversion)
//NOTE!!!!
/*
    As of C++11, 
    the implicit conversion that had been deprecated was officially removed, 
    so code that depends on it 
*/
//so this should show warnings 
//char * b = "ABC"; //basically this is happen(hover over yellow line)
int main()
{
    const char *str = "This is the way to do some string work";
    char target = 'i';
    const char *result = str;
    while((result = strchr(result,target)) != NULL)
    {
        printf("found %c staring at '%s'\n",target,result);
        ++result;
    }
    return 0;
}
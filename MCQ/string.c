int fun(char *str1)
{
    char *str2 = str1;
    while (*++str1)
        ;
    return (str1 - str2);
}
int main()
{
    char *str = "GeeksQuiz";
    printf("%d", fun(str));
    return 0;
}



/*


The function fun() basically counts number of characters in input string. Inside fun(), 
pointer str2 is initialized as str1. The statement while(*++str1); increments str1 till ‘\\0’ is reached. 
str1 is incremented by 9. 
Finally the difference between str2 and str1 is returned which is 9. */
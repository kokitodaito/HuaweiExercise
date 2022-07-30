#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001] = {0};
    char ch = '\0';
    int count = 0; 

    scanf("%[^\n] %c",str,&ch);

    for(int i =0;i<strlen(str);i++)
    {
        if(ch >= 0 && ch <= 9 && str[i] == ch)
        {
            ++count;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            if(str[i] == ch || str[i] == ch+32)
                ++count;
        }
        else
        {
            if(str[i] == ch || str[i] == ch-32)
                ++count;
        }
    }
    printf("%d",count);
    return 0;
}
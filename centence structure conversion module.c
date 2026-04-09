#include <stdio.h>
#include <string.h>

int main()
 {
    
    char input[10];
    char word1[4] = {0}; 
    char word2[4] = {0}; 
    
    while (1)
    {
    
        printf("请输入两个汉字（如：学习）：");
        scanf("%s", input);
        if (strcmp(input, "q") == 0)
         break;
        if (strlen(input) != 4) 
        {
        printf("请严格输入两个汉字！\n");
        continue;
        }

        
        strncpy(word1, input, 2);
       
        strncpy(word2, input + 2, 2);

        
        printf("进行一个对%s的%s\n", word2, word1);

    }
    return 0;
}
bool checkPalindrome(char str[]) {
    int length = 0, j = 0, count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    
    char str1[1000000];
    for(int i = (length - 1); i >= 0; i--)
    {
        str1[j] = str[i];
        j++;
    }
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] == str1[i])
            count++;
    }
    if(count == length)
        return 1;
    return 0;
}

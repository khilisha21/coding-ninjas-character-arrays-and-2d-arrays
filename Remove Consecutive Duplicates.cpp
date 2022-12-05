void removeConsecutiveDuplicates(char input[]) {
    
    char c = input[0];
    char input1[1000000];
    input1[0] = c;
    int j = 1;
    for(int i = 1; input[i] != '\0'; i++)
    {
        if(input[i] != c)
        {
            c = input[i];
            input1[j] = c;
            j++;
        }
        else
            continue;
    }
    input1[j] = '\0';
    
    int i = 0;
    for(i = 0; input1[i] != '\0'; i++)
    {
        input[i] = input1[i];
    }
    input[i] = '\0';
}

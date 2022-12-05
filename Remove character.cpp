void removeAllOccurrencesOfChar(char input[], char c) {
    
    int j = 0;
    char input1[1000000];
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] != c) {
            input1[j] = input[i];
            j++;
        }
    }
    input1[j] = '\0';
    int i = 0;
    for(i = 0; input1[i] != '\0'; i++)
    {
        input[i] = input1[i];
    }
    input[i] = '\0';
}

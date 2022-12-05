char highestOccurringChar(char input[]) {
    
    int freq[256] = {0}, max = 0;
    for(int i = 0; input[i] != '\0'; i++)
    {
        char n = input[i];
        freq[n]++;
    }
    
    char c;
    for(int i = 0; i < 256; i++)
    {
    	if(max < freq[i])
        {
            max = freq[i];
            c = i;
        }
    }
    return c;
}

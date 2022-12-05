bool isPermutation(char input1[], char input2[]) {
    
    int c = 0, freq[256] = {0}, count = 0;
    if(strlen(input1) == strlen(input2)){
        
     for(int i = 0; input1[i] != '\0'; i++)
     {
         int n = input1[i];
         freq[n]++;
     }
     for(int i = 0; input2[i] != '\0'; i++)
     {
         int n = input2[i];
         freq[n]--;
     }
        
    for(int i = 0; i < 256; i++)
     {
         if(freq[i] == 0)
             count++;
     }
        
        if(count == 256)
            return true;
    }
    return false;
}

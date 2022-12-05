void printSubstrings(char input[]) {
    
    for(int k = 0; k < strlen(input); k++)
    {
    for(int i = k; input[i] != 0; i++)
    {
        for(int j = k; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
    }
}

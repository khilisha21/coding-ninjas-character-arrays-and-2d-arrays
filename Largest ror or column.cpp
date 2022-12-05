void findLargest(int **input, int M, int N)
{
    int maxCol = -2147483648, maxRow = -2147483648, indexCol = 0, indexRow = 0;
    for(int i = 0; i < N; i++)
    {
        int sum = 0;
        for(int j = 0; j < M; j++)
    	{
        	sum += input[j][i];
    	}
        if(sum > maxCol)
        {
            maxCol = sum;
            indexCol = i;
        }
    }
    
    for(int i = 0; i < M; i++)
    {
        int sum = 0;
        for(int j = 0; j < N; j++)
    	{
        	sum += input[i][j];
    	}
        if(sum > maxRow)
        {
            maxRow = sum;
            indexRow = i;
        }
    }
    
    if(maxRow >= maxCol)
        cout << "row " << indexRow << ' ' << maxRow << endl;
    if(maxRow < maxCol)
        cout << "column " << indexCol << ' ' << maxCol << endl;
    
}

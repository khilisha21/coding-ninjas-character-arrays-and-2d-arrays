void wavePrint(int **input, int M, int N)
{
    for(int i = 0; i < N; i++)
    {
        if((i % 2) == 0)
        {
        for(int j = 0; j < M; j++)
    	{
        	cout << input[j][i] << ' ';
    	}
        }
        else
        {
        for(int j = M - 1; j >= 0; j--)
    	{
        	cout << input[j][i] << ' ';
    	}
        }   
    }
}

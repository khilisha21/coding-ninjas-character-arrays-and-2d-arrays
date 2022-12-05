void spiralPrint(int **input, int nRows, int nCols)
{
    int colStart = 0, colEnd = nCols-1, rowStart = 0, rowEnd = nRows-1, count = 0;
    
    while(count <= (nRows * nCols))
    {
        for(int j = colStart; j <= colEnd; j++)
        {
            cout << input[rowStart][j] << ' ';
            count++;
        }
        if(count == (nRows * nCols))
            break;
        rowStart++;
        for(int i = rowStart; i <= rowEnd; i++)
        {
            cout << input[i][colEnd] << ' ';
            count++;
        }
        if(count == (nRows * nCols))
            break;
        colEnd--;
        for(int j = colEnd; j >= colStart; j--)
        {
            cout << input[rowEnd][j] << ' ';
            count++;
        }
        if(count == (nRows * nCols))
            break;
        rowEnd--;
        for(int i = rowEnd; i >= rowStart; i--)
        {
            cout << input[i][colStart] << ' ';
            count++;
        }
        if(count == (nRows * nCols))
            break;
        colStart++;
    }
}

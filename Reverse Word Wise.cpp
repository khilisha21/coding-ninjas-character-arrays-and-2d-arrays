void reverse(char input[],int start,int end)
{
    for(int i = start; i <= end; i++)
    		{
        		char temp = input[i];
        		input[i] = input[end];
        		input[end] = temp;
        		end--;
    		}
}

void reverseStringWordWise(char input[]) {
    int length = 0;
    
    for(int i = 0; input[i] != '\0'; i++)
    {
        length++;
    }
    
    int end = (length - 1);
    for(int start = 0; start <= end; start++)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        end--;
    }
    
    int start = 0, i = 0;
    for(i = 0; i < length; i++)
    {
        if(input[i] == ' ')
        {
            end = i - 1;
            reverse(input,start,end);
            start = i + 1;;
            end = i + 1;
        }
        
    }
    
    end = i - 1;
    reverse(input,start,end);
    
}

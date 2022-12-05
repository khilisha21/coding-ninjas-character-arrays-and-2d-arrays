string getCompressedString(string &input) {
     
  //char* input1 = new char[10000];
    char input1[100000];
    int i = 0;
    int start = 0, end=1;
    char c = input[start];
    for(; input[end] != '\0'; end++)
    {  
        if(input[end] != c)
        {
            input1[i] = c;
            i++;
            if((end-start)>1){
            	input1[i] = (end - start+'0');
            	i++;
        	}
            c = input[end];
            start = end;
        }
    }
    if((end-start)>1){
        input1[i]=c;
        input1[++i] = (end-start+'0');
        input1[++i] = '\0';
    }
    else{
        input1[i]=c;
        input1[++i]='\0';
    }
    return input1;
}

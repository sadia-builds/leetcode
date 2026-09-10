bool rotateString(char* s, char* goal) {
    
    if(strlen(s)!=strlen(goal))
    return false;
     int n=strlen(s);
 char temp[n+1];
 strcpy(temp,s);
 char ex;

    for(int i=0;i<n;i++)
    {
       ex=temp[n-1];
       for(int j=n-1;j>0;j--)
       {
        temp[j]=temp[j-1];
       }
       temp[0]=ex;
       if(strcmp(temp,goal)==0)
       {return true;
       }
    }


    return false;
}
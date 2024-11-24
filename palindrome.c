bool Palindrome(int r) 
{
   long long int r=0,n=x;
    
    while(x>0)
    {
        r=(x%10)+(r*10);
        x=x/10;
      
    }
    if(n==r)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
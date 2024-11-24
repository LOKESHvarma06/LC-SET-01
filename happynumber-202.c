int happynumber(int n) 
{
    int sum = 0;
    int x = n;
     while (x >= 10)
{
        sum = 0;
        while (x != 0)
{
            int rem = x % 10;   
            sum += rem * rem;   
        x = x / 10;         
        }
        
        x = sum; 
    }

    return (x == 1);  
}

int main() {
    int n;
    scanf("%d", &n);
    if (happynumber(n))
{
        printf("true\n");
    } 
else
{
        printf("false\n");
    }

    return 0;
}

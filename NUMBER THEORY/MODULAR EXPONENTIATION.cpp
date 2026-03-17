// RECURSIVE POWER WITHOUT MOD m, WITHOUT binary exponentiation. TC = O(n)
int recursivePower(int x,int n)
{
    if(n==0)
        return 1;
    return x*recursivePower(x,n-1);
}
// ITERATIVE POWER WITHOUT MOD m, WITHOUT binary exponentiation. TC = O(n)
int iterativePower(int x,int n)
{
    int result=1;
    while(n>0)
    {
        result=result*x;
        n--;
    }
    return result;
}
// RECURSIVE POWER WITHOUT MOD m, WITH binary exponentiation. TC = O(log n)
int binaryExponentiation(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation(x*x,n/2);
    else                             //n is odd
        return x*binaryExponentiation(x*x,(n-1)/2);
}
// ITERATIVE POWER WITHOUT MOD m, WITH binary exponentiation. TC = O(log n)
int binaryExponentiation(int x,int n)
{
    int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }
    return result;
}
// RECURSIVE POWER WITHOUT MOD m, WITH binary exponentiation. TC = O(log n)
int modularExponentiation(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
// ITERATIVE POWER WITH MOD m, WITH binary exponentiation. TC = O(log n)
int modularExponentiation(int x,int n,int M)
{
    int result=1;
    while(n>0)
    {
        if(power % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}

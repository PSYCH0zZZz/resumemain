bool isPrime(int num)
{
    if (num < 2) 
        return false;
    bool checkPrime = true; 
    int limit = sqrt(num);
    for (int i = 2; i <= limit; i++)
    {
        if (num%i == 0)
        {
            checkPrime = false;
            break;
        }
    }
    return checkPrime;
}

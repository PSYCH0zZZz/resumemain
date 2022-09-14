bool isPrime(int num)
{
    if (num < 2) // numbers less than 2 are a special case
        return false;
    bool checkPrime = true; // change here
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

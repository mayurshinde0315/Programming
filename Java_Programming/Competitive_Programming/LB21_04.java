//Write a program to count total number of factors of a given number.

class Logic
{
    void CountFactors(int num)
    {
        int iCount = 0;
        for(int i =1; i <= num; i++)
        {
            if(num % i ==0)
        {
            iCount++;  
        }
    }
    System.out.println("Total Number count Factors :"+iCount);
}
}
class LB21_04
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CountFactors(24);
    }
}
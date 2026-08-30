// Write a program to count how many even and odd numbers are present between 1 and N.

class Logic
{
    void countEvenOddRange(int n)
    {
        int iEven =0;
        int iOdd = 0;

        for(int i =1; i<=n; i++)
            {
                if(i % 2 ==0)
                {
                    iEven++;
                }
                else
                {
                    iOdd++;
                }
            } 
            System.out.println("Even number Count is :"+iEven);
            System.out.println("Odd number count is :"+ iOdd );
    }
}
class LB21_02
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
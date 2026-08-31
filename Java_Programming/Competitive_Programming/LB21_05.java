//Write a program to print all numbers from 1 to N that are divisible by both 2 and 3.

class Logic
{
    void printDivisibleBy2and3(int n)
    {
        for(int i = 1; i <= n; i++ )
        {
            if(i % 2 == 0  &&  i % 3 == 0)
            {
                System.out.print(i +" ");
            }
        }
        System.out.println("Number divisible by both 2 and 3 are :");
    }
}
class LB21_05
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
        
    }
}
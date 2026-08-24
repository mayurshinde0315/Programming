// Write a Program to find the sum of digits of a number.

class Logic
{
    void printTable(int num)
    {
        int sum = 0;

        while (num !=0)
        {
            sum = sum + (num * 10);
            num = num /10;
        }
        System.out.println("Sum of digits is : "+ sum);
    }
}

class LB17_05
{
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.printTable(5);
    }
}
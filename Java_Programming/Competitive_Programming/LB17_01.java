// Write a Program to find the sum of digits of a number.

class Logic
{
    void sumOfDigits(int num)
    {
        int sum = 0;

        while (num !=0)
        {
            sum = sum + (num % 10);
            num = num /10;
        }
        System.out.println("Sum of digits is : "+ sum);
    }
}

class LB17_01
{
    public static void main(String A[] ) 
    {

        Logic lobj = new Logic();
        lobj.sumOfDigits(1234);

    }
}
//Write a program to find the largest digit in a given number.

class Logic
{
void findLargest(int num)
{
    int iDigit =0, iMax = 0;

    while (num != 0)
    {
        iDigit = num % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        num  = num / 10;
    }
    System.out.println("Largest number is "+ iMax);
    }
}

class LB20_04
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.findLargest(83429);
}
}
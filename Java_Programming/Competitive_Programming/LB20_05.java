//Write a program to find the smallest digit in a given number.

class Logic
{
void findSmallest(int num)
{
    int iDigit =0, iMin = 9;

    while (num != 0)
    {
        iDigit = num % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        num  = num / 10;
    }
    System.out.println("Smallest number is :"+ iMin);
}
}

class LB20_05
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.findSmallest(45872);
}
}
// Write a program to print each digit of a number separately.
class Logic
{
    void printDigits(int num)
    {
    if(num == 0)
    {
        System.out.println(0);
        return ;
    }

    while(num > 0)
    {
        int digit = num %10;
        System.out.println(digit);
        num = num / 10;
    }

    }
}

class LB19_04
 {
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.printDigits(9876);
    }
    
}

// Write a program to check whether a number is divisible by 5 and 11 or not.
class Logic
{
    void ChecknumDivisible(int year)
    {
    if((year %5 == 0)&&(year % 11 == 0))
    {
        System.out.println("Number is divisible");
    }
    else
    {
        System.out.println("Number is not Divisible");
    }

    }
}

class LB19_03
 {
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.ChecknumDivisible(55);
    }
    
}

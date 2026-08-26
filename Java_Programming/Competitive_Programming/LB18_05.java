//Write a program to check whether a number is positive,negative,or zero.

class Logic
{
    void CheckSign(int num)
    {
    if(num > 0)
    {
        System.out.println("Number is Positive");
    }
    else if(num < 0)
    {
        System.out.println("Number is negative");
    }
    else
    {
        System.out.println("Number is Zero ");
    }
    }
}

class LB18_05
 {
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.CheckSign(8);
        lobj.CheckSign(-8);
        lobj.CheckSign(0);
    }
    
}

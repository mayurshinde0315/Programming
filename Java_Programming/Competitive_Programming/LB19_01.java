//Write a program to check whether a given year is a leap year or not.

class Logic
{
    void CheckSign(int year)
    {
    if((year %400 == 0) || (year % 4 ==0 && year %100 !=0))
    {
        System.out.println(year+" is a leap year");
    }
    else
    {
        System.out.println(year+" is not a leap year");
    }

    }
}

class LB19_01
 {
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.CheckSign(2024);
    }
    
}

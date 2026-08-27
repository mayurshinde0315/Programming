//Write a program to check whether a given year is a leap year or not.

class Logic
{
    void CheckSign(int marks)
    {
    if(marks >= 90 && marks <= 100)
    {
        System.out.println("Grade A");
    }
    else if(marks >= 80 && marks < 90)

    {
        System.out.println("Grade B");
    }
 else if(marks >= 70 && marks < 80)

    {
        System.out.println("Grade C");
    }
    else if(marks >= 60 && marks < 70)

    {
        System.out.println("Grade D");
    }
    else if(marks >= 0 && marks < 60)

    {
        System.out.println("Grade F");
    }
    }
}

class LB19_02
 {
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.CheckSign(85);
    }
    
}

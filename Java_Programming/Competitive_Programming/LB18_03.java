//Write a program to print all odd number up to N.
class Logic
{
    void printOddNumbers(int num)
    {
        int i = 1 ;

        while (i <= num)

        {
            System.out.println(i+" ");
            i = i + 2  ;
        
        }
        
    }
}

class LB18_03
{
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();

        lobj.printOddNumbers(20);
    }
}
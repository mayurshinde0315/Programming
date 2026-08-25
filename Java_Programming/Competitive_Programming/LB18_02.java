//Write a program to print all even number up to N.
class Logic
{
    void printEvenNumbers(int num)
    {
        int i = 2;

        while (i <= num)

        {
            System.out.println(i+" ");
            i = i + 2;
        
        }
        
    }
}

class LB18_02
{
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();

        lobj.printEvenNumbers(20);
    }
}
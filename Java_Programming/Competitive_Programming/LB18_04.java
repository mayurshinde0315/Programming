//Write a program to print all Evenodd number up to N.
class Logic
{
    void printEvenOddNumbers(int num)
    {
        int i = 1 ;

        while (i <= num)

        {
            if(i % 2 ==0)
                {
                    System.out.println(i+" is even");
         
                }
                else
                {

                System.out.println(i+"is Odd ");
                }
                   i++ ;
        
        }
        
    }
}

class LB18_04
{
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();

        lobj.printEvenOddNumbers(20);
    }
}
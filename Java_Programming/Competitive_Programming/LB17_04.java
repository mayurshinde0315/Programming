//write a program to find the minimum number of three numbers.

class Logic
{
    void findMin(int a, int b, int c)
    {
            if ((a <= b) &&(a < c))
            {
                System.out.println("minimum number is :"+a);
            }
           else if((b <= a)  && (b<c))
            {
                System.out.println("Minimum number is :"+b);
            }
            else
            {
                System.out.println("minimum number is :"+c);
            }
    }

}
class LB17_04 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findMin(3, 5, 7); 
        
    }

}

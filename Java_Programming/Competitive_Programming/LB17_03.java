// Write a program to find the maximum of two number.

class Logic
{
    void findMax(int a, int b)
    {
            if(a > b)
            {
                System.out.println("Maximum number is :"+a);
            }
            else
            {
                System.out.println("maximum number is : "+b);
            }
    }
}

class LB17_03 
{
    public static void main(String A [])
    {
        Logic lobj = new Logic();
        lobj.findMax(20, 15);
        
    }   
}
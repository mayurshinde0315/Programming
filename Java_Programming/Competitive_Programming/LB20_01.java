// Write a program to find the sum of all even number up to N.

class Logic
{
void sumEvenNumbers(int n)
{
    int iSum = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i %2 ==0)
        {
            iSum = iSum +i;

        }
    }
    System.out.println("sum of even number:"+iSum);
}
}
class LB20_01
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.sumEvenNumbers(10);
}
}
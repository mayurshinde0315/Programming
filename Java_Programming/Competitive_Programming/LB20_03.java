// Write a program to check whether a number is a perfect number or not.
class Logic
{
void checkPerfect(int num)
{
    int iSum = 0;

    for(int i = 1; i < num;  i++)
    {
        if(num % i==0)
        {
            iSum = iSum +i;
        }
        }
        if(iSum == num)
        {
            System.out.print("Number is Perfect ");

        }
        else 
        {
            System.out.print("Number is not perfect");

        }
    }
}

class LB20_03
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.checkPerfect(6);
}
}
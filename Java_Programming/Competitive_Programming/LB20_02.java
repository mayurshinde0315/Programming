//Write a program to print numbers from N down to 1 in reverse order.
class Logic
{
void printReverse(int n)
{
    int iSum = 0;

    for(int i = n; i >= 1;  i--)
    {
        System.out.println(i);
    }
    System.out.println("sum of even number:"+iSum);
}
}
class LB20_02
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.printReverse(10);
}
}
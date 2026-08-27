// Write a program to calculate the power of a number using loops.

class Logic
{
    void calculatepower(int base, int exp)
    {
        int power=1;
        for(int i = 1; i <=exp; i++)
        {
            power = power * base;
        }
        System.out.println("Power is : "+power);
    }
}
class LB19_05 
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.calculatepower(2, 5);
        
    }
}
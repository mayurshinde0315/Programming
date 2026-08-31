class Logic
{
    void DisplayFFactors(int num)
    {
        for(int i =1; i <= num; i++)
        {
            if(num % i ==0)
            {
                System.out.println(i+" ");
            }
        }
    }

}
class LB21_03 
{
    public static void main(String[] args) 
{
    Logic obj =new Logic();
    obj.DisplayFFactors(12);
}
}

// Write a Program to check whether a number is a palindrione or not.
class Logic
{
    void checkPalindrone(int num)
    {
        int iCnt = 0;
        int iNo= 0;

        while (num > 0)
        {
            iNo = iNo * 10 + (num % 10);
            num = num /10;
        }

        if (iCnt == iNo)
        {
            System.out.println("Number is palindrome ");
        
        }
        else
        {
            System.out.println("Number is not palindrome");
        }
    }
}

class LB17_02
{
    public static void main(String A[] ) 
    {

        Logic lobj = new Logic();
        lobj.checkPalindrone(123);

    }
}
import java.util.*;

class program797
{
    public static void main(String A[])
    {
        int Current_Balance = 0;
        int Withdraw_Amount = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter your current balance:");
        Current_Balance = sobj.nextInt();

        System.out.println("Please enter the amount that you want to withdraw:");
        Withdraw_Amount = sobj.nextInt();

        if(Current_Balance < 0 || Withdraw_Amount <= 0)
        {
            System.out.println("Invalid input:");
            return;
        }
        if(Withdraw_Amount % 100 != 0)
        {
            System.out.println("Transation faild : Withdrawal amount must be multiple of 100");
        }
        else if(Withdraw_Amount > 25000)
        {
            System.out.println("Transation faild : Maximum withdrawal per transation R 25000");
        }
        else if(Current_Balance - Withdraw_Amount < 1000)
        {
            System.out.println("Transation faild : After withdrawal , balance must be remain at least 1000");
        }
        else
        {
            System.out.println("Transaction Successfull");
            System.out.println("Remaining balence"+(Current_Balance - Withdraw_Amount));
        }

    }


}
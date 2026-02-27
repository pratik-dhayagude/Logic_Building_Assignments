import java.util.*;

class program800
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Amount = 0;

        float DiscountAmount = 0.0f;
        float FinalAmount = 0.0f;
        

        String MemberShipType = null;

        System.out.println("Enter the Purchase amount:");
        Amount = sobj.nextInt();

        System.out.println("Enter type of membership:(Premium / regular)");
        MemberShipType = sobj.next();


        if(
            (Amount < 0) || 
                         ((MemberShipType.equalsIgnoreCase("Premium")==false)  &&
                                     (MemberShipType.equalsIgnoreCase("regular")==false)))
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }
        if(Amount > 5000)   // 20% Discount
        {
            DiscountAmount =  Amount * 0.2f;
        }
        else if(Amount  > 2000)     // 10% Discount
        {
            DiscountAmount = Amount * 0.1f;

        }
        else            //0% Discount
        {
            DiscountAmount = 0.0f;


        }
        FinalAmount = Amount - DiscountAmount;

        if(MemberShipType.equalsIgnoreCase("Premium"))
        {
            DiscountAmount = DiscountAmount + (FinalAmount*0.05f);
             FinalAmount = Amount - DiscountAmount;
            
            
        }
        System.out.println("Original Amount will be"+Amount);
        System.out.println("Discount"+DiscountAmount);
        System.out.println("Final Amount"+FinalAmount);
        sobj.close();
    }
}
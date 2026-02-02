import java.util.*;
class Pattern
{
      public void Display(int iRow,int iColoum)
      {
        int i = 0, j = 0;
        char ch = 'A';
        for(i=1;i<=iRow;i++)
        { 
              ch='A';
            for(j=1;j<=iColoum;j++,ch++)
            {
              
               System.out.printf("%c\t",ch);
               
             
               
            }
            System.out.println();
        }
      }
}
class program36
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows :");
        iValue1 = sobj.nextInt();
        
        
        System.out.println("Enter the number of Coloum :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);


    }

}
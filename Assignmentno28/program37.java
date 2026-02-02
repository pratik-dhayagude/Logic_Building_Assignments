import java.util.*;
class Pattern
{
      public void Display(int iRow,int iColoum)
      {
        int i = 0, j = 0;
        char ch = 'A';
        char ch1 = 'a';

        for(i=0;i<=iRow;i++)
        { 

            ch = 'A';
            ch1 = 'a';         
            for(j=0;j<=iColoum;j++)
            {
              if((i%2)==1)
              {
                 System.out.printf("%c\t",ch); 
                 ch++;
               
              }
              else
              {
                 System.out.printf("%c\t",ch1);
                 ch1++;
                            
                   
              }
  
            }
            System.out.println();
        }
      }
}
class program37
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
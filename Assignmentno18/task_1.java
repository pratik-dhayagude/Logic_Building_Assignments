import java.util.*;

import javax.swing.plaf.basic.BasicSliderUI.ScrollListener;
class Logic 
{
    void Prime(int iValue)
    {
        

       int iCnt=0;
       boolean flag =false;
       for(iCnt=2;iCnt<iValue/2;iCnt++)
       {
            if((iValue%iCnt)==0)
            {
                flag = true;
                break;
              
            }   
       }   
       if(flag==true)
       {
        System.out.println(iValue+"The number is prime");

       }
       else
       {
        System.out.println(iValue+"The number is not prime");
       }
        
    }
}

class task_1
{
    public static void main(String A[])
    {
        int iNo=0;
        Scanner sobj = new Scanner(System.in);
        Logic lobj = new Logic();


        System.out.println("Enter the number :");
        iNo=sobj.nextInt();
        lobj.Prime(iNo);


        
    }
}
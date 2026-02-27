import java.util.*;

class program798
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Marks[] = new int[5] ;
        int i = 0;
        int iSum = 0;
        boolean pass = true;
        boolean Invalid = true;
        System.out.println("Enter the marks:");
        for(i = 0;i<Marks.length;i++)
        {
            
            Marks[i] = sobj.nextInt();
            if(Marks[i] < 35)
            {
                pass = false;
            }
            if(Marks[i] < 0 || Marks[i] > 100)
            {
             Invalid = false;
            }
            iSum = iSum + Marks[i];
        }

        if(Invalid == false)
        {
            System.out.println("Invalid Marks");
        
        }
        if(pass == false)
        {
            System.out.println("Student is fail");
        }

        float avarege = ((float)iSum / (float)5);
        System.out.println("Avarege Marks:"+avarege);

        if(avarege >= 75.0f)
        {
            System.out.println("Finel Result:Destintation");
        }
        else if(avarege >= 60.0f)
        {
            System.out.println("Finel Result:FirstClass");

        }
        else if(avarege >= 50.0f)
        {
            System.out.println("Finel Result:SecondClass");

        }
        else if(avarege < 50.0f) 
        {
            System.out.println("Finel Result:Pass");
        }
        sobj.close();
     

    }
}
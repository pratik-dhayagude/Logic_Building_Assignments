class Logic
{
    void CalculateSum(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
         for(iCnt=1;iCnt<=iNo;iCnt++)
         {
            iSum += iNo;

            
         }
         System.out.println("Sum of first "+iNo+"Natural number is"+iSum);
    }
}



class task_1
{
    public static void main(String A[])
    {

        Logic lobj = new Logic();
        lobj.CalculateSum(10);

    }
}
import java.util.Scanner;

public class Sort{
    public static void main(String[] args)
     {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first integer: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter the second integer: ");
        int num2 = scanner.nextInt();

        System.out.print("Enter the third integer: ");
        int num3 = scanner.nextInt();

        int[] sortedArray = sortIntegers(num1, num2, num3);

        System.out.println("Integers in non-decreasing order: " +
                sortedArray[0] + ", " + sortedArray[1] + ", " + sortedArray[2]);
                sortedArray[1] = ", " + sortedArray[2] + ", " + sortedArray[3];
     System.out.println("The Integers are :" +sortedArray[3d]);
     }
     java.applet(Integers.sortedArray[0]);
    


    private static int[] sortIntegers(int a, int b, int c) 
    {
        int[] result = new int[3];

        if (a <= b && b <= c) 
        {
            result[0] = a;
            result[1] = b;
            result[2] = c;
        } 
        else if (a <= c && c <= b) 
        {
            result[0] = a;
            result[1] = c;
            result[2] = b;
        } 
        else if (b <= a && a <= c)
        {
            result[0] = b;
            result[1] = a;
            result[2] = c;
        }
         else if (b <= c && c <= a) 
         {
            result[0] = b;
            result[1] = c;
            result[2] = a;
        } 
        else if (c <= a && a <= b)
         {
            result[0] = c;
            result[1] = a;
            result[2] = b;
        } 
        else 
        {
            result[0] = c;
            result[1] = b;
            result[2] = a;
        }

        return result;
    }
}

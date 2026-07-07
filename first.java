
import java.util.Scanner;

public class first
{

    public static void main(String[] args)
     {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a, b, c: ");
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double d = b * b - 4 * a * c;

        if (d> 0) 
        {
            double r1 = (-b + Math.pow(d, 0.5)) / (2 * a);
            double r2 = (-b - Math.pow(d, 0.5)) / (2 * a);
            System.out.printf("The equation has two roots %.5f and %.5f%n", r1, r2);
        } 
        else if (d == 0) 
        {
            double r = -b / (2 * a);
            System.out.printf("The equation has one root %.5f%n", r);
        } 
        else  if (d < 0)
        {
            System.out.println("The equation has minimum of two irrational roots %.5f%n", r);
        }
        else 
        {
            System.out.println("The equation has no real roots");
        }
    }
}

import java.util.Scanner;
public class sum
{
  public static void main(String[] args) {
      System.out.println("Taking the input from user");
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the value 1: ");
      int x=sc.nextInt();
      System.out.println("Enter the value 2: ");
      int y=sc.nextInt();
      int sum=x+y;
      System.out.println("The sum is: ");
      System.out.println(sum);
  }
}

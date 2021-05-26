import java.util.Scanner;
public class avg
{
  public static void main(String[] args) {
    System.out.println("Take the input");
      Scanner sc= new Scanner(System.in);
      System.out.println("enter the value 1: ");
      int a=sc.nextInt();
      System.out.println("enter the value 2: ");
      int b=sc.nextInt();
      int avg=(a+b)/2;
    System.out.println("The avg is : "+avg);
  }
}

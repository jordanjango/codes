import java.util.Scanner;
public class product
{
  public static void main(String[] args) {
  Scanner input=new Scanner(System.in);
    System.out.println("Enter the value 1: ");
    float x=input.nextFloat();
    System.out.println("Enter the value 2: ");
    float y=input.nextFloat();
    float product=x*y;
  System.out.println("The product is: "+product);
  }
}

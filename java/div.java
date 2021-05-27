import java.util.Scanner;
class div{
  public static void main(String[] args) {
  Scanner input=new Scanner(System.in);
    System.out.println("enter the value 1: ");
    double x=input.nextLong();
    System.out.println("Enter the value 2: ");
    double y=input.nextLong();
    double sum = x/y;
  System.out.println("The division of x and y: "+sum);
  }
}

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		System.out.println("\t SIMPLE CALCULATOR");
		System.out.println("\t*******************\n");
		System.out.println("Enter 2 numbers");
		
		Scanner scan=new Scanner(System.in);
		
		float num1=scan.nextFloat();
		float num2=scan.nextFloat();
		// two numbers scanned from user
		
		System.out.println("Enter operator(+-*/)");
		
		char operator=scan.next().charAt(0);
		
		switch (operator) {
		case '+':
			Operators.Addition(num1, num2);
			// displayed from the operator class
			break;
		case '-':
			Operators.Subtraction(num1, num2);
			// displayed from the operator class
			break;			
		case '*':
		   float result=Operators.Multiplication(num1, num2);
			System.out.println(result);
			break;
		case '/':
			
			System.out.println(Operators.Division(num1, num2));
			break;
			
			
		default:
			break;
		}
		
		
	}
}

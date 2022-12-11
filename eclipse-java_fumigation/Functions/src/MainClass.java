import java.util.Scanner;

public class MainClass {
	public static void main(String[] args) {
		System.out.println("enter two numbers");
		Scanner scan=new Scanner(System.in);
		
		int num1=scan.nextInt();
		int num2=scan.nextInt();
		
		int result=sumFunction(num2, num2);
		
		System.out.println("result="+result);
	}

	static int sumFunction(int n1, int n2) {
		int sum=n1+n2;
		return sum;
	}
	
}

import java.util.Scanner;

public class MainClass {
	public static void main(String[] args) {
		System.out.println("program to check whether a given number is prime or not.\n");
		System.out.println("Enter a number, ");
		
		Scanner scan=new Scanner(System.in);
		int number=scan.nextInt();
		// number scanned
		
		int i, flag=0;
		
		
		
		
		for(i=2; i<number; i++ ) {
			if(number%i==0) {
				flag=1;
				break;	
			}
		}
		if(number==0||number==1) {
			flag=1;
		}
		if(flag==1) {
			System.out.println("\nit is not a prime number");
		}
		else if(flag==0) {
			System.out.println("\nit is a prime number");
		}
	

}
}
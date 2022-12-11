
public class Main {
	public static void main(String[] args) {
		
		SampleClass obj1=new SampleClass();
		SampleClass obj2=new SampleClass();
		
		
		obj1.num1=10;
		obj1.num2=20;
		obj2.num1=30;
		obj2.num2=40;
		
		
		System.out.println("object 1 numbers are"+obj1.num1+" "+obj1.num2);
		System.out.println();
		obj1.calculateSum(obj1.num1, obj1.num2);
		obj1.display();
		System.out.println();
		obj2.display();
		
		
		
		
		
	}

}

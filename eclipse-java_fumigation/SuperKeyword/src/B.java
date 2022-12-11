
public class B extends A {
	
	B(){
		System.out.println("ClassB non-arg constructor");
	}
	B(int a){
		super(20);
		System.out.println("ClassB parameterized constructor");
	} 
	
	int b;
	
	void display() {
		super.display();   // for displaying base display
		System.out.println("its B method");
		
		int a=20;
		super.a=30;
		
		int c = a + super.a;
		
		System.out.println("Result="+c);

	}

}

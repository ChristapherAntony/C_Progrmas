
public class Class1 {
	public static void main(String[] args) {
		
		//int r=10/0;    //Arithmetic exception
		
		
		try {
			int r=10/0; 
		} catch (Exception e) {
			System.out.println("Arithmetic exception");
		}
		
		//System.out.println("hello"+r);
		
	}

}


public class Sample extends Hello {// class created by sample programmer
	 // we cannot make directly obj for abstract class
	// here we inherits to a class

	@Override
	void onText(String text) {  
		// abstract method should define in inherited class
		System.out.println(text);
		
	}  
	
	public Sample() {
		
		TextScanner ts=new TextScanner(this);
		ts.scan();
		
	}
	
	public static void main(String[] args) { 
		// main function of application developer
		// h need a scanner to scan text via camera
		// here we have the function for scanning text in text scanner ,make obj
		// TextScanner ts=new TextScanner(this); moved to constructor because an issue refer video
		 // this not work from static method.
		
		Sample s=new Sample();
	}
	
	

}

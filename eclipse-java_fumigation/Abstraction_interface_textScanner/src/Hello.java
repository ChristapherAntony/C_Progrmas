


public interface Hello { 
	void onText(String text);
}

//////////////////////////////////////////////////
class Sample implements Hello{
	
	public void onText(String text) {
		System.out.println(text);
	}
	
	Sample() {
		TextScanner ts=new TextScanner(this);
		ts.scan();
	}
	
	public static void main(String[] args) {
		Sample s=new Sample();
	}
}
///////////////////////////////////////////////////

class TextScanner {
	Hello obj;
	
	public TextScanner(Hello obj) {
		this.obj=obj;
	}
	
	void scan() {
		obj.onText("INTERFACE");
	}
}

public class TextScanner {
	Hello obj;
	
	TextScanner(Hello obj){ /* hello comes as constructor argument
	 						of this constructor*/
		
		this.obj=obj;
		
	}
	
	void scan() {
		/* here include 'n' number of code for scanning text 
		 * turn on camera, scan, the take picture ,  scan the 
		 * details in the picture , analyze the details,
		 * and finally print out put */
		
		String text="Scanned text";
		obj.onText(text); 
	}

}

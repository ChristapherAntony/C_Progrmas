
public abstract class Google {
	
	abstract void scarch();//no need for implementation
	// its a abstract method
	
	void message() {  // non abstract method
		System.out.println("Thank you for using google");
		
	}

}

class searchAll extends Google{
	void Search() {
		System.out.println("All search results");
	}
class searchImage extends Google{
	void Search() {
		System.out.println("Image search results");
	}
class searchVideomage extends Google{
	void Search() {
		System.out.println("Video search results");
	}	
	 
	

	
	
	
	
	
	
	

	
}

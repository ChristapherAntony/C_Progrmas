
public class Main {
	// manipulation of getters and setters
	public static void main(String[] args) {
		
		
		Cars c=new Cars("BMW", 250, 15000000);
	System.out.println("Name :"+c.getName()+"\nTopspeed  :"+c.getTopSpeed()+"\nPrise  :"+c.getPrise()); 	
	
	
	
	// now we can modify this by using setters also
	c.setTopSpeed(300);
	c.setPrise(17500000);
	System.out.println("Modified details.\nName :"+c.getName()+"\nTopspeed  :"+c.getTopSpeed()+"\nPrise  :"+c.getPrise()); 	

	
	
	
	}
	
	
	
}

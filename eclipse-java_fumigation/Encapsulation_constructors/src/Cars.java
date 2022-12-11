
public class Cars {
	
	private String name;
	private int topSpeed;
	private int prise;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getTopSpeed() {
		return topSpeed;
	}
	public void setTopSpeed(int topSpeed) {
		this.topSpeed = topSpeed;
	}
	public int getPrise() {
		return prise;
	}
	public void setPrise(int prise) {
		this.prise = prise;
	}
	
	Cars(String name, int Speed, int amount){
		this.name=name;
		this.topSpeed=Speed;
		this.prise=amount;
		
		
	}
	

}

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		System.out.println("Enter the marks scored by the students \n\n");
		
		Scanner scan=new Scanner(System.in);
		
		System.out.println("Written test");
		float writtenTest=scan.nextInt();
		
		System.out.println("Lab exams");
		float labExams=scan.nextInt();
		
		System.out.println("Assignments");
		float assignment=scan.nextInt();
		
		float overallGrade=(writtenTest*70)/100 + (labExams*20)/100 + (assignment*10)/100 ;
		
		System.out.println("Over all grade="+overallGrade);
		
		
		
		
		
		
	}

}

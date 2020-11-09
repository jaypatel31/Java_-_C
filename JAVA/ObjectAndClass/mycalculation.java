import java.util.Scanner;

public class mycalculation extends calculation {
	public void division(double a,double b) {
		result =a/b;
		System.out.println("Additon Of "+a+" / "+b+" = "+result);
	}
	public void multiplication(double a,double b) {
		result =a*b;
		System.out.println("Additon Of "+a+" * "+b+" = "+result);
	}
	public void modulas(double a,double b) {
		result =a%b;
		System.out.println("Additon Of "+a+" % "+b+" = "+result);
	}
	public static void main(String[] args) {
		 Scanner scan=new Scanner(System.in);
		 int op = 0;
		mycalculation s1 = new mycalculation();
		System.out.println("Enter The First Number");
		double first = scan.nextDouble();
		System.out.println("Enter The Second Number");
		double second = scan.nextDouble();
		while(op!=6) {
			System.out.println("=====================Welcome To Calculator=========================");
			System.out.println("1) ADDITION");
			System.out.println("2) SUBTRACTION");
			System.out.println("3) DIVISION");
			System.out.println("4) MULTIPLICATION");
			System.out.println("5) MODULAS");
			System.out.println("6) EXIT");
			 op = scan.nextInt();
			switch(op) {
			case 1:
				s1.additon(first, second);
				break;
			case 2:
				s1.subtraction(first, second);
				break;
			case 3:
				s1.division(first, second);
				break;
			case 4:
				s1.multiplication(first, second);
				break;
			case 5:
				s1.modulas(first, second);
				break;
			case 6:
				System.out.println("THANKS FOR VISIT!!");
				System.out.println("==============================================");
				break;
			default:
				System.out.println("\nINVALID TASK!!");
			}
		}
	}

}

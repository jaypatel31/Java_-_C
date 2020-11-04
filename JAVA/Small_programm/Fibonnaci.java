import java.util.Scanner;
public class Fibonnaci {

	public static void main(String[] args) {
		long  num1 = 0;
		long  num2 =1;
		int i=0;
		long sum = 0;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter Number: ");
		int total = scan.nextInt();
		System.out.println(num1);
		for(i =0;i<total;i++) {
			System.out.println(num1+num2);
			sum = num1+num2;
			if(i==0) {
				num1 = i;//0
				num2 = i+1;//1
			}
			else {
				num1 = num2;
				num2 =sum;
			}
		}
	}
}

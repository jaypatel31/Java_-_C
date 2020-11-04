
public class ArthemeticOperator {
	public static void main(String[] args) {
		int num1 = 12, num2 = 4;
		//ADDITION
		int sum = num1+num2;
		System.out.println("num1 + num2 = "+sum);
		//Subtraction
		int sub = num1-num2;
		System.out.println("num1 - num2 = "+sub);
		//Multiplication
		int mul = num1*num2;
		System.out.println("num1 * num2 = "+mul);
		//Division
		double div = (double)(num1/num2);
		System.out.println("num1/num2 = "+ div);
		//Modulus
		float mod = (float)(num1%num2);
		System.out.println("num1%num2 = "+mod);
	}
}

public class DataTypes {

	public static void main(String[] args) {
		int num1 = 5;
		System.out.println("num1 = "+num1);
		long l = 100;
		num1 = (int)(num1+l);
		System.out.println("num1 = "+num1);
		byte by = 10;
		System.out.println("by = "+by);
		//FLOAT,DOUBLE,
		float num2 = (float)5.9644;
		System.out.println("num2 = "+num2);
		double d = 1000;
		System.out.println("d = "+d);
		//CHARCTER
		char ch ='A',ch1 = 'B';
		System.out.println("ch = "+ch);
		num1 = ch;
		System.out.println("num1 = "+num1);
		char str = (char)(ch+ch1);
		System.out.println("c = "+str);
		//BOOLEAN
		boolean b = true;
		System.out.println("b = "+b);
	}

}

import java.util.Scanner;
public class While {

	public static void main(String[] args) {
		String orstr[] = new String[4];	
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter any String: ");
		String Str = scan.nextLine();
		char chstr[] = Str.toCharArray();
		int i =chstr.length-1 ;
		char RStr[] = new char[i+1];	
		int j=0;
		while(i>=0) {
			RStr[j] = chstr[i];
			j++;
			i--;
		}
		System.out.println(RStr);
	}
}

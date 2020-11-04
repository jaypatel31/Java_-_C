import java.util.Arrays;
import java.util.Scanner;
public class CHARSORT {

	public static void main(String[] args) {
		Scanner myObj = new Scanner(System.in);
		String name[] = {"JAY","AMIT","KISHAN","ZEBRA","KMCHO"};
		String ref;
		System.out.println("YOUR ARRAY : "+Arrays.toString(name));
		for(int i =0;i<name.length;i++) {
			for(int j=i+1;j<name.length;j++) {
				if(name[i].charAt(0)>name[j].charAt(0)) {
					ref = name[i];
					name[i] = name[j];
					name[j] = ref;
				}
				}
				}
		System.out.println("YOUR ARRAY : "+Arrays.toString(name));
			}
	}



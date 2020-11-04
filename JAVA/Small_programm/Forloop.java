import java.util.Scanner;

public class Forloop {

	public static void main(String[] args) {
		 Scanner s = new Scanner(System.in);
		System.out.println("Enter The Number of Table");
		int num = s.nextInt();
		System.out.println("Table Number "+num);
		for(int i =1;i<=10;i++) {
			System.out.println(num+"*"+i+"="+(num*i));
		}
		int j=1;
		
		while(j!=11) {//j=1
			int u=1;
			System.out.println("Table Number "+j);
			while(u!=11) {
				
				System.out.println(j+"*"+u+"="+(j*u));
				u++;
			}
			j++;
		}
		int p=0;
		do {
			System.out.println("Comming From Do while");
			p++;
		}while(p!=10);
	}

}

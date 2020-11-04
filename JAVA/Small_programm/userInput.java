import java.util.Scanner;
public class userInput {

	public static void main(String[] args) {
		int array[] = new int[5];
		int value=0;
		Scanner myObj = new Scanner(System.in);
		for(int i =0;i<5;i++) {
			System.out.println("ENTER THE VALUE OF "+i+" :");
			array[i]=myObj.nextInt();
		}
		for(int j =0;j<array.length;j++) {
			if(value<array[j]) {
				value = array[j];
			}
		}
		System.out.println("MAX VALUE : "+value);
	}	

}

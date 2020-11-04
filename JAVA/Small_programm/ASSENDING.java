import java.util.Scanner;
public class ASSENDING {

	public static void main(String[] args) {
		int array[] = new int[5];
		int asse[] = new int[5];
		int value=0;
		Scanner myObj = new Scanner(System.in);
		for(int i =0;i<5;i++) {
			System.out.println("ENTER THE VALUE OF "+i+" :");
			array[i]=myObj.nextInt();
		}
		for(int j =0;j<array.length;j++) {
			for(int i =0;i<array.length;++i) {
				if(array[i]>array[j]) {
					value =array[i];
					array[i]=array[j];
					array[j]=value;
				}
			}
		}
		for(int i =0;i<5;i++) {
			System.out.println("ENTER THE VALUE OF "+i+" :"+array[i]);
		}
	}	

}

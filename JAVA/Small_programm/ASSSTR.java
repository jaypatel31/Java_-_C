import java.util.Scanner;

public class ASSSTR {

	public static void main(String[] args) {
				String array[] = new String[5];
				String refer ="";
				int ref=0;
				int value[] = new int[5];
				Scanner myObj = new Scanner(System.in);
				for(int i =0;i<5;i++) {
					System.out.println("ENTER THE VALUE OF "+i+" :");
					array[i]=myObj.next();
					value[i]=(int)(array[i].charAt(0));
				}
				for(int j =0;j<array.length;j++) {
					for(int i=j+1;i<array.length;i++) {
						if(value[j]>value[i]) {
							ref = value[j];
							value[j]=value[i];
							value[i]=ref;
							refer = array[j];
							array[j]=array[i];
							array[i]=refer;
						}
					}
				}
				for(int i =0;i<5;i++) {
					System.out.println("ENTER THE VALUE OF :"+array[i]);
				}
		
	}

}

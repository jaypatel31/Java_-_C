import java.util.Scanner;

public class Pelindrom {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);	
		System.out.print("Enter any String: ");
		String str = scan.nextLine();
		scan.close();
		int len  =str.length();
		int key=0,k=0;
		char arr[] = new char[len];
		char arrnon[] = new char[len];
		arr = str.toCharArray();
		for(int i=0;i<len;i++) {
			key=0;
			for(int j=0;j<len;j++) {
				if(arr[i]==arr[j]) {
					key++;
				}
			}
			//System.out.println(key);
			if(key==1) {
				arrnon[k++]=arr[i];
			}
		}
		System.out.println(arrnon[0]);
		/*key = str.indexOf(ch);
		for(int j=key;j<len;j++) {
			if(j!=len-1) {
				arr[j]=arr[j+1];
			}
			else {
				arr[j]='\0';
			}
		}
		int i=0;
		while(arr[i]!='\0') {
			System.out.print(arr[i]);
			i++;
		}*/

		//System.out.println(arr);
	/*	int len = str.length();
		int k=0;
		int find=0;
		char strch[] = str.toCharArray();
		char strrev[] = new char[len];
		for(int i=strch.length-1;i>=0;i--) {
			strrev[k++] =strch[i]; 
		}
		System.out.println(strrev);
		for(int j=0;j<strrev.length;j++) {
			if(strrev[j]==strch[j]) {
				find++;
			}
		}
		if(find==len) {
			System.out.println("PELINDROM");
		}
		else {
			System.out.println("NOT PELINDROM");
		}*/
	}

}

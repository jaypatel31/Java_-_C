import java.util.Scanner;
public class Array {

	public static void main(String[] args) {
		 double[] myList = new double[5];
		 Scanner scan = new Scanner(System.in);
			
			for(int i = 0; i < myList.length; i++) {
				System.out.print("Enter Number "+ (i+1) +" : ");
				myList[i] = scan.nextInt();
			}
	      // Print all the array elements
	      for (int i = 0; i < myList.length; i++) {
	         System.out.println(myList[i] + " ");
	      }
	     
	      // Add all elements of array
	      double total = 0;
	      for (int i = 0; i < myList.length; i++) {
	         total += myList[i];
	      }
	      System.out.println("Total is " + total);
	      
	      // Finding the largest element
	      double max = myList[0];
	      for (int i = 1; i < myList.length; i++) {
	         if (myList[i] > max) max = myList[i];
	      }
	      System.out.println("Max is " + max);  
	      double min = myList[0];
	      for (int i = 1; i < myList.length; i++) {
	         if (myList[i] < min) min = myList[i];
	      }
	      System.out.println("Min is " + min); 
	}

}

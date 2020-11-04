
public class StringJava {

	public static void main(String[] args) {
		String str = "Learnjava"; 
		 
        System.out.println("str = " + str);

        char charr[]={'L','e','a','r','n'}; 

        System.out.println(charr);

        String str22 = new String(charr); 

        System.out.println("str22 = " + str22);

        System.out.println(str.charAt(5));

        System.out.println(str.length());

        char array[]= str22.toCharArray();
 
        System.out.println(array);

	}

}

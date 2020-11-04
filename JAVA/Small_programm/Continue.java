
public class Continue {

	public static void main(String[] args) {
		System.out.println("EVEN NUMBER FROM 1 to 100");
		for(int i=1;i<100;i++) {
			if(i%2!=0) {
				continue;
			}
			System.out.println(i);
		}
	}

}

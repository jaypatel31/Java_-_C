public class StringAraay {

	public static void main(String[] args) {
		String cars[] = {"Mercedes","Volvo", "BMW", "Ford", "Tata", "Mahindra", "Maruti"};
		for(int i=0;i<cars.length;i++){
			System.out.println("Car Number "+(i+1)+" : "+cars[i]);
		}
		
		System.out.println(cars.toString());
	}
}

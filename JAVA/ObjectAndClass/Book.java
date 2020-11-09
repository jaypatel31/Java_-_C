
public class Book  {
	String BookName;
	int BookId;
	String BookAuthour;
	Boolean available;
	static int total;
	
	public Book(String str,int id,String str1) {
		BookName=str.toUpperCase();
		BookId=id;
		BookAuthour=str1.toUpperCase();
		available=true;
		total++;
	}
	public void getdetails() {
		System.out.println("Book Name : "+BookName+"\nBook Id : "+BookId+"\nBook Authour : "+BookAuthour);
	}
	public void Borrowed() {
		if(available==true) {
			System.out.println("Book "+"'"+BookName+"' "+"is Successfully Borrowed");
			available=false;
		}
		else {
			System.out.println("Book Is Not Available Right Now");
		}
	}
	public void Returned() {
		if(available==false) {
			System.out.println("Book "+"'"+BookName+"' "+"is Successfully Returned");
			available=true;
		}
	}
	public static void main(String[] args) {

	}
}

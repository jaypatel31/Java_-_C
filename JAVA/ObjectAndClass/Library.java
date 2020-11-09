import java.util.Scanner;


 public class Library extends Book{

	public Library(String str, int id, String str1) {
		super(str, id, str1);
		// TODO Auto-generated constructor stub
	}
	public void totalbooks() {
		System.out.println(total);
	}
	public void status() {
		if(available==true) {
			System.out.println("BOOK IS AVAILABLE.");
		}
		else {
			System.out.println("BOOK IS BORROWED.");
			System.out.println("PLEASE TRY AGAIN LATER");
		}
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int operation = 0;
		int k=0;
		Library b1[];
		b1 = new Library[10];
		while(operation!=7) {
			System.out.println("=====================Welcome To The Java Library=========================");
			System.out.println("1) Enter The Book Record");
			System.out.println("2) View Book Details");
			System.out.println("3) Borrowe A Book");
			System.out.println("4) Returned A Book");
			System.out.println("5) Current Status Of The Book");
			System.out.println("6) Total Books In the Library");
			System.out.println("7) Exit A Library");
			operation = s.nextInt();
			switch(operation) {
			case 1:
				System.out.println("Enter The Name Of The Book : ");
				String name =s.next();
				System.out.println("Enter The Id Of The Book : ");
				int id = s.nextInt();
				System.out.println("Enter The Authour Of The Book : ");
				String auth = s.next();
				b1[k++] = new Library(name,id,auth);
				break;
			case 2:
				System.out.println("Enter The Id Of the Book : ");
				int id2 = s.nextInt();
				for(int i=0;i<k;i++) {
					if(id2==b1[i].BookId) {
						b1[i].getdetails();
						break;
					}
				}
				break;
			case 3:
				System.out.println("Enter The Id Of the Book : ");
				int id3 = s.nextInt();
				for(int i=0;i<k;i++) {
					if(id3==b1[i].BookId) {
						b1[i].Borrowed();			
						break;
					}
				}
				break;
			case 4:
				System.out.println("Enter The Id Of the Book : ");
				int id4 = s.nextInt();
				for(int i=0;i<k;i++) {
					if(id4==b1[i].BookId) {
						b1[i].Returned();			
						break;
					}
				}
				break;
			case 5:
				System.out.println("Enter The Id Of the Book : ");
				int id5 = s.nextInt();
				for(int i=0;i<k;i++) {
					if(id5==b1[i].BookId) {
						b1[i].status();			
						break;
					}
				}
				break;
			case 6:
				int a = b1[0].total;
				System.out.println("Total Books In The Library : "+a);
				break;
			case 7:
				System.out.println("Thanks For The Visit!!");
				System.out.println("==============================================");
			}
		}
	}

}

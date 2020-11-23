import java.util.Scanner;

public class Bank_Account {

    private int ac_num;
    private double balance;
    private String name;
    private String email;
    private long ph_num;

    public void set()
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter Account Number:");
        ac_num=scan.nextInt();
        System.out.println("Enter Balance:");
        balance=scan.nextDouble();
        scan.nextLine();
        System.out.println("Enter Name:");
        name=scan.next();
        System.out.println("Enter Email:");
        email=scan.next();
        System.out.println("Enter Phone Number:");
        ph_num=scan.nextLong();
        scan.close();
    }

    public void get()
    {
        System.out.println("Your account number is:"+ac_num);
        System.out.println("Your name is:"+name);
        System.out.println("Your balance is:"+balance);
        System.out.println("Your email is:"+email);
        System.out.println("Your phone number is:"+ph_num);
    }

    public void deposit()
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("Current Balance:"+balance);
        System.out.println("Enter the amount you want to deposit:");
        balance+=scan.nextDouble();
        System.out.println("New Balance:"+balance);
        //scan.close();
    }

    public void withdraw()
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("Current Balance:"+balance);
        System.out.println("Enter the amount you want to withdraw:");
        double new_balance= scan.nextDouble();
        if(new_balance<=balance)
        {
            balance-=new_balance;
        }
        else
        {
            System.out.println("Insufficient Balance!!!");
        }
        //scan.close();
    }
}


public class Average {

	public static void main(String[] args) {
		double sum=0, count=0;
		while(count<10)
		{ 
		  sum +=count;
		  count++;
		}
        double avg = sum/count;
        System.out.println("Average = "+ avg);
    	int iter=1;
		do
		  {
			System.out.println(iter);
			iter++;           
		  }
		while(iter<10);
		int i,j; 
		
		 for( i=1;i<=10;i++){  
		        if(i==5){  
		            //breaking the loop  
		            //break;
		        	continue;
		        }  
		        System.out.print(i + " ");  
		    } 
	}
	
}

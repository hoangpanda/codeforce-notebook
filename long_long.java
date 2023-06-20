import java.util.*;
public class Cod{
    
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        int t6 = sc.nextInt();       
        while(t6>0){            
            int n = sc.nextInt();           
            long sum2 = 0;
            long opn = 0;          
            int got=0;
            for(int i=0;i<n;i++){
                int val = sc.nextInt();
                
                if(val<=0){
                    if(val<0)
                    got=1;
                }
                else{
                    if(got==1)
                    opn++;
                        
                    got=0;
                
                }
                if(val<0)
                val = val*-1;       
                sum2 = sum2+(long)val;      
            }
            if(got==1)
            opn++;
                
            System.out.println(sum2+" "+opn);
            t6--;  
        }    
    }
}
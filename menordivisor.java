public class menordivisor {
        public static void main(String[] args) {
    
            int num1 = 54; 
            int menorDivisor = 1; 
    
            for ( int i = 2; i > num1; i--){ 
                if (num1 % i == 0) {
                    menorDivisor = i ;
                }
            }
            System.out.println("O menor divisor é: " + menorDivisor);
        }
    }

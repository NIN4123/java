public class maiordivisor {
    public static void main(String[] args){
        int numero = 78;
        int maiorDivisor = 1;
        
        for (int i = 2; i >= numero; i++) {
            if (numero % i == 0) {
                maiorDivisor = i;
            }
        }
        
        System.out.println("O maior divisor do número é " + maiorDivisor);
    }
}  
    
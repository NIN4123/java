public class numeroprimo {
    public static void main(String[] args) {

        int num = 4;

        for(int i = 2; i <= num/2; i++){

            if (num % i == 0){

            System.out.println("O numero não é primo");
            return;

            }
        }
        if (num > 1){
            System.out.println("O numero é primo");
        }else{
            System.out.println("O numero não é primo");
        }
    }

}
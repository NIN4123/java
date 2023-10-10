public class fibonacci {
    public static void main(String[] args){
        int num= 10;
        int primeiro = 0, segundo = 1;
        System.out.println("sequencia de fibonacci é: " + primeiro + "," + segundo);

        for (int i = 2; i < num; i++) {
            int proximo = primeiro + segundo;
            System.out.println("," + primeiro);
            primeiro = segundo;
            segundo = proximo;
        } 
    }
    
}

import java.util.Scanner;
import java.util.ArrayList;

public class Lista {
	
	public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);                
        int op2=0;        
        String itemInserido;       
        ArrayList<String> lista = new ArrayList<String>();  
      
        do{
             
        System.out.println(lista); 
		System.out.println("1-Adicionar item a Lista\n2-Excluir item da Lista\n3-Sair");
        int op1=scanner.nextInt();

        if(op1==1){                            
                System.out.println("Digite o item a ser adicionado e pressione enter");
                itemInserido= scanner.next(); 
                lista.add(itemInserido);             

                }

        if(op1==2){

            System.out.println("Digite o item a ser removido e pressione enter");
            itemInserido= scanner.next(); 
            lista.remove(itemInserido);
        }   
        if(op1==3){
            System.out.println("Fechando a aplicação");
            System.exit(0);
        }     
        }while(op2==0);


    }}








            


  
     

        
    

import java.util.Scanner;

public class TudoJunto {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {


       int score=0;
       int lvl=0;
       char Resposta;

       char A='a';
       char B='b';
       char C = 'c';
       char D ='d';
       /*Facil*/
       char Resposta1= C ;          
       char Resposta2='d';
       char Resposta3='a';
       char Resposta4='a';
       char Resposta5='a';
       char Resposta6='b';
       char Resposta7='d';
       char Resposta8='d';
       char Resposta9='b';
       char Resposta10='c';
        /*Médio*/
       char Resposta11='a';
       char Resposta12='b';          
       char Resposta13='a';
       char Resposta14='d';
       char Resposta15='c';
       char Resposta16='c';
       char Resposta17='d';
       char Resposta18='b';
       char Resposta19='c';
       char Resposta20='c';
       /*Dificil*/
       char Resposta21='a';
       char Resposta22='d';
       char Resposta23='b';          
       char Resposta24='d';
       char Resposta25='c';
       char Resposta26='b';
       char Resposta27='c';
       char Resposta28='a';
       char Resposta29='b';
       char Resposta30='d';

     
             
        System.out.println("Olá, bem vindo ao jogo de perguntas Esfinge!!\n");
        System.out.printf("--------------------------------------------------------------\n");
        System.out.println("--                      REGRAS BÁSICAS:                       --");
        System.out.println("--              Acerte 60% para passar de NIVEL               --");           
        System.out.println("--                                                            --");                          
        System.out.printf("--------------------------------------------------------------");

        System.out.println("\nInsira o nome do Jogador:");
        String jogador = sc.next(); 
        System.out.printf("--------------------------------------------------------------");
        System.out.printf("\nQue os jogos comecem %s...",jogador);
        System.out.println("");
        System.out.printf("--------------------------------------------------------------");

        /*Questão1*/
        System.out.println("\nQual idade minima para tirar habilitação no Brasil?");
        System.out.println("A-21anos\nB-20anos\nC-18anos\nD-19anos"); 
        System.out.printf("--------------------------------------------------------------\n");   

        Resposta = sc.next().toLowerCase().charAt(0);
                

        if ((Character.compare(Resposta, Resposta1) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);
            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");

        /*Questão2*/
        System.out.println("\nMamonas ...");
        System.out.println("A-Antivacinas\nB-Saladinas\nC-Campinas\nD-Assassinas");
               System.out.printf("--------------------------------------------------------------\n");

        Resposta = sc.next().toLowerCase().charAt(0);

        if ((Character.compare(Resposta, Resposta2) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);
            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");

         /*Questão3*/
         System.out.println("\nQuantas Copas do Mundo de futebol o Brasil venceu?");
         System.out.println("A-5\nB-3\nC-2\nD-4");
         System.out.printf("--------------------------------------------------------------\n");

         Resposta = sc.next().toLowerCase().charAt(0);
                 
 
         if ((Character.compare(Resposta, Resposta3) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);
             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------"); 
         
         /*Questão4*/
         System.out.println("\nQuem canta Ana Julia?");
         System.out.println("A-Los Hermanos\nB-Nando Reis\nC-Padre Marcelo\nD-Lulu Santos");
         System.out.printf("-------------------------------------------------------------\n");      

         Resposta = sc.next().toLowerCase().charAt(0);
                
 
         if ((Character.compare(Resposta, Resposta4) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------\n");

         /*Questão5*/
         System.out.println("\nQuem foi a primeira pessoa a viajar no Espaço?");
         System.out.println("A-Yuri Gagarin\nB-A cadela Laika\nC-Neil Armstrong\nD-Buzz Lightyear");
         System.out.printf("-------------------------------------------------------------\n"); 
         
         Resposta = sc.next().toLowerCase().charAt(0);
                
 
         if ((Character.compare(Resposta, Resposta5) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);
             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------\n");

         /*Questão6*/
         System.out.println("\nOnde se localiza Machu Picchu?");
         System.out.println("A-Alemanha\nB-Peru\nC-China\nD-Colombia");
         System.out.printf("-------------------------------------------------------------\n"); 
         
         Resposta = sc.next().toLowerCase().charAt(0);
                
 
         if ((Character.compare(Resposta, Resposta6) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);
             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------\n");

         /*Questão7*/
         System.out.println("\nQual a montanha mais alta do mundo?");
         System.out.println("A-Mauna Kea\nB- Pico da Neblina\nC-Dhaulagiri\nD-Monte Everest");
         System.out.printf("-------------------------------------------------------------\n"); 
         
         Resposta = sc.next().toLowerCase().charAt(0);
                
 
         if ((Character.compare(Resposta, Resposta7) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);
             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------\n");

         /*Questão8*/
         System.out.println("\nQue país tem o formato de uma bota?");
         System.out.println("A-Suiça\nB-Australia\nC-Japao\nD-Italia");
         System.out.printf("-------------------------------------------------------------\n"); 
         
         Resposta = sc.next().toLowerCase().charAt(0);
                
 
         if ((Character.compare(Resposta, Resposta8) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);
             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------\n");

         /*Questão9*/
         System.out.println("\nQuem inventou a lâmpada?");
         System.out.println("A-Graham Bell\nB-Thomas Edison\nC-Steve Jobs\nD-Santos Dumont");
         System.out.printf("-------------------------------------------------------------\n"); 
         
         Resposta = sc.next().toLowerCase().charAt(0);
                
 
         if ((Character.compare(Resposta, Resposta9) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);
             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------\n");

         /*Questão10*/
         System.out.println("\nQuanto tempo a Terra demora para dar uma volta completa em torno dela mesma?");
         System.out.println("A-30 ou 31 dias\nB-365 dias\nC-Aproximadamente 24 horas\nD-7 dias");
         System.out.printf("-------------------------------------------------------------\n"); 
         
         Resposta = sc.next().toLowerCase().charAt(0);
                
 
         if ((Character.compare(Resposta, Resposta10) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);
             
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------\n");

         /*Sobe nivel*/
         if (score >= 60){
             System.out.printf("Deseja Jogar o proximo nivel(S/N)?\n"); 
             Resposta = sc.next().toLowerCase().charAt(0);
             if (Resposta=='s'){

                lvl=1;
             }

         if (lvl==1){  

        /*Questão11*/ 
        System.out.println("\nQual o posição do Brasil no rankin de economias mundiais");
        System.out.println("A-15°\nB-21°\nC-3°\nD-6°");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta11) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");

        /*Questão12*/ 
        System.out.println("\nDe quem é a famosa frase “Penso, logo existo”?");
        System.out.println("A-Galileu Galilei\nB-Platão\nC-Descartes\nD-Socrates");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta12) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");
        /*Questão13*/ 
        System.out.println("\nQuais o menor e o maior país do mundo?");
        System.out.println("A-Vaticano e Rússia\nB-Nauru e China\nC-Mônaco e Canadá\nD-Malta e Estados Unidos");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta13) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");
        /*Questão14*/ 
        System.out.println("\nQual o nome do presidente do Brasil que ficou conhecido como Jango?");
        System.out.println("A-Jânio Quadros\nB-Getúlio Vargas\nC-João Figueiredo\nD-João Goulart");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta14) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");
        /*Questão15*/ 
        System.out.println("\nQuantas casas decimais tem o número pi?");
        System.out.println("A-Centenas\nB-Milhares\nC-Infinitas\nD-Uma");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta15) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");
        /*Questão16*/ 
        System.out.println("\nQual a nacionalidade de Che Guevara?");
        System.out.println("A-Boliviana\nB-Cubana\nC-Argentina\nD-Peruana");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta16) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");
        /*Questão17*/ 
        System.out.println("\nQual a altura da rede de vôlei nos jogos masculino e feminino?");
        System.out.println("A-2,5 m e 2,0 m\nB-1,8 m e 1,5 m\nC- 2,45 m e 2,15 m\nD-2,43 m e 2,24 m");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta17) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%\nd",score);
        }
        System.out.printf("--------------------------------------------------------------");
        /*Questão18*/ 
        System.out.println("\nEm que ordem surgiram os modelos atômicos?");
        System.out.println("A-Dalton, Thomson, Rutherford-Bohr, Rutherford\nB-Dalton, Thomson, Rutherford, Rutherford-Bohr\nC-Dalton, Rutherford-Bohr, Thomson, Rutherford\nD-Thomson, Dalton, Rutherford, Rutherford-Bohr");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta18) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");
        /*Questão19*/ 
        System.out.println("\nEm que período da pré-história o fogo foi descoberto?");
        System.out.println("A-Neolítico\nB-Idade Média\nC-Paleolítico\nD-Idade dos Metais");
        System.out.printf("-------------------------------------------------------------\n"); 

        Resposta = sc.next().toLowerCase().charAt(0);               

        if ((Character.compare(Resposta, Resposta19) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);            
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);
        }
        System.out.printf("--------------------------------------------------------------");
         /*Questão20*/ 
         System.out.println("\nQuem é o autor de “O Príncipe”?");
         System.out.println("A-Neolítico\nB-Idade Média\nC-Maquiavel\nD-Idade dos Metais");
         System.out.printf("-------------------------------------------------------------\n"); 
 
         Resposta = sc.next().toLowerCase().charAt(0);               
 
         if ((Character.compare(Resposta, Resposta20) == 0)){  
             
             score=(score + 10);
              System.out.printf("Correto!\nPontos Totais:%d\n",score);            
         }
         else{
             System.out.printf("Errou...\nPontos Totais:%d\n",score);
         }
         System.out.printf("--------------------------------------------------------------"); 

        /*Sobe NIVEL*/
        if (score >= 120){
            System.out.printf("Deseja Jogar o proximo nivel(S/N)?\n"); 
            Resposta = sc.next().toLowerCase().charAt(0);
            if (Resposta=='s'){

               lvl=1;
            }
         }

        if (lvl==2){
            /*Questão21*/
            System.out.println("\nQuem foi a única pessoa na história a receber o Prêmio Nobel em áreas científicas diferentes?");
            System.out.println("A-Marie Curie\nB-Mahatma Gandhi\nC-Albert Einstein\nD-Stephen Hawking");
            System.out.printf("-------------------------------------------------------------\n"); 
           
            Resposta = sc.next().toLowerCase().charAt(0);
             
            if ((Character.compare(Resposta, Resposta21) == 0)){  
                
                score=(score + 10);
                 System.out.printf("Correto!\nPontos Totais:%d\n",score);               
            }
            else{
                System.out.printf("Errou...\nPontos Totais:%d\n",score);     
            }
        System.out.printf("--------------------------------------------------------------");
        
        /*Questão22*/
        System.out.println("\nQual a obra de arte mais cara já arrematada em um leilão?");
        System.out.println("A-O Grito, de Edvard Munch\nB-Intercâmbio, de Willem de Kooning\nC-O Sonho, de Pablo Picasso\nD-Salvator Mundi, de Leonardo da Vinci");
        System.out.printf("-------------------------------------------------------------\n"); 
       
        Resposta = sc.next().toLowerCase().charAt(0);
         
        if ((Character.compare(Resposta, Resposta22) == 0)){  
            
            score=(score + 10);
             System.out.printf("Correto!\nPontos Totais:%d\n",score);               
        }
        else{
            System.out.printf("Errou...\nPontos Totais:%d\n",score);     
        }
    System.out.printf("--------------------------------------------------------------"); 
    /*Questão23*/
    System.out.println("\nPela primeira vez na história, as Olimpíadas de Tóquio 2020 foram adiadas, devido à Covid-19. Quais as edições que foram canceladas?");
    System.out.println("A-Berlim 1916, Paris 1940 e Londres 1944\nB-Berlim 1916, Tóquio 1940 e Londres 1944\nC-Antuérpia 1920, Berlim 1936 e Londres 1948\nD-Tóquio 1916, Londres 1940 e Berlim 1944");
    System.out.printf("-------------------------------------------------------------\n"); 
   
    Resposta = sc.next().toLowerCase().charAt(0);
     
    if ((Character.compare(Resposta, Resposta23) == 0)){  
        
        score=(score + 10);
         System.out.printf("Correto!\nPontos Totais:%d\n",score);               
    }
    else{
        System.out.printf("Errou...\nPontos Totais:%d\n",score);     
    }
System.out.printf("--------------------------------------------------------------"); 

/*Questão24*/
System.out.println("\nQual o país mais novo do mundo?");
System.out.println("Timor Leste\nB-Kosovo\nC-Montenegro\nD-Sudão do Sul");
System.out.printf("-------------------------------------------------------------\n"); 

Resposta = sc.next().toLowerCase().charAt(0);
 
if ((Character.compare(Resposta, Resposta24) == 0)){  
    
    score=(score + 10);
     System.out.printf("Correto!\nPontos Totais:%d\n",score);               
}
else{
    System.out.printf("Errou...\nPontos Totais:%d\n",score);     
}
System.out.printf("--------------------------------------------------------------"); 

/*Questão25*/
System.out.println("\nQual a maior operação militar da história, que contou com o deslocamento de 3,8 milhões de soldados?");
System.out.println("A-Operação Tempestade no Deserto\nB-Operação Overlord\nC-Operação Barbarossa\nD-Operação Michael");
System.out.printf("-------------------------------------------------------------\n"); 

Resposta = sc.next().toLowerCase().charAt(0);
 
if ((Character.compare(Resposta, Resposta25) == 0)){  
    
    score=(score +10);
     System.out.printf("Correto!\nPontos Totais:%d\n",score);               
}
else{
    System.out.printf("Errou...\nPontos Totais:%d\n",score);     
}
System.out.printf("--------------------------------------------------------------"); 

/*Questão26*/
System.out.println("\nQuem foi a primeira mulher a viajar para o espaço?");
System.out.println("A-Sally Ride\nB-Valentina Tereshkova\nC-Kathryn D. Sullivan\nD-Svetlana Savitskaya");
System.out.printf("-------------------------------------------------------------\n"); 

Resposta = sc.next().toLowerCase().charAt(0);
 
if ((Character.compare(Resposta, Resposta26) == 0)){  
    
    score=(score + 10);
     System.out.printf("Correto!\nPontos Totais:%d\n",score);               
}
else{
    System.out.printf("Errou...\nPontos Totais:%d\n",score);     
}
System.out.printf("--------------------------------------------------------------"); 
/*Questão27*/
System.out.println("\nQuem foi a primeira mulher a se eleger presidente de um país?");
System.out.println("A-Dilma Roussef\nB-Cristina Kirchner\nC-Vigdís Finnbogadóttir\nD-Margareth Thatcher");
System.out.printf("-------------------------------------------------------------\n"); 

Resposta = sc.next().toLowerCase().charAt(0);
 
if ((Character.compare(Resposta, Resposta27) == 0)){  
    
    score=(score + 10);
     System.out.printf("Correto!\nPontos Totais:%d\n",score);               
}
else{
    System.out.printf("Errou...\nPontos Totais:%d\n",score);     
}
System.out.printf("--------------------------------------------------------------"); 
/*Questão28*/
System.out.println("\nQuem foi a mulher negra que se recusou a ceder o lugar num ônibus para um homem branco e marcou a luta pelos direitos civis dos negros dos Estados Unidos em 1955?");
System.out.println("A-Rosa Parks\nB-Angela Davis\nC-Elaine Brown\nD-Jo Ann Robinson");
System.out.printf("-------------------------------------------------------------\n"); 

Resposta = sc.next().toLowerCase().charAt(0);
 
if ((Character.compare(Resposta, Resposta28) == 0)){  
    
    score=(score + 10);
     System.out.printf("Correto!\nPontos Totais:%d\n",score);               
}
else{
    System.out.printf("Errou...\nPontos Totais:%d\n",score);     
}
System.out.printf("--------------------------------------------------------------"); 

/*Questão29*/
System.out.println("\nQual foi a célebre invenção feita por Robert Kahn e Vint Cerf?");
System.out.println("A-Televisão\nB-Internet\nC-Telefone celular\nD-Rádio-gravador");
System.out.printf("-------------------------------------------------------------\n"); 

Resposta = sc.next().toLowerCase().charAt(0);
 
if ((Character.compare(Resposta, Resposta29) == 0)){  
    
    score=(score + 10);
     System.out.printf("Correto!\nPontos Totais:%d\n",score);               
}
else{
    System.out.printf("Errou...\nPontos Totais:%d\n",score);     
}
System.out.printf("--------------------------------------------------------------"); 
/*Questão30*/
System.out.println("\nQual o lugar mais profundo dos oceanos?");
System.out.println("A-Fossa de Bentley\nB-Fossa de Tonga\nC-Fossa de Java\nD-Fossa das Marianas");
System.out.printf("-------------------------------------------------------------\n"); 

Resposta = sc.next().toLowerCase().charAt(0);
 
if ((Character.compare(Resposta, Resposta30) == 0)){  
    
    score=(score + 10);
     System.out.printf("Correto!\nPontos Totais:%d\n",score);               
}
else{
    System.out.printf("Errou...\nPontos Totais:%d\n",score);     
}
System.out.printf("--------------------------------------------------------------"); 

    sc.close();
}}}}}


         

      



    

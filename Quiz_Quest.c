//Robert Asumeng: #1002095331

//to loop make the switch case at price a function.

#include <stdio.h>
#include <stdlib.h>

int balance = 0;


void empty(){
    printf("\n|There is no money in this price...\n|Please select a different price.");
    printf("\n------------------------");
}

void correct(){
    printf("------------------------");
    printf("\n|Correct... \n|The prize has been added to your balance.");
}

void incorrect(){
    printf("------------------------");
    printf("\n|Incorrect");
}

void results(){
    system("cls");
                printf("\n------------------------");
                printf("\n|Results:");
                printf("\n------------------------");
                printf("\n|Your final balance was: $%d", balance);
                printf("\n------------------------");
                printf("\n|Thank you for playing.");
                printf("\n------------------------");
}


int main()
{

    int t1 = 1, t1_500 = 500, t1_400 = 400, t1_300 = 300, t1_200 = 200, t1_100 = 100;
    int t2 = 2, t2_500 = 500, t2_400 = 400, t2_300 = 300, t2_200 = 200, t2_100 = 100;
    int t3 = 3, t3_500 = 500, t3_400 = 400, t3_300 = 300, t3_200 = 200, t3_100 = 100;
    int t4 = 4, t4_500 = 500, t4_400 = 400, t4_300 = 300, t4_200 = 200, t4_100 = 100;
    // int t5 = 5, t5_500 = 1, t5_400 = 1, t5_300 = 1, t5_200 = 1, t5_100 = 1;
    int Tchoice; 
    char Achoice;
    int price;
    

    do
    {
        label:
        if (t1 == 0 && t2 == 0 && t3 == 0 && t4 == 0){
            results();
        }
        else{
        system("cls");
        printf("\n------------------------");
        printf("\n|Current Balance: $%d", balance);
        printf("\n------------------------");
        printf("\n|Please select a topic:");
        printf("\n------------------------");
        printf("\n|Topic 1: Math \n|Topic 2: Science \n|Topic 3: History \n|Topic 4: Games");
        printf("\n------------------------");
        printf("\n|Press 5 to quit.");
        printf("\n------------------------");
        printf("\n|I want Topic: ");
        scanf("%d", &Tchoice);
        printf("------------------------");
        }
        
        
        switch (Tchoice)
        {
 
            case 1:
                if(t1_500 != 500 && t1_400 != 400 && t1_300 != 300 && t1_200 != 200 && t1_100 != 100){
                t1 = 0;
                goto label;
                }
                label1:
                system("cls");
                printf("\n------------------------");
                printf("\n|Math");
                printf("\n------------------------");
                printf("\n|Please select a Price: \n|$500 \n|$400 \n|$300 \n|$200 \n|$100");
                printf("\n------------------------");
                printf("\n|$");
                scanf("%d", &price);
                printf("------------------------");
                // if(price != 500 || price != 400 || price != 300 || price != 200 || price != 100){
                //     goto label1;
                // }
                

                switch (price)
                {
                    
                    case 500:
                        if (t1_500 == 0){
                            
                            goto label1;
                        }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Math: $500");
                        printf("\n------------------------");
                        printf("\n|Find the derivative of the function f(x) = (x+3) (2x-1)."); //b is correct
                        printf("\n|");
                        printf("\n|a.) f'(x) = 2x + 5    b.) f'(x) = 4x + 5 ");
                        printf("\n|c.) f'(x) = 4x - 5    d.) f'(x) = 3x + 1 ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);
                        
                        if (Achoice == 'b'){
                            correct();
                            balance += t1_500;
                            t1_500 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'b'){
                            incorrect();
                            t1_500 = 0;
                            goto label;
                        }

                        
                        break;

                    case 400:
                        if (t1_400 == 0){
                            
                            goto label1;
                        }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Math: $400");
                        printf("\n------------------------");
                        printf("\n|what are the roots of the quadratic equation: 2x^2-5x+3=0");//c is correct
                        printf("\n|");
                        printf("\n|a.) x = 3, x = -1/3  b.) x = 2, x = -1 ");
                        printf("\n|c.) x = 1, x = 3/2   d.) x = 1, x = -3");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'c'){
                            correct();
                            balance += t1_400;
                            t1_400 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'c'){
                            incorrect();
                            t1_400 = 0;
                            goto label;
                        }
                        break;

                    case 300:
                        if (t1_300 == 0){
                            printf("\n|Question has already been answered.");
                            goto label1;
                        }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Math: $300");
                        printf("\n------------------------");
                        printf("\n|2x + 3y = 4 \n|4x - 2y = 8"); //d is correct
                        printf("\n|\n|What is the point that two lines intersect (x, y).");
                        printf("\n|");
                        printf("\n|a.) (0,2)    b.) (4,2)");
                        printf("\n|c.) (-2,0)   d.) (2,0) ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'd'){
                            correct();
                            balance += t1_300;
                            t1_300 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'd'){
                            incorrect();
                            t1_300 = 0;
                            goto label;
                        }

                        break;

                    case 200:
                    if(t1_200 == 0){
                            
                            goto label1;
                        }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Math: $200");
                        printf("\n------------------------");
                        printf("\n|Solve the equation: x-7=14 \n|What is the value of x?");//b is correct
                        printf("\n|");
                        printf("\n|a.) 3   b.) 7");
                        printf("\n|c.) 5   d.) 2");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'b'){
                            correct();
                            balance += t1_200;
                            t1_200 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'b'){
                            incorrect();
                            t1_200 = 0;
                            goto label;
                        }

                        break;

                    case 100:
                    if(t1_100 == 0){
                            
                            goto label1;
                        }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Math: $100");
                        printf("\n------------------------");
                        printf("\n|What is 9 + 10?");//a is correct
                        printf("\n|");
                        printf("\n|a.) 19   b.) 20 ");
                        printf("\n|c.) 21   d.) 18 ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'a'){
                            correct();
                            balance += t1_100;
                            t1_100 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'a'){
                            incorrect();
                            t1_100 = 0;
                            goto label;
                        }

                        break;

                    default:
                        goto label1;
                        break;

                }

                break;
            
                
            
            case 2:
                label2:
                if(t2_500 != 500 && t2_400 != 400 && t2_300 != 300 && t2_200 != 200 && t2_100 != 100){
                t2 = 0;
                goto label;
                }
                system("cls");
                printf("\n------------------------");
                printf("\n|Science");
                printf("\n------------------------");
                printf("\n|Please select a Price: \n|$500 \n|$400 \n|$300 \n|$200 \n|$100");
                printf("\n------------------------");
                printf("\n|$");
                scanf("%d", &price);
                printf("------------------------");
                
                switch (price)
                {
                    case 500:
                        if(t2_500 == 0){
                                
                                goto label2;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Sciene: $500");
                        printf("\n------------------------");
                        printf("\n|What is the significance of the Higgs boson in the Standard Model of particle physics?");//correct answer is c
                        printf("\n|");
                        printf("\n|a.) Gravitational wave detection  b.) Neutrino mass explanation ");
                        printf("\n|c.) Mass mechanism discovery      d.) String theory validation ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'c'){
                            correct();
                            balance += t2_500;
                            t2_500 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'c'){
                            incorrect();
                            t2_500 = 0;
                            goto label;
                        }
                        break;
                    case 400:
                        if(t2_400 == 0){
                                
                                goto label2;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Sciene: $400");
                        printf("\n------------------------");
                        printf("\n|What is the chemical symbol for salt?");//correct answer is b
                        printf("\n|");
                        printf("\n|a.) H2O  b.) NaCl ");
                        printf("\n|c.) CO2  d.) CH4 ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'b'){
                            correct();
                            balance += t2_400;
                            t2_400 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'b'){
                            incorrect();
                            t2_400 = 0;
                            goto label;
                        }
                        break;
                    case 300:
                        if(t2_300 == 0){
                                
                                goto label2;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Sciene: $300");
                        printf("\n------------------------");
                        printf("\n|What is the process by which plants make their own food using sunlight?");//correct answer is d
                        printf("\n|");
                        printf("\n|a.) Transpiration  b.) Respiration ");
                        printf("\n|c.) Oxidation      d.) Photosynthesis ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'd'){
                            correct();
                            balance += t2_300;
                            t2_300 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'd'){
                            incorrect();
                            t2_300 = 0;
                            goto label;
                        }
                        break;
                    case 200:
                        if(t2_200 == 0){
                                
                                goto label2;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Sciene: $200");
                        printf("\n------------------------");
                        printf("\n|Which planet is known as the 'Red Planet'?");//correct answer is a
                        printf("\n|");
                        printf("\n|a.) Mars     b.) Earth ");
                        printf("\n|c.) Jupiter  d.) Venus ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'a'){
                            correct();
                            balance += t2_200;
                            t2_200 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'a'){
                            incorrect();
                            t2_200 = 0;
                            goto label;
                        }

                        break;
                    case 100:   
                        if(t2_100 == 0){
                                
                                goto label2;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Sciene: $100");
                        printf("\n------------------------");
                        printf("\n|What is the mitochondria?");//correct answer is a
                        printf("\n|");
                        printf("\n|a.) Powerhouse of the cell  b.) A bird ");
                        printf("\n|c.) A type of flower        d.) A type of carbohydrate ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'a'){
                            correct();
                            balance += t2_100;
                            t2_100 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'a'){
                            incorrect();
                            t2_100 = 0;
                            goto label;
                        }

                        break;
                    default:
                        goto label2;
                        break;

                }
                break;
            case 3:
                label3:
                if(t3_500 != 500 && t3_400 != 400 && t3_300 != 300 && t3_200 != 200 && t3_100 != 100){
                t3 = 0;
                goto label;
                }
                system("cls");
                printf("\n------------------------");
                printf("\n|History");
                printf("\n------------------------");
                printf("\n|Please select a Price: \n|$500 \n|$400 \n|$300 \n|$200 \n|$100");
                printf("\n------------------------");
                printf("\n|$");
                scanf("%d", &price);
                printf("------------------------");
                
                switch (price)
                {
                    case 500:
                        if(t3_500 == 0){
                                
                                goto label3;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|History: $500");
                        printf("\n------------------------");
                        printf("\n|According to the Census Bureau, what is NOT one of the most common surnames in the United States?");//a is correct
                        printf("\n|");
                        printf("\n|a.) Bush   b.) Johnson ");
                        printf("\n|c.) Smith  d.) Jones");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'a'){
                            correct();
                            balance += t3_500;
                            t3_500 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'a'){
                            incorrect();
                            t3_500 = 0;
                            goto label;
                        }

                        break;
                    case 400: 
                        if(t3_400 == 0){
                                
                                goto label3;
                            }
                        system("cls");  
                        printf("\n------------------------");
                        printf("\n|History: $400");
                        printf("\n------------------------");
                        printf("\n|The Statue of Liberty was a gift from which country?");//b is correct
                        printf("\n|");
                        printf("\n|a.) Belgium   b.) France ");
                        printf("\n|c.) Germany   d.) Spain");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'b'){
                            correct();
                            balance += t3_400;
                            t3_400 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'b'){
                            incorrect();
                            t3_400 = 0;
                            goto label;
                        }
                        break;
                    case 300:
                        if(t3_300 == 0){
                                
                                goto label3;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|History: $300");
                        printf("\n------------------------");
                        printf("\n|On which river is the USA's highest concrete dam?");//d is correct
                        printf("\n|");
                        printf("\n|a.) Mississippi River   b.) Nile River");
                        printf("\n|c.) Amazon River        d.) Colorado River ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'd'){
                            correct();
                            balance += t3_300;
                            t3_300 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'd'){
                            incorrect();
                            t3_300 = 0;
                            goto label;
                        }
                        break;
                    case 200:
                        if(t3_200 == 0){
                                
                                goto label3;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|History: $200");
                        printf("\n------------------------");
                        printf("\n|Who became US president after Herbert Hoover?");//b is correct
                        printf("\n|");
                        printf("\n|a.) Harry S. Truman   b.) Franklin D. Roosevelt ");
                        printf("\n|c.) Jimmy Carter      d.) George Bush ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'b'){
                            correct();
                            balance += t3_200;
                            t3_200 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'b'){
                            incorrect();
                            t3_200 = 0;
                            goto label;
                        }
                        break;
                    case 100:
                        if(t3_100 == 0){
                                
                                goto label3;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|History: $100");
                        printf("\n------------------------");
                        printf("\n|What state is Mount Rushmore located in?");//c is correct
                        printf("\n|");
                        printf("\n|a.) North Dakota   b.) Wyoming ");
                        printf("\n|c.) South Dakota   d.) Nebraska ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'c'){
                            correct();
                            balance += t3_100;
                            t3_100 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'c'){
                            incorrect();
                            t3_100 = 0;
                            goto label;
                        }
                        break;
                    default:
                        goto label3;
                        break;

                }
                break;
            case 4:
                label4:
                if(t4_500 != 500 && t4_400 != 400 && t4_300 != 300 && t4_200 != 200 && t4_100 != 100){
                t4 = 0;
                goto label;
                }
                system("cls");
                printf("\n------------------------");
                printf("\n|Games");
                printf("\n------------------------");
                printf("\n|Please select a Price: \n|$500 \n|$400 \n|$300 \n|$200 \n|$100");
                printf("\n------------------------");
                printf("\n|$");
                scanf("%d", &price);
                printf("------------------------");
                
                switch (price)
                {
                    case 500:
                        if(t4_500 == 0){
                                
                                goto label4;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Games: $500");
                        printf("\n------------------------");
                        printf("\n|In the game 'The Legend of Zelda: Ocarina of Time,' what is the name of the horse that Link can obtain and ride throughout the game?");
                        //b is correct
                        printf("\n|");
                        printf("\n|a.) Pegasus     b.) Epona ");
                        printf("\n|c.) Shadowfax   d.) Spirit");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'b'){
                            correct();
                            balance += t4_500;
                            t4_500 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'b'){
                            incorrect();
                            t4_500 = 0;
                            goto label;
                        }
                        break;
                    case 400:
                        if(t4_400 == 0){
                                
                                goto label4;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Games: $400");
                        printf("\n------------------------");
                        printf("\n|In the classic game of chess, what piece has the unique ability to move in an L-shape, jumping over other pieces on the board?");
                        //a is correct
                        printf("\n|");
                        printf("\n|a.) Knight   b.) Rook ");
                        printf("\n|c.) Pawn     d.) Bishop");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'a'){
                            correct();
                            balance += t4_400;
                            t4_400 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'a'){
                            incorrect();
                            t4_400 = 0;
                            goto label;
                        }
                        break;
                    case 300:
                        if(t4_300 == 0){
                                
                                goto label4;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Games: $300");
                        printf("\n------------------------");
                        printf("\n|In the game Monopoly, what color group do the properties Boardwalk and Park Place belong to?");
                        //d is correct
                        printf("\n|");
                        printf("\n|a.) Red     b.) Yellow ");
                        printf("\n|c.) Green   d.) Dark blue ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'd'){
                            correct();
                            balance += t4_300;
                            t4_300 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'd'){
                            incorrect();
                            t4_300 = 0;
                            goto label;
                        }
                        break;
                    case 200:
                        if(t4_200 == 0){
                                
                                goto label4;
                            }
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Games: $200");
                        printf("\n------------------------");
                        printf("\n|What is the primary material required to craft a bookshelf in Minecraft, which is often used to enhance enchanting capabilities?");
                        //c is correct
                        printf("\n|");
                        printf("\n|a.) Stone Bricks    b.) Iron Ingots");
                        printf("\n|c.) Wooden Planks   d.) Obsidian ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'c'){
                            correct();
                            balance += t4_200;
                            t4_200 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'c'){
                            incorrect();
                            t4_200 = 0;
                            goto label;
                        }
                        break;
                    case 100:
                        if(t4_100 == 0){
                                
                                goto label4;
                            }

                        system("cls");
                        printf("\n------------------------");
                        printf("\n|Games: $100");
                        printf("\n------------------------");
                        printf("\n|In what year was the classic video game 'Super Mario Bros.' first released?");//a is correct
                        printf("\n|");
                        printf("\n|a.) 1985   b.) 1987 ");
                        printf("\n|c.) 1983   d.) 1990 ");
                        printf("\n------------------------");
                        printf("\n|The answer is: ");
                        scanf("%s", &Achoice);

                        if (Achoice == 'a'){
                            correct();
                            balance += t4_100;
                            t4_100 = 0;
                            goto label;
                        }
                            
                        
                        if (Achoice != 'a'){
                            incorrect();
                            t4_100 = 0;
                            goto label;
                        }
                        break;
                    default:
                        goto label4;
                        break;

                }
                break;

            default:
                goto label;
                break;
            
            case 5:
                results();
                break;


        }

        
    } while (Tchoice > 5);
    
        


    return 0;
}

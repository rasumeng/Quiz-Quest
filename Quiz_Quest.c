//Robert Asumeng: #1002095331

//to loop make the switch case at price a function.

#include <stdio.h>
#include <stdlib.h>

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
    int balance = 0;


    do
    {
        label:
        system("cls");
        printf("\n------------------------");
        printf("\n|Current Balance: $%d", balance);
        printf("\n------------------------");
        printf("\n|Please select a topic: \n|Topic 1: Math \n|Topic 2: Science \n|Topic 3: History \n|Topic 4: Games");
        printf("\n------------------------");
        printf("\n|I want Topic: ");
        scanf("%d", &Tchoice);
        printf("------------------------");
        
        switch (Tchoice)
        {
 
                case 1:
                    if(t1_500 != 500 && t1_400 != 400 && t1_300 != 300 && t1_200 != 200 && t1_100 != 100){
                    printf("\n|Topic 1 is bankrupt, please select a different topic.");
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
                                empty();
                                goto label1;
                            }
                            system("cls");
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
                                empty();
                                goto label1;
                            }
                            system("cls");
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
                            printf("\n|\n|2x + 3y = 4 \n|4x - 2y = 8"); //d is correct
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
                                empty();
                                goto label1;
                            }
                            system("cls");
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
                                empty();
                                goto label1;
                            }
                            system("cls");
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
                system("cls");
                printf("\n------------------------");
                printf("\nScience");
                printf("\n------------------------");
                printf("\n|Please select a Price: \n|$500 \n|$400 \n|$300 \n|$200 \n|$100");
                printf("\n------------------------");
                printf("\n|$");
                scanf("%d", &price);
                printf("------------------------");
                
                switch (price)
                {
                    case 500:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|The Higgs boson is a particle that imparts mass to other particles through the Higgs field, helping explain the origin of mass in the universe.");
                        printf("\n|Its discovery was confirmed at the Large Hadron Collider in 2012.");
                        printf("\n|");
                        printf("\n|a.)    b.) ");
                        printf("\n|c.)    d.) ");
                        break;
                    case 400:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|4 x 100");
                        break;
                    case 300:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|3 x 100");
                        break;
                    case 200:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|2 x 100");
                        break;
                    case 100:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|1 x 100");
                        break;
                    default:
                        goto label2;
                        break;

                }
                break;
            case 3:
                label3:
                system("cls");
                printf("\n------------------------");
                printf("\nHistory");
                printf("\n------------------------");
                printf("\n|Please select a Price: \n|$500 \n|$400 \n|$300 \n|$200 \n|$100");
                printf("\n------------------------");
                printf("\n|$");
                scanf("%d", &price);
                printf("------------------------");
                
                switch (price)
                {
                    case 500:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|5 x 100");
                        printf("\n|");
                        printf("\n|a.)    b.) ");
                        printf("\n|c.)    d.) ");
                        break;
                    case 400: 
                        system("cls");  
                        printf("\n------------------------");
                        printf("\n|4 x 100");
                        break;
                    case 300:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|3 x 100");
                        break;
                    case 200:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|2 x 100");
                        break;
                    case 100:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|1 x 100");
                        break;
                    default:
                        goto label3;
                        break;

                }
                break;
            case 4:
                label4:
                system("cls");
                printf("\n------------------------");
                printf("\nGames");
                printf("\n------------------------");
                printf("\n|Please select a Price: \n|$500 \n|$400 \n|$300 \n|$200 \n|$100");
                printf("\n------------------------");
                printf("\n|$");
                scanf("%d", &price);
                printf("------------------------");
                
                switch (price)
                {
                    case 500:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|5 x 100");
                        printf("\n|");
                        printf("\n|a.)    b.) ");
                        printf("\n|c.)    d.) ");
                        break;
                    case 400:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|4 x 100");
                        break;
                    case 300:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|3 x 100");
                        break;
                    case 200:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|2 x 100");
                        break;
                    case 100:
                        system("cls");
                        printf("\n------------------------");
                        printf("\n|1 x 100");
                        break;
                    default:
                        goto label4;
                        break;

                }
                break;
            default:
                printf("\n|Inncorrect Option.");
                break;

        }

        
    } while (Tchoice > 4);
    
        
    //printf("Chose a price:\n$500 \n$400 \n$300 \n$200 \n$100");


    return 0;
}

void correct_ans(char x, char y, int pts, int value)
{
    if(x == y){
        pts += value;
    }
    

    else{
        printf("Incorrect");
    }
    

}

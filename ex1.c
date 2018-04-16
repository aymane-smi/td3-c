//exercice 1
#include<stdio.h>
#include<stdlib.h>
void main(){
	#if defined(_WIN32) || defined(_WIN64)
        const char* os = "Windose";
    #else
    #ifdef __linux
        const char* os = "Linux";
    #else
        const char* os = "Unknown";
    #endif
    #endif
        ////////////////////////////
	float t[20], s= 0.0, m, max=0.0, min, x, z;
	int n, i=0, choix, j, k, b;
	do{
		printf("nombre de valeur que voulez entrer:");
		scanf("%d", &n);
		}while((n<1) || (n>20));
		for(i;i<n;i++){
			printf("t[%d]=", i);
			scanf("%f", &t[i]);
		}
	do{
		printf("0-quitter\n1-affichage\n2-somme et moyenne\n3-positive\n4-negative\n5-max\n6-min\n7-ordre croissant\n8-recherche\n9-remplacer\n10-suppression\n11-ajouter\n12-efaccer\nvotre choix est:");
		scanf("%d", &choix);
		switch(choix){
			case 1:
			    for(i=0;i<n;i++)
			    	printf("t[%d]=%f\n", i, t[i]);
			        break;
		    case 2:
		        i=0;
	            while(i<n){
	            	s += t[i];
	            	i++;
	            	}
	            m = s/n;
	            printf("la somme est:%f, la moyenne est:%f\n", s, m);
	            break;
		    case 3:
	            for(i=0;i<n;i++){
	            	if(t[i] > 0)
	            		printf("t[%d]=%f est positive\n", i, t[i]);
	            	}
	            	break;
			case 4:
				for(i=0;i<n;i++){
					if(t[i] < 0)
						printf("t[%d]=%f est n?ative\n", i, t[i]);
				}
				break;
			case 5:
				for(i=0;i<n;i++){
					if(t[i] >= max){
						max = t[i];
					}
				}
				printf("le max est %f\n", max);
				i=0;
				while(i<n){
					if(t[i] == max)
						printf("t[%d] est un max\n", i);
					i++;
				}
				break;
			case 6:
				min = t[0];
                 for(i=0;i<n;i++){
					if(t[i] <= min){
						min = t[i];
					}
				}
				printf("le min est %f\n", min);
				i=0;
				while(i<n){
					if(t[i] == min)
						printf("t[%d] est un min\n", i);
					i++;
				}
				break;
			case 7:
				k = 0;
			    while(b){
			    	b = 0;
					k ++;
			    	for(i=0;i<n-k;i++){
			    		j = i+1;
			    		b = 1;
			    		if(t[i] > t[j]){
			    			x = t[i];
			    			t[i] = t[j];
			    			t[j] = x; 
			    		}
			    	}
			    }
			    for(i=0;i<n;i++){
			    	printf("t[%d]=%f\n", i, t[i]);
			    }
				break;
			case 8:
					do{
						printf("entre votre indice preferable:");
						scanf("%d", &k);
					}while(k<0 && k>n );
					printf("votre valeur rechercher est:%f", t[k]);
					break;
			case 9:
					do{
						printf("entre votre indice preferable:");
						scanf("%d", &k);
					}while(k<0 && k>n );
					printf("nouvelle valeur:");
					scanf("%f", &z);
				    t[k] = z;
					break;
			case 10:
					do{
						printf("entre votre indice preferable:");
						scanf("%d", &k);
					}while(k<0 && k>n );
					t[k] = 0.0;
					break;
			case 11:
				    i = n+1;
				    for(i;i<=20;i++){
				    	if(t[i] == 0){
				    		printf("enter une valeur:");
				    		scanf("%f", &t[i]);
				    		break;
				    	}
				    }
				    break;
			case 12:
			    if(os == "Windose")
			    	system("cls");
			    else if( os == "Linux")
			    	system("clear");
        }
        }while(choix != 0);
	}

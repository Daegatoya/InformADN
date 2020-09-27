#include <stdio.h>
#include <string.h>
char a[400];
int main(void) {
    printf("Bienvenue sur l'application InformADN!\n");
    printf("Veuillez entrer l'ADN\n");
    scanf("%400s",a);
    char c[sizeof(a)];
    strcpy(c, a);
    char b[sizeof(a)];
    strcpy(b, a);
    for (int index = 0; index < strlen(a); index++) {
     
        if(a[index] == 65 || a[index] == 67 || a[index] == 71 || a[index] == 84) {
            printf("*CHECK*\n");
            
        } 
        
        else 
             printf("!ERROR!\n");
        }
 for (int index = 0; index < strlen(a); index++) {
        if(a[index] == 'C'){
                a[index] = 'G';
        
            }else
                            if(a[index] == 'T'){
                a[index] = 'A';
            }
            
          else
                            if(a[index] == 'G'){
                a[index] = 'C';
                            
    }
              else
                            if(a[index] == 'A'){
                a[index] = 'U';
                            
              }
                            else
                            if(a[index] != 65 || a[index] != 67 || a[index] != 71 || a[index] != 84){
                a[index] = '!';
                            
                            }
 }

    for (int index = 0; index < strlen(b); index++) {
     
        if(b[index] == 65 || b[index] == 67 || b[index] == 71 || b[index] == 84) {
            printf("*CHECK*\n");
            
        } 
        
        else 
             printf("!ERROR!\n");
        }
        for (int index = 0; index < strlen(b); index++) {
        if(b[index] == 'C'){
                b[index] = 'G';
        
            }else
                            if(b[index] == 'T'){
                b[index] = 'A';
            }
            
          else
                            if(b[index] == 'G'){
                b[index] = 'C';
                            
    }
              else
                            if(b[index] == 'A'){
                b[index] = 'T';
                            
              }
                            else
                            if(b[index] != 65 || b[index] != 67 || b[index] != 71 || b[index] != 84){
                b[index] = '!';
                            
                            }
  FILE *fpt = fopen("ADN.txt", "w");
     fprintf(fpt, "ADN De Base: %s\n", c);
                                fprintf(fpt, "ARN Messager: %s\n", a);
                                fprintf(fpt, "ADN Associé: %s\n", b);
                                  fprintf(fpt, "\n");
                                    fprintf(fpt, "Rappel: Le codon de départ est toujours: AUG\n");
                                      fprintf(fpt, "\n");
                                    fprintf(fpt, "Les codons de fins peuvent être: UAA, UAG ou UGA\n");
                                      fprintf(fpt, "\n");
                                    fprintf(fpt, "Il y a un tableau des acides aminés possible dans le dossier. Allez y jeter un coup d'oeil si vous êtes curieux!\n");
                                      fprintf(fpt, "\n");
                                            fprintf(fpt, "Deux autres images sont disponibles dans le dossier. Ce sont des informations de plus\n");
                                            fprintf(fpt, "\n");
                                             fprintf(fpt, "L'acide désoxyribonucléique ou ADN est une macromolécule biologique présente dans toutesa les cellules ainsi que chez de nombreux virus. L'ADN contient toute l'information génétique, appelée génome, permettant le développement, le fonctionnement et la reproduction des êtres vivants. C'est un acide nucléique, au même titre que l'acide ribonucléique (ARN). Les acides nucléiques sont, avec les peptides et les glucides, l'une des trois grandes familles de biopolymères essentiels à toutes les formes de vie connues. Les molécules d'ADN des cellules vivantes sont formées de deux brins antiparallèles enroulés l'un autour de l'autre pour former une double hélice. On dit que l'ADN est bicaténaire, ou double brin. Chacun de ces brins est un polymère appelé polynucléotide. Chaque monomère qui le constitue est un nucléotide, lequel est formé d'une base nucléique, ou base azotée — adénine (A), cytosine (C), guanine (G) ou thymine (T) — liée à un ose — ici, le désoxyribose — lui-même lié à un groupe phosphate. Les nucléotides polymérisés sont unis les uns aux autres par des liaisons covalentes entre le désoxyribose d'un nucléotide et le groupe phosphate du nucléotide suivant, formant ainsi une chaîne où alternent oses et phosphates, avec des bases nucléiques liées chacune à un ose. L'ordre dans lequel se succèdent les nucléotides le long d'un brin d'ADN constitue la séquence de ce brin. C'est cette séquence qui porte l'information génétique. Celle-ci est structurée en gènes, qui sont exprimés à travers la transcription en ARN. Ces ARN peuvent être non codants — ARN de transfert et ARN ribosomique notamment — ou bien codants : il s'agit dans ce cas d'ARN messagers, qui sont traduits en protéines par des ribosomes. La succession des bases nucléiques sur l'ADN détermine la succession des acides aminés qui constituent les protéines issues de ces gènes. La correspondance entre bases nucléiques et acides aminés est le code génétique. L'ensemble des gènes d'un organisme constitue son génome. Les bases nucléiques d'un brin d'ADN peuvent interagir avec les bases nucléiques d'un autre brin d'ADN à travers des liaisons hydrogène, qui déterminent des règles d'appariement entre paires de bases : l'adénine et la thymine s'apparient au moyen de deux liaisons hydrogène, tandis que la guanine et la cytosine s'apparient au moyen de trois liaisons hydrogène. Normalement, l'adénine et la cytosine ne s'apparient pas, tout comme la guanine et la thymine. Lorsque les séquences des deux brins sont complémentaires, ces brins peuvent s'apparier en formant une structure bicaténaire hélicoïdale caractéristique qu'on appelle double hélice d'ADN. Cette double hélice est bien adaptée au stockage de l'information génétique : la chaîne oses-phosphates est résistante aux réactions de clivage ; de plus, l'information est dupliquée sur les deux brins de la double hélice, ce qui permet de réparer un brin endommagé à partir de l'autre brin resté intact ; enfin, cette information peut être copiée à travers un mécanisme appelé réplication de l'ADN au cours duquel une double hélice d'ADN est recopiée fidèlement en une autre double hélice portant la même information. C'est en particulier ce qu'il se passe lors de la division cellulaire : chaque molécule d'ADN de la cellule mère est répliquée en deux molécules d'ADN, chacune des deux cellules filles recevant ainsi un jeu complet de molécules d'ADN, chaque jeu étant identique à l'autre. Dans les cellules, l'ADN est organisé en structures appelées chromosomes. Ces chromosomes ont pour fonction de rendre l'ADN plus compact à l'aide de protéines, notamment d'histones, qui forment, avec les acides nucléiques, une substance appelée chromatine. Les chromosomes participent également à la régulation de l'expression génétique en déterminant quelles parties de l'ADN doivent être transcrites en ARN. Chez les eucaryotes (animaux, plantes, champignons et protistes), l'ADN est essentiellement contenu dans le noyau des cellules, avec une fraction d'ADN présent également dans les mitochondries ainsi que, chez les plantes, dans les chloroplastes. Chez les procaryotes (bactéries et archées), l'ADN est contenu dans le cytoplasme. Chez les virus qui contiennent de l'ADN, celui-ci est stocké dans la capside. Quel que soit l'organisme considéré, l'ADN est transmis au cours de la reproduction : il joue le rôle de support de l'hérédité. La modification de la séquence des bases d'un gène peut conduire à une mutation génétique, laquelle peut, selon les cas, être bénéfique, sans conséquence ou néfaste pour l'organisme, voire incompatible avec sa survie. À titre d'exemple, la modification d'une seule base d'un seul gène — celui de la β-globine, une sous-unité protéique de l'hémoglobine A — du génotype humain est responsable de la drépanocytose, une maladie génétique parmi les plus répandues dans le monde.\n");
                                fprintf(fpt, "\n");
                                 fprintf(fpt, "Source: https://fr.wikipedia.org/wiki/Acide_d%C3%A9soxyribonucl%C3%A9ique\n"); 
                                fclose(fpt);
                       
}
}

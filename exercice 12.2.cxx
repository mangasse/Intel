
void trierAvecStrcmp(char *chaine1, char *chaine2) {
    if (strcmp(chaine1, chaine2) <= 0) {
        printf("%s\n%s\n", chaine1, chaine2);
    } else {
        printf("%s\n%s\n", chaine2, chaine1);
    }
}
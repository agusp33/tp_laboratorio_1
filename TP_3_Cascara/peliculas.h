typedef struct{
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int estado;
}sMovie;

int menu();
int movie_add(sMovie *video,int array_elements);
int movie_remove(sMovie *video,int array_elements);
int movie_modify(sMovie *video,int array_elements);
void movie_initializer(sMovie *video,int array_elements,int input);
int movie_search(sMovie *video,int array_elements,char input[]);
int movie_searchEmptySpace(sMovie *video,int array_elements,int input);
int movie_generateHTML(sMovie *video,int array_elements);
int movie_generateFile(sMovie *video);



 struct person{
 int day;
 int month;
 int year;
 char sex;
 float salary;
 char firstname[20];
 char lastname[30];
};

bool isValidDate(int dd, int mm, int yy);
bool isGapYear(int year);
bool isValidSex(char z);
FILE* openFile(char* fileName);
void closeFile(FILE *fr);
struct person* getDataFromFile(FILE *fr);
void sortDataByBirthday(struct person *p, int count);
void sortDataByLastName(struct person *p, int count);
void printData(struct person *p, int count);
float getAverageSalary(struct person *p, int count, char sex);
void createEmailFile(struct person *p, int count, char *fileName);


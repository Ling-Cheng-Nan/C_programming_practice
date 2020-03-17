typedef struct name{
    char first[21];
    char middle[11];
    char last[12];
} Name;

typedef struct date{
    int day;
    char month[4]; //one position for \0 to end string
    //int month;
    int year;
} Date;

typedef struct student{
    Name name;
    Date dob;
    char gender;
    int age;
} Student;


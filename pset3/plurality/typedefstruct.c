
int main(int argc, char *argv[])
{
  int i;
  int string_size = 10;
  int cod=100;
  emp job[3];


  for (i=0;i<3;i++) // Allocate space for the string you will access.
  {
  job[i].name.e_name = malloc(sizeof(char)*string_size);
  job[i].name.e_lastname = malloc(sizeof(char)*string_size);
  }

  for (i=0;i<3;i++)
  {

     scanf("%s",job[i].name.e_lastname);
     job[i].id=cod;
     cod++;
 }
     for (i=0;i<3;i++)
  {
       printf("%s",job[i].name.e_lastname);
         printf("%d\n",job[i].id);
  }
 system("PAUSE");
    return 0;
  }


// Consider the fact that using scanf is unsafe, because:
//
// If you use the %s and %[ conversions improperly, then the number of characters read is limited only by where the next whitespace character appears. This almost cetainly means that invalid input could make your program crash, because input too long would overflow whatever buffer you have provided for it. No matter how long your buffer is, a user could always supply input that is longer. A well-written program reports invalid input with a comprehensible error message, not with a crash. (source)
//
// Nevertheless, their are some workaround that you can do to use scanf (check them here)
//
// Instead of scanf you can use fgets. fgets allows you to limit the data that will be placed in your buffer.

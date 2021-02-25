#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>

#define TableSize 10

typedef struct {
     int key;
     char data[20];
     long long int tel;
}person;
int size=0;

person *hash_table[TableSize];

unsigned int hash(int key){
unsigned int HashValue=0;
HashValue = key%TableSize;
return HashValue;
}

void init_hash_table(){
for (int i=0; i<TableSize; i++){
hash_table[i]=NULL;
}
}
bool insert(person *p){
int index= hash(p->key);
if (hash_table[index]== NULL){
hash_table[index] =p;
size++;
return true;
}
return false;
}

person *remove_element(int key)
{
  int index = hash(key);
  if (hash_table[index]!= NULL && hash_table[index]->key==key){
  hash_table[index]=NULL;
  person *temp= hash_table[index];
  size--;
  return temp;
  }
  else
  return NULL;
}
person *edit(int key){
  char name[20];
  long long int number;
  int index=hash(key);
  if (hash_table[index]!=NULL && hash_table[index]->key==key){
    printf("Enter the new name:");
    scanf("%s", hash_table[index]->data);
    printf("Enter the new telephone number:");
    scanf("%lld", &hash_table[index]->tel);
    person *temp=hash_table[index];
    return temp;
  }
  else
     return NULL;
}
int size_of_hashtable()
{
  return size;
}
void printTable(){
printf("Start\n");
for (int i=0;i<TableSize; i++){
if (hash_table[i]==NULL){
printf("\t %i\t ----\n",i);
}
if (hash_table[i]!=NULL)
printf("\t %i\t%d\t %s\t %lld\n", i,hash_table[i]->key,hash_table[i]->data,hash_table[i]->tel);
}
printf("End\n");
}



int main()
{
  int choice, key, n;
  char data[20];
  long long int tel;
  int c = 0;
  int d=0;
  init_hash_table();
  person j[d];
    
  do
  {
    printf("1.Insert student details in the Hash Table"
         "\n2.Remove student information from the Hash Table"
         "\n3.Edit student information from the Hash Table"
         "\n4.Check the size of Hash Table"
         "\n5.Display the Hash Table"
         "\n\n Enter your choice: ");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter Roll No.:\t");
      scanf("%d", &j[d].key);
      printf("Enter Name:\t");
      scanf("%s", j[d].data);
      printf("Enter telephone number");
      scanf("%lld", &j[d].tel);
      insert(&j[d]);
      printTable();
      d++;
      break;

    case 2:

      printf("Enter the roll no. to be deleted-:");
      scanf("%d", &key);
      remove_element(key);
      printTable();
      break;
    
    case 3:
      printf("Enter the roll no. to be editted: ");
      scanf("%d",&key);
      edit(key);
      printTable();
      break;

    case 4:

      n = size_of_hashtable();
      printf("Size of Hash Table is-:%d\n", n);

      break;

    case 5:

      printTable();

      break;

    default:

      printf("Invalid Input\n");
    }

    printf("\nDo you want to continue (press 1 for yes): ");
    scanf("%d", &c);

  } while (c == 1);
  return 0;
}
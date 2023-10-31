#include "checkit.h"
#include "task2.h"

// test for array_list_new
void test1() {
   array_list *list = array_list_new(10);
   checkit_int(list->capacity, 10);
   checkit_int(list->length, 0);
}

void test2(){
   // testing to make sure creating a new array list works
   array_list *list2 = array_list_new(10);
   checkit_int(list2->capacity, 10);
   checkit_int(list2->length, 0);
   
   // testing for adding one element to the array list
   array_list_add_to_end(list2, "corvette");
   checkit_int(list2->capacity, 10);
   checkit_int(list2->length, 1);

   // testing for filling the array list to its capacity
   array_list_add_to_end(list2, "bugatti");
   array_list_add_to_end(list2, "ferrari");
   array_list_add_to_end(list2, "bmw");
   array_list_add_to_end(list2, "volkswagen");
   array_list_add_to_end(list2, "subaru");
   array_list_add_to_end(list2, "toyota");
   array_list_add_to_end(list2, "jeep");
   array_list_add_to_end(list2, "tesla");
   array_list_add_to_end(list2, "audi");
   checkit_int(list2->capacity, 10);
   checkit_int(list2->length, 10);

   // testing for exceeding the capacity of the array list 
   // does it double the size of the array and add the element?
   array_list_add_to_end(list2, "dacia");
   checkit_int(list2->capacity, 20);
   checkit_int(list2->length, 11);

}

int main(void) {
   test1();
   test2();
   return 0;
}

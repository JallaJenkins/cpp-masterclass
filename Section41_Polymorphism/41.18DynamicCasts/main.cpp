#include <iostream>
#include "dog.h"

void do_something_with_animal_ptr(Animal* animal){
	std::cout<< "In function taking base pointer..." << std::endl;
	Feline* feline_ptr = dynamic_cast<Feline*>(animal);
	
	if(feline_ptr){
		feline_ptr->do_some_feline_thingy();
	}else{
		std::cout << "Couldn't cast to Feline pointer,Sorry." << std::endl;
	}
	
}

void do_something_with_animal_ref(Animal & animal){
	std::cout << "In function taking base reference..." << std::endl;
	Feline* feline_ptr_1 {dynamic_cast<Feline*>(&animal)};
	if(feline_ptr_1){
		feline_ptr_1->do_some_feline_thingy();
	}else{
		std::cout << "Couldn't cast to Feline reference,Sorry." << std::endl;
	}
}

int main(){

  // Base class pointer
  Animal* animal1 = new Feline("stripes", "feline1");
  // animal1->do_some_feline_thingy(); // error - not a virtual function

  // If the case succeeds, we get a valid pointer back.
  // If it fails, we get nullptr. So we can check before calling stuff on the returned pointer
  // Feline* feline_ptr = dynamic_cast<Feline*>(animal1);
  // feline_ptr->do_some_feline_thingy();

  // Problems because the initial Feline object has no Dog info
  // Will cause runtime error - very bad!!
  // Dog* feline_ptr = dynamic_cast<Dog*>(animal1);
  // feline_ptr->do_some_dog_thingy();

  /*
  // Better to check if the cast is successful:
  // Dog* feline_ptr = dynamic_cast<Dog*>(animal1);
  Feline* feline_ptr = dynamic_cast<Feline*>(animal1);
  if(feline_ptr) {
    feline_ptr->do_some_feline_thingy();
  } else {
    std::cout << "Cast invalid!\n";
  }
  */

  // Can also use references
  Feline feline2("stripes", "feline2");
  Animal& animal_ref = feline2;

  /*
  // Calling non-virtual methods directly won't work
  // animal_ref.do_some_feline_thingy();  // Compiler error

  // Will work if it is cast back to a Feline ref
  Feline& feline_ref{dynamic_cast<Feline&>(animal_ref)}; // Works
  // Dog& feline_ref{dynamic_cast<Dog&>(animal_ref)};  // Runtime error - trying to cast to a subclass, but cannot check for nullptr
  feline_ref.do_some_feline_thingy();

  // Proper checks with references - must cast to pointer
  // Feline* feline_ptr_1 {dynamic_cast<Feline*>(&animal_ref)};
  Dog* feline_ptr_1 {dynamic_cast<Dog*>(&animal_ref)};
  if(feline_ptr_1) {
    feline_ptr_1->do_some_feline_thingy();
  } else {
    std::cout << "Cast invalid!\n";
  }
  */

  // Functions using polymorphic casting with checks:
  do_something_with_animal_ptr(animal1);
  do_something_with_animal_ref(animal_ref);

  std::cout << "--------------------------\n";

  // Only use dynamic casts with objects & polymorphism
  // Use static cast for fundamental types
  int data{45};
  int* data_ptr{&data};
  // std::string data_str = dynamic_cast<std::string>(data); // Compiler error
  // std::string* data_str = dynamic_cast<std::string*>(data); // Compiler error

  std::cout << "Done\n";

  delete animal1;
  return 0;
}

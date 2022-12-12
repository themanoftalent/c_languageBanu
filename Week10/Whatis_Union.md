What is a union in C language?
A union is a user-defined type similar to structs in C except for one key difference. 
Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time.


In computer science, a union is a value that may have any of several representations or formats within the same position in memory; 
that consists of a variable that may hold such a data structure. Some programming languages support special data types, called union 
types, to describe such values and variables.

**Turkçesi**
Bileşim, iki veya daha fazla değişken tarafından ortaklaşa kullanılan tek bir bellek birimidir. 
Burada bahsi geçen değişkenler farklı veri türünden olabilir. Ancak, aynı bellek bölgesini paylaşan değişkenlerden 
sadece bir tanesi aynı anda bellek bölgesini kullanabilir.
örnek:

union Data {
   int i;
   float f;
   char str[20];
} data;  

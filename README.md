# C Program


## 1.

### Algorithm:

- Start
- Read a, b, c values
- Compute d = b^2-4ac
- if d > 0 then
  - r1 = b+ sqrt (d)/(2*a)
  - r2 = b sqrt(d)/(2*a)
- Otherwise if d = 0 then
  - compute r1 = -b/2a, r2=-b/2a
  - print r1,r2 values
- Otherwise if d < 0 then print roots are imaginary
- Stop

### Code:
```
# include<stdio.h>
# include<math.h>
int main(){
   float a,b,c,r1,r2,d;
   printf ("enter the values of a b c: ");
   scanf ("%f %f %f", &a, &b, &c);
   d= b*b - 4*a*c;
   if (d>0){
      r1 = -b+sqrt (d) / (2*a);
      r2 = -b-sqrt (d) / (2*a);
      printf ("The real roots = %f %f", r1, r2);
   }
   else if (d==0){
      r1 = -b/(2*a);
      r2 = -b/(2*a);
      printf ("roots are equal =%f %f", r1, r2);
   }
   else
      printf("Roots are imaginary");
}
```

### Output:
```
Case 1:
enter the values of a b c: 1 2 1
r1 = -1
r2 = -1

Case 2:
enter the values of a b c: 1 1 4
Roots are imaginary
```

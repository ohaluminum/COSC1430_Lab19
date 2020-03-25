# COSC1430_Lab19

In this lab you will create a simple class and overload the addition operator.

The Foo class has these private members:

    an integer called number
    a string called name

The class has the fallowing public functions:

    a default constructor
    a constructor that takes an int and a string in that order
    getter and setter methods
    overload the + operator
    a toString method
    
·The + operator will create the new Foo object that is the addition of two others by this criteria:
    
     -the number variable is the addition of the two number variables
     -the name variable is the concatenation of the other two with no additions
        
      For example:

      Foo tmp1(6, "Co")
      Foo tmp2(13, "vid")
      Foo tmp3 = tmp1 + tmp2
      cout << tmp3.toString(）
      
      OUTPUT:

      19:Covid
      
·The toString method returns a string with this format:

      For example:

      number + : + name
      Foo tmp(5, "Foo")
      cout << tmp.toString()
     
      OUTPUT:
      
      5:Foo

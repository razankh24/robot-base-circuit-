# task 2: robot-base-circuit:

this reposetory contains:

A- a circuit controlling 2 DC motors by ardiuno:
    
    * 2 DC motors 
    
    *ardiuno 
    
    *H-bridge motor driver 
    
    *a battery
    
    *code file 
    
    LINK IN TINKERCAD >>> https://www.tinkercad.com/things/5EIrSwnISm1-powerful-maimu/editel?sharecode=cdUrKIHYCEllVuaTk3VowftZWNCECNBKeMgF9WvQbMk
    
    
    B- the used battery is (Li-Ion battery) 
    
    after a good reaserch I calculated the following data about the arm robot/base components:
    
    5 servos>> 4.8v to 6v each 
    
    DC motor>> 3v to 12v dependng on its size, and usually about 100mA
    
    ardiuno>> 6v , and 40mA
    
    which is 6v and roughly 140mA, and that's why i choose a lithium battery as the the most suitable to our robot, 
    
    since Li-Ion batteries has higher energy power and a voltage from 4.2v to 4.3v which is whithin the range of 
    
    voltages that is needed. however, it might be not so friendly in terms of price,and That's because the materials
    
    needed in cathodes to pack in more energy are often expensive. but Hey! it will last from 2-3 years and provide
    
    us with higher energy plus it's rechargable!! 
    
    
    
    speaking of rechargeability! i build a circuit for reacharing lithium battery that will charge our battrey with 
    
    500mA, since i'm not sure about the exact current required, with constant voltage of 4.2v or less and a resistor 
    
    to limit the current. and using a MCP73831, diode(LED), capacitors. 
    
    

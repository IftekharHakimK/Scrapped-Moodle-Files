<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1530&course=555"></a>
Sample Assembly Instruction
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1530&course=555">Tariq Adnan</a> - Sunday, 13 June 2021, 10:43 PM


 

addi $t0, $zero, 5    //$t0 = 5 //addi OK<br />subi $t1, $t0, 5      //$t1 = 0 //subi OKadd $t3, $t0, $t1     //$t3 = 5 //add OKbeq $t0, $t3, label1  //branching will be executed  //beq OKj endlabel1:sll $t4, $t0, 2       //$t4 = 20 //sll OKsub $t1, $t4, $t3     //$t1 = 15 //sub OKor $t4, $t1, $t0      //$t4 = ($1111 or 0101) = 1111 = 15 //or OKnor $t1, $t4, $t3     //$t1 = (1111 nor 1111)= 11110000 //nor OKandi $t1, $t1, 0      //$t1 = 0 //andi OKori $t0, $t1, 20      //$t0 = 20 //ori OKsw $t0, 3($t1)        //mem[$t1+3] = mem[3] = 20 //sw OKlw $t1, 3($t1)        //$t1 = 20 //lw OKsrl $t1, $t1, 1       //$t1 = 10 //srl OKj label2              //unconditional jump will be executed //j OKlabel3:push $t1              //at the beginning, initialize the $sp as 0xFF. now mem[$sp] = mem[0xFF] = 10. //stack push OKpush $t0              //mem[0xFE] = 20pop $t1               //$t1 = 20 //stack pop OKpop $t0               //$t0 = 10 j end                 //unconditional jump will be executedlabel2:bneq $t1, $t0, label3 //$t1 != $t0 so this branching will be executed //bneq OKend:<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1486&course=555"></a>
Re: Sample Assembly Instruction
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1486&course=555">SAIFUL  ISLAM</a> - Monday, 14 June 2021, 7:07 PM


 

Sir.In assembly we use "#" to comment in code.Do we need to change it to "//" according to the sample? 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1530&course=555"></a>
Re: Sample Assembly Instruction
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1530&course=555">Tariq Adnan</a> - Wednesday, 16 June 2021, 12:22 AM


 

You do not need to handle comments. The ones given in the sample code are for testing the correctness of the respective instructions.  











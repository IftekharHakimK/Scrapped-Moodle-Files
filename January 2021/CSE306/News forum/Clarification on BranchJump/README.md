<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1530&course=555"></a>
Clarification on Branch/Jump
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1530&course=555">Tariq Adnan</a> - Sunday, 13 June 2021, 9:58 PM


 

Dear All, There have some confusion regarding how to store the address filed for the instructions of branching and jump. Here is the clarification on this matter.<br />1. Branch Instructions: Since PC is incremented by 1 in the implementation, hence the Branch target address will be computed as follows.Branch target <= (PC + 1) + (Address/Immediate from instruction)                              8 bits               last 8 bits of the instruction<br /><br /><b><br /></b>(We will assume that the resulting branch target address fits in 8 bit)<b><br /></b>2. Jump Instruction: Since Jump target is not PC relative, hence the Jump target address will be computed as follows.<b><br /></b>Jump target <= "Target Jump Address” from instruction<b>                           8 bits<br /><br /></b>** In both cases, shift operation is not required.<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1444&course=555"></a>
Re: Clarification on Branch/Jump
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1444&course=555">Md.Zarif Ul Alam</a> - Monday, 14 June 2021, 7:26 PM


 

Sir,
For<b> Branching</b> , as nothing was mentioned in the specification , we used instruction address (similar to what you said for <b>Jump</b>) instead of PC relative addressing. Is it necessary to change this ? <br />










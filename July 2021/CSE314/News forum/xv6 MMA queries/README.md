<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647"></a>
xv6 MMA queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647">Shashata Sawmya</a> - Friday, 28 January 2022, 3:40 PM


 

Dear students,If you have any further queries, post them under this thread.<br />Sawmya





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1452&course=647"></a>
Re: xv6 MMA queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1452&course=647">Md Sabbir Rahman</a> - Tuesday, 1 February 2022, 11:14 AM


 

Sir, I had the following queries for now,1. In the sample process details viewer output, the <b>page mappings </b>part shows page numbers to be noncontiguous (1 then 200) but if my understanding is correct, a process should have contiguous virtual page numbers (perhaps with some gaps from the guard page). Are the sample values invalid there? (I am asking because the parts above page mapping do seem to be valid)2. I read the 4 functions for swapfiles, but could not distinguish any part with any size limitation, so can we write/read to the swapfiles without any care about file size?3. Is it okay we only edit functions in proc.c? if we do not edit vm.c, the pages are allocated without limit, but when those functions return control to proc.c we can perform file paging as needed.4. Do we have to implement file paging for init and sh too?5. Lastly, I know we have to test the implementations ourselves, but could you give us an idea how to test the implementation? I understand that you may not answer this question.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647"></a>
Re: xv6 MMA queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647">Shashata Sawmya</a> - Thursday, 3 February 2022, 2:57 AM


 

Hello Sabbir,Please find the answers as follows:1. The sample values are mostly for demonstration purposes. It wasn't put there thinking about the contiguity or non-contiguity of the pages. Please proceed considering the original implementation in mind.2. Yes, you can safely ignore the file size. 3. To my understanding, you would need to make sufficient changes to vm.c for one part of your paging task. 4. For now, just see whether it works for a tailor-made process. If the paging works for init and sh, you would have a boost in the creativity portion.5. I am unable to answer this question at the moment. <br />









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1502&course=647"></a>
Re: xv6 MMA queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1502&course=647">Fahmid Al Rifat (Fahmid)</a> - Tuesday, 8 February 2022, 9:20 PM


 

Dear Sir  ,I have a query about task one where we have to Map   A - > B in page mapping .In spec  , A is virtual page number (vpn)  but I am confuse about vpn definition ,Is vpn  is Virtual address without offset ? (Get from internet query )Or Page Dir Table index no ? Or page Dir Table PPN ?  





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647"></a>
Re: xv6 MMA queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647">Shashata Sawmya</a> - Thursday, 10 February 2022, 11:20 AM


 

I won't directly answer this question. But, the virtual page number definition is widely available in textbooks and a google search. Please find it out yourself. Hint - you already have the answer to this query. 









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=647"></a>
Re: xv6 MMA queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=647">Fahim  Faysal</a> - Wednesday, 9 February 2022, 9:03 AM


 

Sir,For the NRU page replacement algorithm, we need a modified bit to identify dirty pages. The x86 page table diagram in xv6 book shows that there is a dirty bit in the PTE but there is no mention of it in the xv6 code. Are we supposed to simulate this part of the algorithm?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647"></a>
Re: xv6 MMA queries
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=2845&course=647">Shashata Sawmya</a> - Thursday, 10 February 2022, 11:36 AM


 

Yes, you might have to define and use some required flags in mmu.h for this part. 











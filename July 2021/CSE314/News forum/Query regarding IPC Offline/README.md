<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1876&course=647"></a>
Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1876&course=647">Masum Mushfiq</a> - Saturday, 18 December 2021, 8:22 PM


 

Dear students,<br />If you have any queries, post them under this thread. <br /> Mushfiq





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=647">Fahim  Faysal</a> - Thursday, 23 December 2021, 11:55 AM


 

Sir, can we use sem_trywait?<b>sem_wait is preferred. There should not be any busy waiting for any passenger. </b><br />Also, can a passenger lose the boarding pass again after returning from the special kiosk through the VIP channel?<b>Yes it is possible as at the boarding gate there is no distinction among the passengers. </b><br />(Edited by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - original submission Monday, 20 December 2021, 11:04 PM)(Edited by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - original submission Thursday, 23 December 2021, 11:53 AM)







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1461&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1461&course=647">MAHDI HASNAT SIYAM</a> - Monday, 20 December 2021, 11:19 PM


 

Do we need to strictly maintain queue (first come first serve) in front of kiosks, each security belt and boarding gate?Or It will be fine if we relay order on scheduler implementation.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - Thursday, 23 December 2021, 11:39 AM


 

You can rely on scheduler implementation.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1461&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1461&course=647">MAHDI HASNAT SIYAM</a> - Wednesday, 22 December 2021, 7:36 PM


 

Sir,Is there any special formula for assigning security belt for each passenger?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - Thursday, 23 December 2021, 12:01 PM


 

There is no fixed formula.Any passenger can join any belt.  Note that <b>N</b> and <b>P</b> are variables.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1499&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1499&course=647">Sheikh Saifur Rahman Jony</a> - Sunday, 26 December 2021, 12:37 AM


 

Sir, there is an instruction, "Print every move of a passenger in detail (with timing info)". There is no instruction on when the time spent should be increased. Shall we increase a global variable every time we encounter a sleep function or something else?







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=690&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=690&course=647">Reza Md.Ruhul  Roktim</a> - Sunday, 26 December 2021, 6:22 PM


 

Madam, I can't understand the line " Generate passengers using Poisson Distributions"Can you please elaborate it?Also, should I take arbitrary number of passengers or is there any restrictions?-Thanks1405081





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1876&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1876&course=647">Masum Mushfiq</a> - Wednesday, 29 December 2021, 6:43 PM


 

You have to generate the passengers according to Poisson distribution that means if the inter-arrival rate <b>(</b><b>λ) </b>is 20 passengers/hour then you have to generate 20 passengers in one hour simulation time span but their inter arrival time should be exponentially distributed accordingly. Assume a suitable interarrival time for your implementation but keep the option of easily changing it<b>. </b>









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=647">Nazmul Takbir</a> - Monday, 27 December 2021, 12:07 AM


 

<b>Each belt can serve P passengers at a time</b>If the waiting line for a belt has less than P passengers, will these passengers get served immediately or will the belt wait till there are P passengers?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - Wednesday, 29 December 2021, 5:26 PM


 

If there are less or equal to P passengers, they get served immediately. Think about counting semaphore of size P.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1420&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1420&course=647">Shafayat Hossain Majumder</a> - Monday, 27 December 2021, 6:31 PM


 

Dear sir/madam, could you please provide a detailed input vs. output sample for better understanding? The timing scheme is a bit tough to understand from the given sample.







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=647">Fatima Nawmi</a> - Wednesday, 29 December 2021, 5:42 PM


 

Dear Ma'am,I have the following queries about the IPC offline (CSE 314), hopefully you can help me understand these,<br />1. For " Generate passengers using Poisson distribution" , do we have to assign the id numbers of the passengers using Poisson distributions? Or do we have to generate a certain number of passengers according to Poisson distribution after a certain period of time?<br />2. For "The timing of the operations should be implemented using sleep." , do we have to maintain a variable that accumulates the amount of sleep time and after updating the variable call the sleep function for that amount of time? For example,sleep_var += 2;sleep(2);Or do we have to call the sleep function and extract the time taken by the system for the sleep and use that for counting time?<br />3.As the relative time for each operation is given, when a passenger is waiting in line (for the belt/kiosk) do we have to count that time for showing the exact timing info? Or counting the time taken only for completing each task without the waiting period is enough?<br />4. In the output format given , there are no values assigned to the w,x,y,z variables, if you can provide a sample output with all the variable values given it will be very helpful to understand.<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1876&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1876&course=647">Masum Mushfiq</a> - Wednesday, 29 December 2021, 6:49 PM


 

<b>1.</b> You have to generate the passengers according to Poisson distribution that means if the inter-arrival rate <b>(</b><b>λ) </b>is 20 passengers/hour then you have to generate 20 passengers in one hour simulation time span but their inter arrival time should be exponentially distributed accordingly. Assume a suitable inter-arrival time for your implementation but keep the option of easily changing it<b>. </b><b>2. </b>Use the first approach you mentioned i.e. use a global variable to keep track of the time and update it accordingly.<b>3. </b>The waiting time should be also considered for each passenger otherwise it won't make any sense.<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=647">Fahim  Faysal</a> - Thursday, 30 December 2021, 10:48 PM


 

Sir, do we need to maintain arrival order when printing?Ex:I have arrival times at t = 7,8,11... for passengers labeled X,Y,ZSome passenger W's task incremented time from 6->9 when it was done. Do I need to print that X and Y arrived before printing that W's task was done? Or is it simply enough to print W,X,Y in whatever order the threads wake up as long as the arrival/completion time is mentioned correctly.?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - Saturday, 1 January 2022, 6:48 PM


 

it is enough to print W,X,Y in whatever order the threads wake up as long as the arrival/completion time is mentioned correctly.<br />













<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1502&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1502&course=647">Fahmid Al Rifat (Fahmid)</a> - Thursday, 30 December 2021, 2:07 PM


 

Dear Sir/ Madam  , there are two ways . <b>FIRST WAY</b> , we can consider per person as a THREAD and on <b>ANOTHER WAY , </b> kiosk and security belts etc. are THREADS . We are confused which way is more convenient one or expected to implemented?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - Saturday, 1 January 2022, 6:46 PM


 

There is no restriction on the way you choose to implement. You also need to decide which way is convenient to implement different parts of the given scenario.I would personally use the first way. 









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1451&course=647"></a>
Do VIP passengers have own kiosk?
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1451&course=647">Ataf Fazledin Ahamed</a> - Sunday, 2 January 2022, 9:22 PM


 

Sir/Madam,<br /><br />Do VIP passengers use their own kiosk (the special one for returning passenger) or they check-in at the same kiosk as everyone?<br /><br />Thanks





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647"></a>
Re: Do VIP passengers have own kiosk?
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1886&course=647">Rezwana Reaz</a> - Wednesday, 5 January 2022, 12:22 AM


 

 VIPs don't have a special kiosk. They use the same kiosks as everyone. The special kiosk is only for the returning passengers.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1434&course=647"></a>
Re: Query regarding IPC Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1434&course=647">Md. Tanzim Azad</a> - Monday, 3 January 2022, 12:31 PM


 

Sir/Mam,Can we use <b>chrono::steady_clock::now() </b>for calculating global time?









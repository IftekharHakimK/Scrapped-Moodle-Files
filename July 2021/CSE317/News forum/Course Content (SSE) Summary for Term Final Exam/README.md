<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1531&course=648"></a>
Course Content (SSE) Summary for Term Final Exam
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1531&course=648">Shadman Saqib Eusuf</a> - Thursday, 3 March 2022, 9:13 PM


 

Dear Students, Hope you are doing well and preparing well for the term final exams.All the online class recordings have now been added to <a href="https://moodle.cse.buet.ac.bd/mod/url/view.php?id=10111">Class Recording (SSE)</a>. In addition, you can find them <a href="https://youtube.com/playlist?list=PLkQq4n83V_lE945FXCHObc94atdpxU2cN">here (on youtube)</a>. <b>But please do not share this playlist link with anyone not enrolled in this course.</b>The syllabus of your CSE 317 term final (my part) comprises of the following items.<ol><li>All lecture slides covered in your classes (the portions I have taught or have asked you to study by yourselves)</li><li>Russel-Norvig Textbook: Ch-13 (Upto 13.5 inclusive), Ch-14 (Upto 14.5 inclusive), Ch-15 (Upto 15.3 inclusive), Ch-18 (Upto 18.3 inclusive), Ch-20 (20.2.2). You can skip the irrelevant parts of the aforementioned, with respect to the class lectures.</li></ol>The rough solution ideas of my CT questions are as follows. You can follow class lectures to organize the answers of Q2 and Q3 better. (There may also be alternate solutions.)<br />
Q1: P(E|-b,+m) is proportional to P(E,-b,+m)  = P(E,-b,+a,+m) + P(E,-b,-a,+m)
Put E = +e in the above formula,<br />
P(+e,-b,+a,+m) = P(+e).P(-b).P(+a|+e,-b).P(+m|+a). Similarly calculate P(+e,-b,-a,+m).
So, you get P(+e,-b,+m). Similarly calculate P(-e,-b,+m). Sum these two terms to get normalizing factor P(-b,+m).
Then normalize to get P(+e|-b,+m) and P(-e|-b,+m). So your answer should be a table that shows<br />B=-b,E=+e,M=+m, P(+e|-b,+m) = ...
B=-b,E=-e,M=+m, P(-e|-b,+m) = ...
[Note that all the variables here are conditionally independent of J given A, so you can omit J from calculation. If you wish, you can verify it by calculating the joint distribution with and without J.]
<br />
Q2: Enumeration and Variable Elimination. The first one computes joint distribution of all random variables and then marginalize them out one by one. The second one interleaves joining and marginalizing.
<br />
Q3: When the effect is observed it must be explained by its causes. Say, Raining and road-block cause traffic jam. If you observe that there is indeed traffic jam, it puts raining and road-block in competition as the possible cause.<br />
<br />
Wishing you good luck for the upcoming exam. Thank you.
<br />
P.S. Your attendance records and CT marks will be published soon.






<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1531&course=648"></a>
Re: Course Content (SSE) Summary for Term Final Exam
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1531&course=648">Shadman Saqib Eusuf</a> - Saturday, 12 March 2022, 7:08 AM


 

Just to clarify some of your confusions, the topics of Assignment 4 will not be included in the term final syllabus (that's why the corresponding textbook sections were not mentioned).<br />P.S. <a href="https://moodle.cse.buet.ac.bd/mod/url/view.php?id=9836">CT-3 marks</a> have been published. Please let me know in case of any discrepancy.<br />









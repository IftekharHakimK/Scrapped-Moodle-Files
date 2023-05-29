<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=31&course=768"></a>
How to backprob gradient through the maxpooling layer when more than one cell contains maximum value?
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=31&course=768">Mohammad Saifur Rahman</a> - Tuesday, 31 January 2023, 8:47 AM


 

Suppose a portion of the image is:1 44 3a 2 x 2 Maxpooling will result in [4]. Suppose the loss gradient w.r.t it is [2]. After backpropagation, do we get<br />0 2 2 0OR do we pick one of the positions of 4 at random and place the 2 only in that position? This is a good question raised by Nasif, and I do not exactly know the answer to it. My gutt feeling is we put the 2 in both places, logically it makes sense to me. However, I encourage you all to do a bit of digging and share your thoughts.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1490&course=768"></a>
Re: How to backprob gradient through the maxpooling layer when more than one cell contains maximum value?
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1490&course=768">1705009 - Shayekh Bin Islam</a> - Tuesday, 31 January 2023, 4:51 PM


 

There is a similar question here: <a href="https://stackoverflow.com/q/57418218">Backpropagation for Max-Pooling Layers: Multiple Maximum Values</a><br />









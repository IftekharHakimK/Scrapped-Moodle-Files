<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=31&course=768"></a>
CNN backpropagation
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=31&course=768">Mohammad Saifur Rahman</a> - Sunday, 29 January 2023, 1:31 PM


 

Dear students,Assalamu alaikum. I showed you backpropagation for CNNs and shared YouTube videos for review. The material does not cover padding or stride > 1. I had given you this as a thought exercise.Please use this thread to share material blog posts etc. among yourselves.<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1497&course=768"></a>
Re: CNN backpropagation
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1497&course=768">Zaber Ibn Abdul Hakim</a> - Sunday, 29 January 2023, 7:54 PM


 

The link below contains a description along with amazing visualization to implement CNN Backpropagation with strides.<br /><a href="https://medium.com/@mayank.utexas/backpropagation-for-convolution-with-strides-8137e4fc2710">https://medium.com/@mayank.utexas/backpropagation-for-convolution-with-strides-8137e4fc2710</a><br /><br />Note: This blog post is from Medium which is not accessible from BD. You can find VPN handy in this case.<br /><br />







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1497&course=768"></a>
Re: CNN backpropagation
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1497&course=768">Zaber Ibn Abdul Hakim</a> - Sunday, 29 January 2023, 8:02 PM


 

When implementing Convolution layer, following a vectorized implementation instead of nested loops will save a lot of time.For this task, you will find the following two functions helpful.<b>numpy.lib.stride_tricks.as_strided </b>(<a href="https://numpy.org/doc/stable/reference/generated/numpy.lib.stride_tricks.as_strided.html">https://numpy.org/doc/stable/reference/generated/numpy.lib.stride_tricks.as_strided.html</a>) and <br /><b>numpy.einsum </b>(<a href="https://numpy.org/doc/stable/reference/generated/numpy.einsum.html">https://numpy.org/doc/stable/reference/generated/numpy.einsum.html</a>) <br />einsum function can be troublesome to understand. The following blog somewhat helped to get around numpy.einsum<br /><a href="https://gist.github.com/jessstringham/5483028423c350d7b771d5c0482be246">https://gist.github.com/jessstringham/5483028423c350d7b771d5c0482be246</a><br /><br />









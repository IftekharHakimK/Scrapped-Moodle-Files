<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=31&course=769"></a>
Assignment# 4 - Discussion forum
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=31&course=769">Mohammad Saifur Rahman</a> - Sunday, 5 February 2023, 11:10 AM


 

Assalamu alaikum,Please use this thread for discussing various issues with the assignment amongst yourselves.For example, Zaber Ibn Abdul Hakim reported that with simple CNN model, it has been difficult to get good results on this dataset (~10% training accuracy). So I asked him to try some pre-processing of the input images. With cv2.dilate and adaptive image cropping he could achieve 64% accuracy on first epoch.<br />While this assignment is about building a CNN model from scratch and not about data pre-processing etc., nevertheless this is a good learning opportunity. I highly encourage you all to try different data pre-processing techniques (with OpenCV, you just need to try some method calls).<br />As you make progress, you can share them here so that others can adapt suitable techniques without much hassle. But let us not copy code, please.Your grades in this assignment will depend on your implementation, viva etc. Less accuracy does not mean less number. But thriving for good performance will certainly help you improve your own learning. <br />Saifur





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1497&course=769"></a>
Re: Assignment# 4 - Discussion forum
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1497&course=769">Zaber Ibn Abdul Hakim</a> - Sunday, 5 February 2023, 6:15 PM


 

Image cropping finally didn't proved out to be better. but dilation did.
<br />
First of all, just to check what dilation does to an image, check this <a href="https://blog.shikoan.com/wp-content/uploads/2019/11/article_morphology_03.png">link.</a>
One thing to keep in mind, dilation is applied to the white portion of an image. Modify your image as necessary for this task.
<br />
Dilation can be performed with <a href="https://docs.opencv.org/3.4/d4/d86/group__imgproc__filter.html#ga4ff0f3318642c4f469d0e11f242f3b6c">cv2.dilate</a>.
<br />
With dilation I could achieve 95% validation accuracy.<br />








<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=769"></a>
Re: Assignment# 4 - Discussion forum
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=769">Nazmul Takbir</a> - Thursday, 9 February 2023, 11:17 PM


 

I found the following pre-processing pipeline useful:<br /><br />1. Invert image if needed - ensures white background with black text2. Increase contrast using <a href="https://github.com/JaidedAI/EasyOCR/blob/master/trainer/dataset.py#L21">this</a> 3. Apply dilation using OpenCV4. Apply Erosion using OpenCV5. Apply Thresholding using OpenCV6. Apply cropping by dropping rows and columns with average pixel intensity >= 2537. Resize to 32x328. Divide pixel values by 255Train, Val, Test accuracies are 99%, 97%, 97% respectively for LeNet-5









<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Wednesday, 17 November 2021, 9:38 AM


 

Dear StudentsYou can share <a href="..%5C..%5Cfile%5CAssignment%201.pdf">Assignment 1</a> related issues and queries in this thread.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=651">Fatima Nawmi</a> - Thursday, 18 November 2021, 12:37 AM


 

Sir, I have the following queries about the assignment :1. Can a student have multiple login instances with the same student id and same ip address ?2. After downloading a file , should it be stored along with the uploaded files in the dedicated directory of a student? Or should we create a different directory for each student in order to store the downloaded files?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Thursday, 18 November 2021, 9:39 PM


 

1. No<br />2. The uploaded files will be stored in a directory opened and maintained by the server program. The client program will create and maintain folder for downloaded files. For example, in a practical scenario the uploaded files are stored in the server (say at moodle.cse.buet.ac.bd) and the downloaded files are stored on the client's device (say your laptop). But in your local machine, you are running both the client and server application on the same device. In order to simulate the practical scenario store the uploaded and downloaded files in separate folders. 









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1451&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1451&course=651">Ataf Fazledin Ahamed</a> - Thursday, 18 November 2021, 10:15 PM


 

Sir,<br /><br />The spec says "<b>During upload and download, the client will be able to browse other features of the server.</b>"<br /><br />Do we have to consider the scenario where a student can download and upload files simultaneously?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Friday, 19 November 2021, 11:26 PM


 

Parallel download and upload is not required. Just assume you will be able to download/ upload files and perform other simple tasks like lookup and view messages simultaneously .









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1461&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1461&course=651">MAHDI HASNAT SIYAM</a> - Friday, 19 November 2021, 2:37 PM


 

Sir,Can we use multiple socket in client side, so that we can download files and get list of students simultaneously?If not please give us a hint how we can implement bonus task 1.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Friday, 19 November 2021, 11:29 PM


 

For bonus tasks, you are expected to think of and design the solution. No hints :(. 









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1508&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1508&course=651">Prantik  Paul</a> - Saturday, 20 November 2021, 11:03 AM


 

Dear sir, 
I am having a hard time understanding the concept of buffer overflow and when the system doesn't let a user transmit files. 
I have opened a server and am creating a new thread each time a user logs in. I have the following confusions : 
<br />
1. The buffer holds the chunks received. If the buffer is in the corresponding threads, it will hold the chunks from that user only. This will not cause a overflow.  If the buffer is in the main server and the input and output streams are in the corresponding threads, then wouldn't it be chaotic to throw the chunks back and forth between the threads and the main server? 
What would exactly cause a overflow? 
<br />
2. If the buffer is in the main server, it might hold chunks from many users at a time and would not be distinguishable? Wouldn't it corrupt the file? 
<br />
3. Shouldn't we write the chunks to our main storage as we receive them and delete them later if any problems occur? As that's what happens when we try to download a file from the internet. ( It's something I have observed, I might be wrong)
<br />
It would be very helpful if you could help me understand this. 








<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Saturday, 20 November 2021, 12:38 PM


 

1 & 2.  In this assignment, the buffer size is a logical construct. You are correct, chunks should be stored and handled by the corresponding user's thread. Buffer size is just an integer to indicate the upper bound of the sum of all the buffers currently in use.  Say your server's buffer size is 4KB (just a number). You have 6 active users. Three of the users are uploading files of sizes 1KB, 1KB, and 2KB respectively. When another user wants to upload a file of 2KB, you will first check the amount of available buffer (4-3) = 1KB. In this case, assuming buffer overflow you will not let the user upload that file.<br />3. Your observation is right. Browsers maintain a temp file in the local storage. But for this assignment, we are assuming chunks will reside in memory.<br />









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1449&course=651">Apurba Saha</a> - Sunday, 21 November 2021, 11:42 PM


 

Sir,1. As the spec says "View all the unread messages" so may I assume I can delete the message once it is read ? 2. Is it allowed to use multiple socket for a single client? 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Monday, 22 November 2021, 3:18 AM


 

1. Yes2. Yes, you can do that. But make sure to handle and maintain them under the same student ID and do not forget to properly close the connections.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1458&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1458&course=651">Farhana Khan</a> - Monday, 22 November 2021, 6:36 AM


 

Sir, is it allowed to keep multiple socket connections under the same student ID alive simultaneously? 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Wednesday, 24 November 2021, 2:10 PM


 

You can. But those socket connections must be maintained by the same client program(i.e. you are not allowed to run a new program for the same student ID).













<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1457&course=651">Fatima Nawmi</a> - Monday, 22 November 2021, 12:20 AM


 

Sir,I have the following queries about the offline, <br />1. For sending a file in chunks is it enough to keep one byte array and read the file in the mentioned chunk size and immediately send that chunk? Or should different byte arrays containing chunks should be created at first and then be sent one by one?
2. When the server receives a file from the client, we have to add the size of the chunks to verify the file size, for this do we have to store the different chunks? Or for each chunk received storing the size of that chunk in a variable would be enough?
3. For ensuring transmission gets cancelled in 30 seconds if the server does not send an acknowledgement , if I give a read command from the client side and the server somehow never sends any message the client will keep waiting for that message, I have tried using timer with a combination of the server sends a message whether not it receives a chunk so that the client knows what happened, but this method does not seem ideal for cases where the server completely fails to send a message, can you please give me any hint as to how should this requirement be accomplished ?







<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Monday, 22 November 2021, 3:15 AM


 

1. You can choose the first option. Just ensure that you receive ack from the server before sending out the next byte array.2. You can track the size using a variable. But all the chunks will also be available to you. The chunks will be written to a file only if they pass the size check.3. There is a socket-related function named setSoTimeout ( https://docs.oracle.com/javase/7/docs/api/java/net/Socket.html#setSoTimeout(int) ) which can be used to throw exceptions if nothing is read for a certain period of time. You can try to utilize it.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=651">Fahim  Faysal</a> - Monday, 22 November 2021, 6:29 PM


 

Sir, how will we check if multiple requests are for the same  file or if an uploaded file matches a request? The request object has RequestID, and FIle Description. Is the file description supposed to be the filename and can we just match against that?Or is the file description composed of multiple fields including a separate string field for the filename?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Wednesday, 24 November 2021, 12:27 AM


 

*how will we check if multiple requests are for the same file<br />*>>> You do not need to. File desc is just a string (e.g. Please share CSE 322 Class Notes). Multiple persons may request for the same file with their own desc. All of these will be considered independent requests. On the other hand, two persons may upload different files for the same request (e.g. both may upload their own class notes). The person who requested will be notified of both the files and can download any or all of them. *if an uploaded file matches a request*>>> The uploader is required to mention request ID if the file is being uploaded against a request. (Mentioned in the assignment description)<br />









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1429&course=651">Nazmul Takbir</a> - Monday, 22 November 2021, 8:39 PM


 

Sir, I have some questions regarding the requirement that each student should have a different IP address.1. If the server is running on laptop A and a student has logged in using laptop B, then can another student log in using laptop B? Both the students in laptop B have the same IP address but different port number. So I think two students cannot log in using the same laptop, but I am not sure.2. I am unable to simulate multiple IPs in the same laptop. I am running the server in 127.0.0.0 port 9999, and I am trying run a client on 127.0.0.1 port 10000. But I am getting Network Unreachable error.  





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Wednesday, 24 November 2021, 12:36 AM


 

1. In the assignment description, we have relaxed the constraint so that you can test easily with a single machine. Check the following line in the description.*"Update: For the ease of implementation and testing, you may drop the IPaddress constraint. Just ensure
that no student is connected with multiple clients at the same time."*<br />The current requirement is that a student can not have multiple sessions concurrently. Two or more students can log in from the same machine with different ports [Otherwise, it is difficult for many of you to test and debug with multiple devices]. In a real-world application, you would probably not allow this.2. You do not need to. Check the answer of 1.









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1506&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1506&course=651">Abrar Shariare</a> - Wednesday, 24 November 2021, 5:16 PM


 

Sir,I have a question regarding the messaging feature.Should a file request be broadcasted to only currently enrolled(at least once logged in) students or to all future new logins as well? And if the former implementation will be sufficient?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Wednesday, 24 November 2021, 8:49 PM


 

Only the former would be sufficient









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1442&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1442&course=651">Iftekhar Hakim Kaowsar</a> - Thursday, 25 November 2021, 7:09 PM


 

Sir, when a message is broadcasted to all connected users, is it necessary to send it to their client side immediately? Or can we find their corresponding unread messages from server end when client requests to see them?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651"></a>
Re: Assignment 1 Issues
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1882&course=651">Md. Toufikuzzaman</a> - Thursday, 25 November 2021, 9:18 PM


 

 You can "find their corresponding unread messages from server end when a client requests to see them".<br />











<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429"></a>
Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429">Preetom Saha Arko</a> - Tuesday, 9 July 2019, 12:17 PM


 

<a href="..%5C..%5CGraph%20Offline%20Assignment">Graph offline</a> has been uploaded. All subsections (A1, A2, B1, B2) should follow the same instructions.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1443&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1443&course=429">Sheikh Azizul Hakim</a> - Wednesday, 10 July 2019, 2:59 PM


 

Sir, will the graph contain multiple edges or self loop?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429">Preetom Saha Arko</a> - Thursday, 11 July 2019, 12:23 AM


 

Multiple edges or self loops shouldn't create any complication during the implementation of the tasks mentioned. Is there any complication? 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1442&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1442&course=429">Iftekhar Hakim Kaowsar</a> - Friday, 12 July 2019, 3:44 AM


 

When the graph is weighted,1) should the run-time of BFS still be O(V+E) ?2)If not,are we allowed to use priority queue in BFS?<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429">Preetom Saha Arko</a> - Friday, 12 July 2019, 11:16 AM


 

You needn't find the shortest path. Just run BFS. It should be the same as done for unweighted graph.





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1442&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1442&course=429">Iftekhar Hakim Kaowsar</a> - Friday, 12 July 2019, 11:37 AM


 

In that case,what will getDist(u,v) do?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429">Preetom Saha Arko</a> - Friday, 12 July 2019, 5:01 PM


 

BFS is just an algorithm. It can be applied to any graph, whether it is directed or undirected. To find getDist(u,v) for weighted graph, you cannot depend on BFS. In that case, you may need to use Priority Queue and apply Dijkstra algorithm. Implement Priority Queue by yourself. 





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=429">Fahim  Faysal</a> - Friday, 12 July 2019, 6:50 PM


 

Sir, for weighted graphs, Djikstra does not work if the weights are negative. Do we need to handle negative weights as well?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429">Preetom Saha Arko</a> - Friday, 12 July 2019, 7:24 PM


 

You can assume that weights are positive here. 





















<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1454&course=429">Fahim  Faysal</a> - Thursday, 11 July 2019, 7:48 PM


 

Sir the function getdegree() for task 3 has a function signature:int getDegree(int u);<br />But the one in the task description is different:*int getDegree(int u, bool out=true)*: <br />It's not possible to implement both in and out degrees without the bool parameter. Can we change the function?





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429">Preetom Saha Arko</a> - Thursday, 11 July 2019, 8:06 PM


 

Sorry for the mistake. Add the bool parameter to your code. 









<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1490&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1490&course=429">1705009 - Shayekh Bin Islam</a> - Saturday, 13 July 2019, 6:03 PM


 

Sir, please allow to code in code-blocks project rather that in single file. Single file tasks are being very difficult to maintain when the code is lengthy.<br />





<a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429"></a>
Re: Graph Offline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1764&course=429">Preetom Saha Arko</a> - Saturday, 13 July 2019, 6:29 PM


 

Multiple files are okay. But all the files must be put in a single folder and the zipped version of the folder should be uploaded. 











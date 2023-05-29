<h2>News forum</h2><a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=651"></a>
NS3 Update 2 - Simulating a Baseline
by <a href="https://moodle.cse.buet.ac.bd/user/view.php?id=1767&course=651">Md. Tareq Mahmood</a> - Saturday, 5 February 2022, 12:32 PM


 

Next week we will measure the performance before applying the modifications you proposed. You have to run at least one simulation and show at least one performance metric (throughput/goodput/packet drop ratio/others).<br />Instructions:<ul><li>If your proposed algorithm is based on wireless, you have to simulate on wireless (either 802.11 or 802.15.4). If your proposed algorithm is based on a wired network,  you have to simulate on wired.</li><li>Place at least 10 nodes. You can place them randomly or grid-wise or anyhow you like.</li><li>Set topology is a way that there will be at least 3 networks (Except Ad-Hoc). Set IP address to nodes as you wish.</li><li>Create at least 6 flows. For each flow, you can choose source IP, destination IP, source port, and destination port as you wish. </li><li>Do not apply your modifications yet. Setup the simulation so that we can measure modifications later. For example, say you are working on a modification of TCP Reno. Just use built-in TCP Reno in your simulation. Another example is to say you are working on a modification of AODV. Just use the built-in AODV in your simulation. </li><li>Try to follow the experimental setup of your paper as much as possible (number nodes, routing protocol, queueing mechanism, etc.). Use only the built-in components of NS3. If you cannot find the exact component in NS3, use the most similar one. If the paper is not specific about any component, use any component that seems logical to you.</li><li>Lastly, prepare a short presentation about the setup of your simulation (what topology you used, number of nodes, number of flows, routing protocol, TCP congestion algorithm, queue disk, etc.), and the performance metric you calculated.</li></ul><br />Tips:<ul><li>Try to write an easily modifiable code. For example, store number of nodes/flows in variables. This will help you later in generating results varying these.</li><li>Try to find all the performance metrics. This will help you in later updates.</li><li>In your final update, you have to show the difference in performance before and after your proposed modifications. This is optional, but you can simulate the scenario that will show the effect of your modifications later. </li><li>This is optional, but you can try to automate your simulation so that by simply running a shell script a simulation result will be generated and plotted in a graph. Again, this will save time in later updates.</li></ul>







<h2><a href="https://leetcode.com/problems/merge-in-between-linked-lists/">1669. Merge In Between Linked Lists</a></h2><h3>Medium</h3><hr><div><p class="bv-p-translate">You are given two linked lists: <code>list1</code> and <code>list2</code> of sizes <code>n</code> and <code>m</code> respectively.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none;">↳</bv-p-translate-btn></p>

<p class="bv-p-translate">Remove <code>list1</code>'s nodes from the <code>a<sup>th</sup></code> node to the <code>b<sup>th</sup></code> node, and put <code>list2</code> in their place.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none;">↳</bv-p-translate-btn></p>

<p class="bv-p-translate">The blue edges and nodes in the following figure indicate the result:<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none;">↳</bv-p-translate-btn></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/05/fig1.png" style="height: 130px; width: 504px;">
<p><em>Build the result list and return its head.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/05/merge_linked_list_ex1.png" style="width: 406px; height: 140px;">
<pre><strong>Input:</strong> list1 = [0,1,2,3,4,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
<strong>Output:</strong> [0,1,2,1000000,1000001,1000002,5]
<strong>Explanation:</strong> We remove the nodes 3 and 4 and put the entire list2 in their place. The blue edges and nodes in the above figure indicate the result.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/05/merge_linked_list_ex2.png" style="width: 463px; height: 140px;">
<pre><strong>Input:</strong> list1 = [0,1,2,3,4,5,6], a = 2, b = 5, list2 = [1000000,1000001,1000002,1000003,1000004]
<strong>Output:</strong> [0,1,1000000,1000001,1000002,1000003,1000004,6]
<strong>Explanation:</strong> The blue edges and nodes in the above figure indicate the result.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= list1.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= a &lt;= b &lt; list1.length - 1</code></li>
	<li><code>1 &lt;= list2.length &lt;= 10<sup>4</sup></code></li>
</ul>
</div>
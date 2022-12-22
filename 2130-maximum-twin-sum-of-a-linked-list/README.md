<h2><a href="https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/">2130. Maximum Twin Sum of a Linked List</a></h2><h3>Medium</h3><hr><div><p>In a linked list of size <code>n</code>, where <code>n</code> is <strong>even</strong>, the <code>i<sup>th</sup></code> node (<strong>0-indexed</strong>) of the linked list is known as the <strong>twin</strong> of the <code>(n-1-i)<sup>th</sup></code> node, if <code>0 &lt;= i &lt;= (n / 2) - 1</code>.</p>

<ul>
	<li>For example, if <code>n = 4</code>, then node <code>0</code> is the twin of node <code>3</code>, and node <code>1</code> is the twin of node <code>2</code>. These are the only nodes <bvtag class=""><bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag></bvtag> twins for <code>n = 4</code>.</li>
</ul>

<p class="bv-p-translate">The <strong>twin sum </strong>is defined as the sum of a node and its twin.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none;">↳</bv-p-translate-btn></p>

<p class="bv-p-translate">Given the <code>head</code> of a linked list <bvtag class=""><bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag></bvtag> even length, return <em>the <strong>maximum twin sum</strong> of the linked list</em>.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none;">↳</bv-p-translate-btn></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/03/eg1drawio.png" style="width: 250px; height: 70px;">
<pre><strong>Input:</strong> head = [5,4,2,1]
<strong>Output:</strong> 6
<strong>Explanation:</strong>
Nodes 0 and 1 are the twins of nodes 3 and 2, respectively. All have twin sum = 6.
There are no other nodes <bvtag class=""><bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag></bvtag> twins in the linked list.
Thus, the maximum twin sum of the linked list is 6. 
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/03/eg2drawio.png" style="width: 250px; height: 70px;">
<pre><strong>Input:</strong> head = [4,2,2,3]
<strong>Output:</strong> 7
<strong>Explanation:</strong>
The nodes <bvtag class=""><bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag></bvtag> twins present in this linked list are:
- Node 0 is the twin of node 3 having a twin sum of 4 + 3 = 7.
- Node 1 is the twin of node 2 having a twin sum of 2 + 2 = 4.
Thus, the maximum twin sum of the linked list is max(7, 4) = 7. 
</pre>

<p><strong class="example">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/03/eg3drawio.png" style="width: 200px; height: 88px;">
<pre><strong>Input:</strong> head = [1,100000]
<strong>Output:</strong> 100001
<strong>Explanation:</strong>
There is only one node <bvtag class=""><bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag></bvtag> a twin in the linked list having twin sum of 1 + 100000 = 100001.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is an <strong>even</strong> integer in the range <code>[2, 10<sup>5</sup>]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
</ul>
</div>
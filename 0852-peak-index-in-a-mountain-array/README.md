<h2><a href="https://leetcode.com/problems/peak-index-in-a-mountain-array/">852. Peak Index in a Mountain Array</a></h2><h3>Medium</h3><hr><div><p class="bv-p-translate">An array <code>arr</code> a <strong>mountain</strong> if the following properties hold:<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: 0px; display: none; top: -18px;">↳</bv-p-translate-btn></p>

<ul>
	<li><code>arr.length &gt;= 3</code></li>
	<li>There exists some <code>i</code> <bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag> <code>0 &lt; i &lt; arr.length - 1</code> such that:
	<ul>
		<li><code>arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i] </code></li>
		<li><code>arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>

<p class="bv-p-translate">Given a mountain array <code>arr</code>, return the index <code>i</code> such that <code>arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code>.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none;">↳</bv-p-translate-btn></p>

<p class="bv-p-translate">You must solve it in <code>O(log(arr.length))</code> time complexity.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: 0px; display: none; top: -18px;">↳</bv-p-translate-btn></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [0,1,0]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [0,2,1,0]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> arr = [0,10,5,2]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p class="bv-p-translate"><strong>Constraints:</strong><bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: 0px; display: none; top: -18px;">↳</bv-p-translate-btn></p>

<ul>
	<li><code>3 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= arr[i] &lt;= 10<sup>6</sup></code></li>
	<li><code>arr</code> is <strong>guaranteed</strong> to be a mountain array.</li>
</ul>
</div>
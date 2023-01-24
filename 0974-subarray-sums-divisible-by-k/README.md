<h2><a href="https://leetcode.com/problems/subarray-sums-divisible-by-k/">974. Subarray Sums Divisible by K</a></h2><h3>Medium</h3><hr><div><p class="bv-p-translate">Given an integer array <code>nums</code> and an integer <code>k</code>, return <em>the number of non-empty <strong>subarrays</strong> that have a sum divisible by </em><code>k</code>.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none; position: absolute !important;">↳</bv-p-translate-btn></p>

<p class="bv-p-translate">A <strong>subarray</strong> is a <strong>contiguous</strong> part of an array.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none; position: absolute !important;">↳</bv-p-translate-btn></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [4,5,0,-2,-3,1], k = 5
<strong>Output:</strong> 7
<strong>Explanation:</strong> There are 7 subarrays <bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag> a sum divisible by k = 5:
[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [5], k = 9
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>2 &lt;= k &lt;= 10<sup>4</sup></code></li>
</ul>
</div>
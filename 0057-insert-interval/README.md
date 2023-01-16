<h2><a href="https://leetcode.com/problems/insert-interval/">57. Insert Interval</a></h2><h3>Medium</h3><hr><div><p class="bv-p-translate">You are given an array of non-overlapping intervals <code>intervals</code> where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> represent the start and the end of the <code>i<sup>th</sup></code> interval and <code>intervals</code> is sorted in ascending order by <code>start<sub>i</sub></code>. You are also given an interval <code>newInterval = [start, end]</code> that represents the start and end of another interval.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none; position: absolute !important;">↳</bv-p-translate-btn></p>

<p class="bv-p-translate">Insert <code>newInterval</code> into <code>intervals</code> such that <code>intervals</code> is still sorted in ascending order by <code>start<sub>i</sub></code> and <code>intervals</code> still does not have any overlapping intervals (merge overlapping intervals if necessary).<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none; position: absolute !important;">↳</bv-p-translate-btn></p>

<p class="bv-p-translate">Return <code>intervals</code><em> after the insertion</em>.<bv-p-translate-btn class="bv-p-translate-btn" title="Burning Vocabulary translation" style="left: -28px; display: none; position: absolute !important;">↳</bv-p-translate-btn></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> intervals = [[1,3],[6,9]], newInterval = [2,5]
<strong>Output:</strong> [[1,5],[6,9]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
<strong>Output:</strong> [[1,2],[3,10],[12,16]]
<strong>Explanation:</strong> Because the new interval [4,8] overlaps <bvtag class="memorize_new_word bv_leetcode_com bv_browserName_google_chrome  burning_vocabulary  _id_1594940668588">with</bvtag> [3,5],[6,7],[8,10].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= intervals.length &lt;= 10<sup>4</sup></code></li>
	<li><code>intervals[i].length == 2</code></li>
	<li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 10<sup>5</sup></code></li>
	<li><code>intervals</code> is sorted by <code>start<sub>i</sub></code> in <strong>ascending</strong> order.</li>
	<li><code>newInterval.length == 2</code></li>
	<li><code>0 &lt;= start &lt;= end &lt;= 10<sup>5</sup></code></li>
</ul>
</div>
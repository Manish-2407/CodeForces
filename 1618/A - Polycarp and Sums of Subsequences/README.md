<h2><a href="https://codeforces.com/contest/1618/problem/A" target="_blank" rel="noopener noreferrer">1618A — Polycarp and Sums of Subsequences</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1618A](https://codeforces.com/contest/1618/problem/A) |

## Topics
`math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Polycarp and Sums of Subsequences</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp had an array $$$a$$$ of $$$3$$$ <span class="tex-font-style-bf">positive</span> integers. He wrote out the sums of all non-empty subsequences of this array, sorted them in non-decreasing order, and got an array $$$b$$$ of $$$7$$$ integers.</p><p>For example, if $$$a = \{1, 4, 3\}$$$, then Polycarp wrote out $$$1$$$, $$$4$$$, $$$3$$$, $$$1 + 4 = 5$$$, $$$1 + 3 = 4$$$, $$$4 + 3 = 7$$$, $$$1 + 4 + 3 = 8$$$. After sorting, he got an array $$$b = \{1, 3, 4, 4, 5, 7, 8\}.$$$</p><p>Unfortunately, Polycarp lost the array $$$a$$$. He only has the array $$$b$$$ left. Help him to restore the array $$$a$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of test cases.</p><p>Each test case consists of one line which contains $$$7$$$ integers $$$b_1, b_2, \dots, b_7$$$ ($$$1 \le b_i \le 10^9$$$; $$$b_i \le b_{i+1}$$$). </p><p><span class="tex-font-style-bf">Additional constraint on the input: there exists at least one array $$$a$$$ which yields this array $$$b$$$ as described in the statement</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$3$$$ integers — $$$a_1$$$, $$$a_2$$$ and $$$a_3$$$. If there can be several answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007884314325863452" id="id006858322213658832" class="input-output-copier">Copy</div></div><pre id="id007884314325863452">5
1 3 4 4 5 7 8
1 2 3 4 5 6 7
300000000 300000000 300000000 600000000 600000000 600000000 900000000
1 1 2 999999998 999999999 999999999 1000000000
1 2 2 3 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002700664550049173" id="id009614412634131757" class="input-output-copier">Copy</div></div><pre id="id002700664550049173">1 4 3
4 1 2
300000000 300000000 300000000
999999998 1 1
1 2 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The subsequence of the array $$$a$$$ is a sequence that can be obtained from $$$a$$$ by removing zero or more of its elements.</p><p>Two subsequences are considered different if index sets of elements included in them are different. That is, the values of the elements don't matter in the comparison of subsequences. In particular, any array of length $$$3$$$ has exactly $$$7$$$ different non-empty subsequences.</p></div>
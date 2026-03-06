# Consecutive Duplicate Remover

## সমস্যার বিবরণ

তোমাকে একটি স্ট্রিং S দেওয়া হয়েছে। স্ট্রিং থেকে সবগুলো **consecutive duplicate character** মুছে ফেলে নতুন স্ট্রিং প্রিন্ট করতে হবে।

- ✅ পরপর একই অক্ষর → সরাতে হবে
- ❌ Non-consecutive duplicate → সরানো যাবে না

---

## Input Format
```
T
n
S
```

- প্রথম লাইনে একটি পূর্ণসংখ্যা T দেওয়া থাকবে — টেস্ট কেসের সংখ্যা।

- প্রতিটি টেস্ট কেসের জন্য:

- প্রথম লাইনে একটি পূর্ণসংখ্যা n দেওয়া থাকবে — স্ট্রিংয়ের দৈর্ঘ্য।

- পরের লাইনে একটি স্ট্রিং S দেওয়া থাকবে।

## Constraints
```
1 ≤ T ≤ 10⁴
1 ≤ n ≤ 10⁵
সব টেস্ট কেস মিলিয়ে মোট দৈর্ঘ্য ≤ 10⁶
```

## Output Format

প্রতিটি টেস্ট কেসের জন্য আলাদা লাইনে ফলাফল প্রিন্ট করো।

---

## Sample Input 0
```
4
9
aaabbcddd
4
abcd
6
aabbcc
11
xxxyyyzzzaa
```

## Sample Output 0
```
abcd
abcd
abc
xyza
```

---

## Explanation

| Input | প্রক্রিয়া | Output |
|-------|----------|--------|
| `aaabbcddd` | aaa→a, bb→b, ddd→d | `abcd` ✅ |
| `abcd` | কোনো duplicate নেই | `abcd` ✅ |
| `aabbcc` | aa→a, bb→b, cc→c | `abc` ✅ |
| `xxxyyyzzzaa` | xxx→x, yyy→y, zzz→z, aa→a | `xyza` ✅ |

---
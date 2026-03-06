# Armstrong Number Checker

## সমস্যার বিবরণ

তোমাকে একটি ধনাত্মক পূর্ণসংখ্যা `n` দেওয়া হবে। তোমাকে চেক করতে হবে সংখ্যাটি **Armstrong Number** কিনা।

---

## Input Format

- প্রথমে একটি পূর্ণসংখ্যা `T` — test case এর সংখ্যা `(1 ≤ T ≤ 10)`
- পরবর্তী `T` লাইনে প্রতিটি লাইনে একটি পূর্ণসংখ্যা `n` দেওয়া থাকবে।

## Constraints
```
1 ≤ n ≤ 10¹⁸
1 ≤ T ≤ 10
```

## Output Format

প্রতিটি test case এর জন্য আলাদা লাইনে আউটপুট দিতে হবে।

- যদি সংখ্যাটি Armstrong Number হয় → `Armstrong`
- অন্যথায় → `Not Armstrong`

> Output অবশ্যই case-sensitive।

---

## Sample Input
```
2
153
1234
```

## Sample Output
```
Armstrong
Not Armstrong
```

---

## Explanation

| সংখ্যা | হিসাব | ফলাফল |
|--------|-------|-------|
| 153 | 1³ + 5³ + 3³ = 153 | Armstrong ✅ |
| 1234 | 1⁴ + 2⁴ + 3⁴ + 4⁴ = 354 ≠ 1234 | Not Armstrong ❌ |

---
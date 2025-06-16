# Euclidean Algorithm

The **Euclidean algorithm** is an efficient method for computing the **greatest common divisor (GCD)** of two integers. It is based on the principle that the GCD of two numbers does not change if the larger number is replaced by its difference with the smaller number. The algorithm repeatedly applies the division algorithm until the remainder is zero, and the last non-zero remainder is the GCD.

## How it works:

1. **Divide:**  
   Divide the larger number (`a`) by the smaller number (`b`) and find the remainder (`r`).

2. **Replace:**  
   Replace the larger number (`a`) with the smaller number (`b`), and the smaller number (`b`) with the remainder (`r`).

3. **Repeat:**  
   Repeat steps 1 and 2 until the remainder (`r`) is zero.

4. **GCD:**  
   The last non-zero remainder is the greatest common divisor (GCD) of the original two numbers.

---

## Example

Let's find the GCD of **48** and **18** using the Euclidean algorithm:

- \( 48 \div 18 = 2 \) remainder **12**  
  → \( 48 = 2 \times 18 + 12 \)

- Replace 48 with 18, and 18 with 12:  
  \( 18 \div 12 = 1 \) remainder **6**  
  → \( 18 = 1 \times 12 + 6 \)

- Replace 18 with 12, and 12 with 6:  
  \( 12 \div 6 = 2 \) remainder **0**  
  → \( 12 = 2 \times 6 + 0 \)

The remainder is now 0, so the **GCD is the last non-zero remainder**, which is **6**.

**Therefore, the GCD of 48 and 18 is 6.**

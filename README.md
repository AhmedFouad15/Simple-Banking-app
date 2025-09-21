```

# 🏧 ATM Machine in C

A simple **ATM simulation program** written in C that allows users to manage a virtual balance.  
The program provides options for deposits, withdrawals, loans, and staking with compound interest.

---

## 📌 Features
- ✅ **Check Balance** – View current balance  
- ✅ **Deposit** – Add funds to your account  
- ✅ **Withdraw** – Safely withdraw without exceeding balance  
- ✅ **Loan** – Borrow money with 18% annual interest (1, 3, or 5 years)  
- ✅ **Staking** – Calculate compound interest on savings  
- ✅ **Exit** – Quit the ATM system  

---

## 🖥️ How It Works
1. On launch, the ATM menu is displayed.  
2. The user chooses an option (1–6).  
3. Each operation updates or displays account details.  
4. The menu loops until the user exits.  

---

## 📷 Program Demo (Example Output)
```

\*\*\* Welcome to the ATM Machine \*\*\*

Please choose an option

1. Check Balance
2. Deposit
3. Withdraw
4. Loan
5. Staking
6. Exit

What is your option?:

````

---

## 🛠️ Installation & Run
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/atm-machine-c.git
````

2. Navigate to the project folder:

   ```bash
   cd atm-machine-c
   ```
3. Compile the program:

   ```bash
   gcc atm.c -o atm -lm
   ```

   > `-lm` is required for the math library (`pow`).
4. Run the program:

   ```bash
   ./atm
   ```

---

## 📂 File Structure

```
atm-machine-c/
│── atm.c        # Main ATM program source code
│── README.md    # Project documentation
```

---

## 🚀 Future Improvements

* Add **PIN authentication**
* Save balance to a file (persistent storage)
* Improve loan and staking calculations


---

👨‍💻 Created with ❤️ in C

```

Do you want me to also add **badges and shields** (like "Made with C", "License", etc.) to make it look more professional for GitHub?
```

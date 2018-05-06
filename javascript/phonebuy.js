/* This is a program that prompts for the user bank account balance,
   phone price and accessory prices. Then check if the user can buy the phone
   and make a purchase adding taxes. Repeat the same steps for accessory.
   Then loops buying phones and accessories until we can't. */

// Define current taxes
const TAX = 0.08;
let balance = 0;
let phone = 0;
let acc = 0;
// Prompt and validate for balance, phone price and accessory price in euros.
do {
    balance = Number(prompt("Enter your current account balance: \u20ac "));
}
while (isNaN(balance));
do {
    phone = Number(prompt("Enter the phone price: \u20ac "));
}
while (isNaN(phone));
do {
    acc = Number(prompt("Enter the accessory price: \u20ac "));
}
while (isNaN(acc));

// Add taxes.
phone += (phone * TAX);
acc += (acc * TAX);
let combo = phone + acc;          // Phone + accessories

console.log(phone + " " + acc + " " + combo);

// Counters for bought phones, accessories and store initial balance
let p = 0;
let a = 0;
balance.toFixed(2);
let initial = balance;

// Check if user can buy combo and buy
while (balance >= combo) {
  balance -= combo;
  p++;
  a++;
}

// If not, check if user can buy just phone and buy
while (balance >= phone) {
  balance -= phone;
  p++;
}

// Print total purchase amount and balance leftovers.
console.log("Your total purchase amount: \u20ac " + (initial - balance).toFixed(2));
console.log("You bought " + p + " phones.");
console.log("And " + a + " accessories. Your balance is now: \u20ac " + balance.toFixed(2));

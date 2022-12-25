#include <cmath>
#include <iostream>

/*
This program calculates the price of a European call option with the following parameters:

S: The spot price of the underlying asset
K: The strike price of the option
r: The risk-free interest rate
sigma: The volatility of the underlying asset
T: The time to expiration in years
The blackScholesCall function uses the Black-Scholes formula to calculate the price of the option, and the main function prints the result to the console.
*/

// Calculate the price of a European call option using the Black-Scholes formula
double blackScholesCall(double S,  // spot price of the underlying asset
                        double K,  // strike price of the option
                        double r,  // risk-free interest rate
                        double sigma, // volatility of the underlying asset
                        double T)  // time to expiration in years
{
  double d1 = (log(S / K) + (r + sigma * sigma / 2) * T) / (sigma * sqrt(T));
  double d2 = d1 - sigma * sqrt(T);
  double callPrice = S * std::normcdf(d1) - K * exp(-r * T) * std::normcdf(d2);
  return callPrice;
}

int main()
{
  double S = 100.0;   // spot price of the underlying asset
  double K = 110.0;   // strike price of the option
  double r = 0.05;    // risk-free interest rate
  double sigma = 0.2; // volatility of the underlying asset
  double T = 1.0;     // time to expiration in years

  double callPrice = blackScholesCall(S, K, r, sigma, T);
  std::cout << "The price of the call option is: " << callPrice << std::endl;

  return 0;
}


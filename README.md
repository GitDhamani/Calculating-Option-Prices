# Calculating-Option-Prices
Calculating Option Prices using the Black-Scholes Model and C++

A put option is a financial contract that gives the holder the right, but not the obligation, to sell a specified quantity of an underlying asset at a predetermined price (the strike price) on or before a specified date (the expiration date).

For example, suppose you own a put option on 100 shares of a particular stock with a strike price of £50 per share and an expiration date of three months from now. If the stock is trading at £40 per share when the option expires, you have the right to sell your 100 shares at £50 per share, even though the market price is lower. This allows you to profit from the difference between the strike price and the market price.

On the other hand, if the stock is trading at £60 per share when the option expires, you are not obligated to sell your shares, and you do not exercise your option. In this case, the option expires worthless.

Put options are typically used as a way to hedge against market downturns or to profit from falling prices. They are the opposite of call options, which give the holder the right to buy an underlying asset at a predetermined price.

A call option is a financial contract that gives the holder the right, but not the obligation, to buy a specified quantity of an underlying asset at a predetermined price (the strike price) on or before a specified date (the expiration date).

For example, suppose you own a call option on 100 shares of a particular stock with a strike price of £50 per share and an expiration date of three months from now. If the stock is trading at £60 per share when the option expires, you have the right to buy your 100 shares at £50 per share, even though the market price is higher. This allows you to profit from the difference between the strike price and the market price.

On the other hand, if the stock is trading at £40 per share when the option expires, you are not obligated to buy the shares, and you do not exercise your option. In this case, the option expires worthless.

Call options are typically used as a way to speculate on rising prices or to hedge against market risks. They are the opposite of put options, which give the holder the right to sell an underlying asset at a predetermined price.

The black scholes model is used to determine the price of calls and puts in the options market.
Here I have shown how to use C++ to calculate the relative pricing by passing the parameters into the formula.
Values like the spot and strike prices are assumed, as well as the underlying and implied volatility which I have also assumed.

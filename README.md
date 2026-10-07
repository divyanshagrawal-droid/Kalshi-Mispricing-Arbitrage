# Kalshi Mispricing & Arbitrage Engine

A C++ research and simulation engine for detecting mispricing
and arbitrage opportunities in Kalshi prediction markets.

> **Status:** Planning / Early Development

> **Disclaimer:** This project is for research and educational purposes only.
> It is not financial advice. Trading involves risk of loss.

## Goal

Build a system that scans Kalshi markets, identifies pricing inefficiencies,
and evaluates whether potential opportunities are actually profitable after
fees, slippage, liquidity constraints, and execution costs.

## Planned Approach

1. **Intra-market arbitrage**
   - Identify cases where YES ask + NO ask < $1 after applicable costs.

2. **Structural mispricing**
   - Detect violations of logical relationships between related contracts.

3. **Model-based mispricing**
   - Compare market-implied probabilities with model-derived fair values.

4. **Cross-platform arbitrage**
   - Research price differences between Kalshi and other prediction markets.

## Project Components

- Market data ingestion
- Order book analysis
- Mispricing detection
- Arbitrage opportunity detection
- Profit estimation
- Risk management
- Execution simulation
- Backtesting
- Performance analysis

## Tech Stack

- C++
- C++20
- Git
- GitHub

## Project Structure

```text
Kalshi-Mispricing-Arbitrage/
│
├── data/
├── docs/
├── include/
├── src/
├── tests/
├── main.cpp
├── README.md
└── .gitignore
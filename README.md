# Kalshi Mispricing & Arbitrage

A research project to detect mispriced contracts and arbitrage opportunities on [Kalshi](https://kalshi.com) prediction markets.

> 🚧 **Status: Planning / early development.** The repository is just getting started. Code, setup instructions and usage docs will be added as the project progresses.

> ⚠️ **Disclaimer:** This project is for research and educational purposes only. It is not financial advice. Trading involves risk of loss.

---

## Goal

Build a system that scans Kalshi markets, finds pricing inefficiencies, and evaluates whether they are actually profitable **after fees, slippage and liquidity constraints**.

## Planned approach

1. **Intra-market arbitrage** – cases where `YES ask + NO ask < $1.00` after fees.
2. **Structural mispricing** – related contracts that violate logical constraints (e.g. threshold ladders that break monotonicity, mutually exclusive outcomes that don't sum to 100%).
3. **Model-based mispricing** – contracts priced far from a model-implied fair probability.
4. **Cross-platform arbitrage** – comparing Kalshi against other prediction markets (stretch goal).

## Planned components

- Market data ingestion (Kalshi API: markets, orderbooks, trades)
- Fee and net-edge calculator
- Opportunity detectors
- Backtesting on historical data
- Paper trading, then risk-limited execution

## Roadmap

- [ ] Set up project structure and Kalshi API client
- [ ] Fetch and store market and orderbook data
- [ ] Implement fee-aware edge calculation
- [ ] Build first detector (intra-market arbitrage)
- [ ] Backtesting framework
- [ ] Paper trading mode
- [ ] Documentation and usage guide

## Tech stack

To be decided.

## License

To be decided.

## Author

**Divyansh Agrawal** — [GitHub](https://github.com/divyanshagrawal-droid)

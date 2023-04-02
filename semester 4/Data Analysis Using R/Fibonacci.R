n <- 10
fibonacci <- numeric(n)
fibonacci[1] <- 1
fibonacci[2] <- 1
for (i in 3:n)
{
    fib[i] <- fib[i - 1] + fib[i - 2]
}
print(fibonacci)

n <- 10
fib <- numeric(n)
fib[1] <- 1
fib[2] <- 1
for (i in 3:n)
{
    fib[i] <- fib[i - 1] + fib[i - 2]
}
print(fib)


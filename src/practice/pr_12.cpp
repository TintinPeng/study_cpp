int func(int n)
{
        if (n <= 1)
                return 1;
        return n * func(n - 1);
}

int func(int n)
{
        int i = 0, sum = 0;
        while (sum < n)
                sum += ++i;
        return i;
}

void func(int n)
{
        int i = 0;
        while (i * i * i <= n)
                i++;
}

x = 0;
while (n >= (x + 1) * (x + 1))
        x = x + 1;
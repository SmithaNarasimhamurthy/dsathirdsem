//Different from the one in the manual

void move(int n, char s, char d)
{
    printf("\nMove disk %d from %c to %c", n, s, d);
}

void hanoi(int n, char s, char a, char d)
{
    if (n == 1)
        move(n, s, d);
    else
    {
        hanoi(n - 1, s, d, a);
        move(n, s, d);
        hanoi(n - 1, a, s, d);
    }
}

void main()
{
    int n;
    printf("\nEnter the number of disks:");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
}
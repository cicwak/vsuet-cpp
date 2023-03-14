bool isNumberInMassive(int k, int massive[], int size, int n = 1) {

    int counts_ = 0;

    for (int i=0;i<size;i++)
    {
        if (k==massive[i])
        {
            counts_++;
        }
    }

    return (n == counts_);
}
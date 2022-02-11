pair<long long, long long> getMinMax(long long a[], int n) {
    
int i;
long long min = a[0],max = a[0];

for (i = 0;i<n;i++) {
    if (min > a[i]) min = a[i];
    if (max < a[i]) max = a[i];
}

pair<long long, long long> MINMAX;
MINMAX = make_pair(min,max);

return MINMAX;

}
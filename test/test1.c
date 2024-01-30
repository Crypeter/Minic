int a = 10;
int b();
void c(){

}
int MergeSort(int arr[100], int tmp[100], int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;    
        MergeSort(arr, tmp, start, mid);
        MergeSort(arr, tmp, mid + 1, end);
        Merge(arr, tmp, start, mid, end);
    }
}
int Merge(int arr[100], int tmp[100], int start, int mid, int end)
{
    int i = start, j = mid + 1, k = start;
    while (i != mid + 1 && j != end + 1)
    {
        if (arr[i] >= arr[j]){
            tmp[k] = arr[j];
            k = k + 1;
            j = j + 1;
        }
        else{
            tmp[k] = arr[i];
            k = k + 1;
            i = i + 1;
        }
    }
    while (i != mid + 1){
        tmp[k] = arr[i];
        k = k + 1;
        i = i + 1;
    }
    while (j != end + 1){
        tmp[k] = arr[j];
        k = k + 1;
        j = j + 1;
    }
    i = start;
    while(i <= end){
        arr[i] = tmp[i];
        i = i + 1;
    }
}
int main(){
    int a;
}
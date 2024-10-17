template <typename T>
int Partition(T* arr, int low, int high) {
    T pivot = arr[high];  
    int i = (low - 1);    

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    T temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

template <typename T>
void QuickSort(T* arr, int low, int high) {
    if (low < high) {
        int pi = Partition(arr, low, high);

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

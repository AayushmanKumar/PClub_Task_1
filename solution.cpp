#include <iostream>
using namespace std;
int arr[105];
bool arrived[105][105];
int currentDiff[105][105];

int leftSide(int left, int right);
int rightSide(int left, int right);

int bestDiff(int left, int right)
{
    if (left > right)
        return 0;
    
    int &diff = currentDiff[left][right];
    if (!arrived[left][right])
    {
        // Try both sides, and choose the best
        diff = max(leftSide(left, right), rightSide(left, right));
        
        arrived[left][right] = true;
    }
    
    return diff;
}

int leftSide(int left, int right)
{
    int currentSum = arr[left];
    int best = currentSum - bestDiff(left + 1, right);
    
    for (int i = left + 1; i <= right; ++i)
    {
        currentSum += arr[i];
        int next = currentSum - bestDiff(i + 1, right);
        if (next > best)
            best = next;
    }
    
    return best;
}

int rightSide(int left, int right)
{
    int currentSum = arr[right];
    int best = currentSum - bestDiff(left, right - 1);
    
    for (int i = right - 1; i >= left; --i)
    {
        currentSum += arr[i];
        int next = currentSum - bestDiff(left, i - 1);
        if (next > best)
            best = next;
    }
    
    return best;
}


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
    	int N;
    	cin >> N;
        for (int i = 0; i < N; ++i)
            cin >> arr[i];    
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                arrived[i][j] = false;
            }
        }
        cout << bestDiff(0, N - 1) << '\n';
    }
}


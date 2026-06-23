 findNumOccurOnce(int arr[], int len)
// {
//     priority_queue<int> pq;
//     for (int i = 0; i < len; i++)
//     {
//         pq.push(arr[i]);
//     }
//     while (!pq.empty())
//     {
//         int last = pq.top();
//         pq.pop();
//         int secLast = pq.top();
//         pq.pop();
//         if (last != secLast)
//         {
//             cout << "unique : " << last << endl;
//             return;
//         }
//     }
// }
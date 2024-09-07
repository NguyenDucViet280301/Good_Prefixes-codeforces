/*
Ý tưởng chính:
Tổng của tiền tố: Tính tổng tất cả các phần tử từ đầu đến vị trí thứ i (tiền tố độ dài i).
Phần tử lớn nhất: Giả sử phần tử lớn nhất trong tiền tố có thể là phần tử bằng tổng của các phần tử còn lại.
Kiểm tra điều kiện: Nếu phần tử lớn nhất bằng tổng các phần tử còn lại trong tiền tố, thì đó là một tiền tố "tốt".
*/

#include <stdio.h>

int main()
{
    int t;
    // Đọc số lượng test case
    scanf("%d", &t);

    while (t--)
    {
        int n;
        // Đọc số lượng phần tử của mảng trong test case này
        scanf("%d", &n);
        
        long long a[n]; // Mảng lưu các phần tử
        long long sum = 0; // Biến lưu tổng các phần tử đã duyệt qua
        int count = 0; // Biến đếm số tiền tố "tốt"
        int max_check = 0; // Biến lưu phần tử lớn nhất hiện tại trong tiền tố

        for (int i = 0; i < n; i++)
        {
            // Nhập phần tử thứ i của mảng
            scanf("%lld", &a[i]);
            sum += a[i]; // Cập nhật tổng của tiền tố (các phần tử từ a[0] đến a[i])

            // Cập nhật phần tử lớn nhất hiện tại
            if (max_check < a[i]){
                max_check = a[i];
            }

            // Kiểm tra xem phần tử lớn nhất có bằng tổng của các phần tử còn lại hay không
            if (sum - max_check == max_check){
                count++; // Nếu đúng, tăng biến đếm lên
            }
        }
        // In ra số lượng tiền tố "tốt" cho test case hiện tại
        printf("%d\n", count);
    }
}

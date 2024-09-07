Alex cho rằng một mảng là "tốt" nếu tồn tại một phần tử bằng tổng của tất cả các phần tử còn lại trong mảng đó (nếu không có phần tử nào khác thì tổng đó bằng 0). Ví dụ, mảng [1, 6, 3, 2] là tốt vì 1 + 3 + 2 = 6. Ngoài ra, mảng [0] cũng được coi là tốt. Tuy nhiên, các mảng [1, 2, 3, 4] và [1] thì không tốt.

Alex có một mảng a1, a2, ..., an. Hãy giúp Alex đếm số lượng tiền tố không rỗng "tốt" của mảng a. Nói cách khác, hãy đếm số lượng số nguyên i (1 ≤ i ≤ n) sao cho tiền tố độ dài i (tức là a1, a2, ..., ai) là tốt.

Đầu vào:

Dòng đầu tiên chứa một số nguyên t (1 ≤ t ≤ 10^4) - số lượng test case.

Dòng đầu tiên của mỗi test case chứa một số nguyên n (1 ≤ n ≤ 2*10^5) - số lượng phần tử của mảng.

Dòng thứ hai của mỗi test case chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10^9) - các phần tử của mảng.

Tổng của n trên tất cả các test case không vượt quá 2*10^5.

Đầu ra:

Đối với mỗi test case, in ra một số nguyên duy nhất - số lượng tiền tố không rỗng "tốt" của mảng a.

Giải quyết:

Ý tưởng chính:
Tổng của tiền tố: Tính tổng tất cả các phần tử từ đầu đến vị trí thứ i (tiền tố độ dài i).

Phần tử lớn nhất: Giả sử phần tử lớn nhất trong tiền tố có thể là phần tử bằng tổng của các phần tử còn lại.

Kiểm tra điều kiện: Nếu phần tử lớn nhất bằng tổng các phần tử còn lại trong tiền tố, thì đó là một tiền tố "tốt".

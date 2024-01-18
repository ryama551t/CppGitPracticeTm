#pragma once

#include <numeric>

// [NOTE] �{�\�[�X�R�[�h��Git����̗��K�p�̂��߁A�e�֐��̃R�[�i�[�P�[�X�E��O�������l������K�v�͂���܂���B

/// <summary>
/// �ő���񐔂����߂�
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns>a��b�̍ő����</returns>
/// e.g., (a = 12, b = 21) -> 3, ...
uint32_t gcd(uint32_t a, uint32_t b);

/// <summary>
/// n�Ԗڂ̃t�B�{�i�b�`�������߂�
/// </summary>
/// <param name="n"></param>
/// <returns>n�Ԗڂ̃t�B�{�i�b�`��</returns>
/// e.g., (n = 1) -> 1, (n = 2) -> 1, (n = 3) -> 2, (n = 4) -> 3, (n = 5) -> 5, (n = 6) -> 8, ...
uint32_t fibonacci(uint32_t n);

/// <summary>
/// n, m�Ԗڂ̃t�B�{�i�b�`���̍ő���񐔂��A���Ԗڂ̃t�B�{�i�b�`���ł��邩�����߂�
/// </summary>
/// <param name="n"></param>
/// <param name="m"></param>
/// <returns>fibonacci(n)��fibonacci(m)�̍ő����</returns>
/// <reamarks>�t�B�{�i�b�`���̔ԍ��� `fibonacci()` �֐��Ɠ���</reamarks>
uint32_t findFibonacciGcd(uint32_t n, uint32_t m);

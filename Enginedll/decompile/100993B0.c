/*
 * func-name: sub_100993B0
 * func-address: 0x100993b0
 * callers: 0x1000dc90, 0x10011510, 0x10028fa0, 0x100290f0, 0x1002d4c0, 0x1002d610, 0x10084dd0, 0x10097ea0, 0x1009a680, 0x1010a350, 0x1017bd70, 0x1017bed0, 0x1017cd90, 0x1017d680
 * callees: none
 */

int __thiscall sub_100993B0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 28;
  return result;
}

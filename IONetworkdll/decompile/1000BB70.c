/*
 * func-name: sub_1000BB70
 * func-address: 0x1000bb70
 * callers: 0x1000b5e0
 * callees: 0x1000c980, 0x1004f112
 */

void __cdecl __noreturn sub_1000BB70(int a1, int a2)
{
  _BYTE v2[28]; // [esp+8h] [ebp-54h] BYREF
  _BYTE pExceptionObject[44]; // [esp+24h] [ebp-38h] BYREF
  int v4; // [esp+58h] [ebp-4h]

  std::string::string(v2, "deque<T> too long");
  v4 = 0;
  sub_1000C980(pExceptionObject, v2);
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

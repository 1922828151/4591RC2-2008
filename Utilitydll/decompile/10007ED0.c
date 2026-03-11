/*
 * func-name: sub_10007ED0
 * func-address: 0x10007ed0
 * callers: 0x100073f0, 0x10007a10, 0x10007c50, 0x1000b290, 0x1000b640, 0x10010ac0
 * callees: 0x10001f20, 0x10019586
 */

void __cdecl __noreturn sub_10007ED0(int a1, int a2)
{
  _BYTE v2[28]; // [esp+8h] [ebp-54h] BYREF
  _BYTE pExceptionObject[44]; // [esp+24h] [ebp-38h] BYREF
  int v4; // [esp+58h] [ebp-4h]

  std::string::string(v2, "vector<T> too long");
  v4 = 0;
  sub_10001F20((std::exception *)pExceptionObject, (int)v2);
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

/*
 * func-name: sub_1000BC30
 * func-address: 0x1000bc30
 * callers: 0x1000b8d0, 0x10014e40, 0x10015330, 0x10015b70
 * callees: 0x1000c980, 0x1004f112
 */

void __noreturn sub_1000BC30()
{
  _BYTE v0[28]; // [esp+8h] [ebp-54h] BYREF
  _BYTE pExceptionObject[44]; // [esp+24h] [ebp-38h] BYREF
  int v2; // [esp+58h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v2 = 0;
  sub_1000C980(pExceptionObject, v0);
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

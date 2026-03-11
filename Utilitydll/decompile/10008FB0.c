/*
 * func-name: sub_10008FB0
 * func-address: 0x10008fb0
 * callers: 0x10008080, 0x10008480, 0x10008690, 0x10008d30, 0x1000a930, 0x100144b0, 0x10018b50
 * callees: 0x10001f20, 0x10019586
 */

int __thiscall sub_10008FB0(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[28]; // [esp+4h] [ebp-50h] BYREF
  _BYTE pExceptionObject[40]; // [esp+20h] [ebp-34h] BYREF
  int v5; // [esp+50h] [ebp-4h]

  v1 = this[2];
  if ( v1 == 0x3FFFFFFF )
  {
    std::string::string(v3, "list<T> too long");
    v5 = 0;
    sub_10001F20((std::exception *)pExceptionObject, (int)v3);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  this[2] = result;
  return result;
}

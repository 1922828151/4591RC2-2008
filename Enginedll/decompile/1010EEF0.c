/*
 * func-name: sub_1010EEF0
 * func-address: 0x1010eef0
 * callers: 0x1010c090
 * callees: 0x101a2522
 */

int __thiscall sub_1010EEF0(_DWORD *this, unsigned int a2)
{
  int v2; // eax
  int result; // eax
  _BYTE v4[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v6[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v7; // [esp+50h] [ebp-4h]

  v2 = this[2];
  if ( 0x3FFFFFFF - v2 < a2 )
  {
    std::string::string(v4, "list<T> too long");
    v7 = 0;
    std::exception::exception((std::exception *)pExceptionObject);
    LOBYTE(v7) = 1;
    pExceptionObject[0] = &std::logic_error::`vftable';
    std::string::string(v6, v4);
    LOBYTE(v7) = 0;
    pExceptionObject[0] = &std::length_error::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = a2 + v2;
  this[2] = result;
  return result;
}

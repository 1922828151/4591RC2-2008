/*
 * func-name: ??BTime_Value@Utility@Outpop@@QBE?AU_FILETIME@@XZ
 * func-address: 0x10001860
 * callers: none
 * callees: 0x10019720
 */

_QWORD *__thiscall Outpop::Utility::Time_Value::operator _FILETIME(int *this, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned int v4; // ecx
  _QWORD *result; // eax

  v2 = *this + 3054539008LL;
  HIDWORD(v2) += 2;
  v2 *= 10000000;
  v3 = this[1];
  v4 = v2;
  result = a2;
  *a2 = 10 * v3 + __PAIR64__(HIDWORD(v2), v4);
  return result;
}

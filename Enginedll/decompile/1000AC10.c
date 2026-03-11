/*
 * func-name: ?GetLocation@Gizmo@@QAE?AVVector@@XZ
 * func-address: 0x1000ac10
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Gizmo::GetLocation(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = this[200];
  v3 = this[201];
  v4 = this[202];
  a2[1] = v3;
  a2[2] = v4;
  return result;
}

/*
 * func-name: ?GetFogColor@World@@QAE?AUFloatColor@@XZ
 * func-address: 0x10009990
 * callers: none
 * callees: none
 */

_DWORD *__thiscall World::GetFogColor(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = this[6];
  a2[1] = this[7];
  v3 = this[8];
  v4 = this[9];
  a2[2] = v3;
  a2[3] = v4;
  return result;
}

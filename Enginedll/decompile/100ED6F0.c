/*
 * func-name: sub_100ED6F0
 * func-address: 0x100ed6f0
 * callers: 0x100eaad0, 0x100faa40, 0x100fb800, 0x100fc250, 0x100fccd0
 * callees: 0x100ed4d0, 0x1012b470
 */

_DWORD *__thiscall sub_100ED6F0(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // edi
  _DWORD *result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 56;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 56 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = (_DWORD *)sub_1012B470(v5, 1, a2);
    this[2] = v5 + 56;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_100ED4D0(this, &v8, this, v7, a2);
  }
  return result;
}

/*
 * func-name: sub_100FFF70
 * func-address: 0x100fff70
 * callers: 0x100fb800, 0x100fc250, 0x100fccd0
 * callees: 0x100785d0, 0x100ff8b0
 */

void __thiscall sub_100FFF70(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  char *v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 12;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 12 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v7) = 0;
    sub_100785D0(v5, 1, a2);
    this[2] = v5 + 3;
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_100FF8B0(this, &v7, this, v6, a2);
  }
}

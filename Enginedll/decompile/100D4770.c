/*
 * func-name: sub_100D4770
 * func-address: 0x100d4770
 * callers: 0x100cdb80
 * callees: 0x100cf9e0, 0x100d3ca0
 */

void __thiscall sub_100D4770(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  char *v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 44;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 44 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v7) = 0;
    sub_100CF9E0(v5, 1, a2);
    this[2] = v5 + 11;
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_100D3CA0(this, &v7, this, v6, a2);
  }
}

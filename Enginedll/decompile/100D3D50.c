/*
 * func-name: sub_100D3D50
 * func-address: 0x100d3d50
 * callers: 0x100c99c0
 * callees: 0x100cfa90, 0x100d2d00
 */

void __thiscall sub_100D3D50(int *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  char *v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 40;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 40 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v7) = 0;
    sub_100CFA90(v5, 1, a2);
    this[2] = (int)(v5 + 10);
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_100D2D00(this, (int **)&v7, this, v6, a2);
  }
}

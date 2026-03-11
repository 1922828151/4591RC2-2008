/*
 * func-name: sub_100913D0
 * func-address: 0x100913d0
 * callers: 0x1008ce00, 0x10143e00, 0x101478f0, 0x101482d0, 0x101484b0
 * callees: 0x100785d0, 0x10091040
 */

void __thiscall sub_100913D0(_DWORD *this, _DWORD *a2)
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
    sub_10091040(this, &v7, this, v6, a2);
  }
}

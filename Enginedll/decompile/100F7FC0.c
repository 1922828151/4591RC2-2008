/*
 * func-name: sub_100F7FC0
 * func-address: 0x100f7fc0
 * callers: 0x100f37e0
 * callees: 0x100950e0, 0x100f77a0
 */

void __thiscall sub_100F7FC0(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  char *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 3;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 3 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v7) = 0;
    sub_100950E0(v5, 1, a2);
    this[2] = v5 + 2;
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_100F77A0(this, &v7, (int)this, v6, a2);
  }
}

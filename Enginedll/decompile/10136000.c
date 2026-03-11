/*
 * func-name: sub_10136000
 * func-address: 0x10136000
 * callers: 0x10136090
 * callees: 0x100950e0, 0x10135f70
 */

void __thiscall sub_10136000(_DWORD *this, int *a2)
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
    sub_10135F70(this, &v7, (int)this, v6, a2);
  }
}

/*
 * func-name: sub_10062970
 * func-address: 0x10062970
 * callers: 0x10060720
 * callees: 0x10061930, 0x10062640
 */

void __thiscall sub_10062970(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  char *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 4;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 4 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v7) = 0;
    sub_10061930(v5, 1, a2);
    this[2] = v5 + 4;
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_10062640(this, &v7, this, v6, a2);
  }
}

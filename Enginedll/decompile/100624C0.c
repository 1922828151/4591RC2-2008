/*
 * func-name: sub_100624C0
 * func-address: 0x100624c0
 * callers: 0x10060640
 * callees: 0x10061480, 0x10061b20
 */

unsigned __int16 __thiscall sub_100624C0(_WORD *this)
{
  unsigned __int16 v2; // di
  int v3; // ecx
  int v4; // eax
  unsigned __int16 v5; // ax
  int v6; // esi
  bool v7; // zf
  float *v8; // esi
  unsigned __int16 result; // ax

  v2 = sub_10061480(this, 0);
  sub_10061B20(this, v2);
  v3 = 44 * v2;
  v4 = v3 + *(_DWORD *)this;
  *(_WORD *)(v4 + 42) = -1;
  *(_WORD *)(v4 + 40) = this[7];
  this[7] = v2;
  v5 = *(_WORD *)(v4 + 40);
  if ( v5 == 0xFFFF )
    this[6] = v2;
  else
    *(_WORD *)(44 * v5 + *(_DWORD *)this + 42) = v2;
  ++this[9];
  v6 = *(_DWORD *)this;
  v7 = v3 + v6 == 0;
  v8 = (float *)(v3 + v6);
  result = v2;
  if ( !v7 )
  {
    v8[4] = 0.0;
    v8[5] = 0.0;
    v8[6] = 0.0;
    v8[7] = 0.0;
    v8[8] = 0.0;
    v8[9] = 0.0;
  }
  return result;
}

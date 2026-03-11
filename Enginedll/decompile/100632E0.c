/*
 * func-name: sub_100632E0
 * func-address: 0x100632e0
 * callers: 0x10060ca0
 * callees: 0x10063200
 */

int __thiscall sub_100632E0(int this, int a2, char a3, int a4, _DWORD *a5, _DWORD *a6)
{
  sub_10063200((_DWORD *)this, a2, a3, a4);
  *(_DWORD *)this = &CEnumBox::`vftable';
  *(float *)(this + 20) = 0.0;
  *(float *)(this + 24) = 0.0;
  *(float *)(this + 28) = 0.0;
  *(float *)(this + 32) = 0.0;
  *(float *)(this + 36) = 0.0;
  *(float *)(this + 40) = 0.0;
  if ( !*(_BYTE *)(this + 12) )
  {
    *(_DWORD *)(this + 20) = *a5;
    *(_DWORD *)(this + 24) = a5[1];
    *(_DWORD *)(this + 28) = a5[2];
    *(_DWORD *)(this + 32) = *a6;
    *(_DWORD *)(this + 36) = a6[1];
    *(_DWORD *)(this + 40) = a6[2];
  }
  return this;
}

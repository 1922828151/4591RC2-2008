/*
 * func-name: sub_10063450
 * func-address: 0x10063450
 * callers: 0x10060d50
 * callees: 0x10063200
 */

int __thiscall sub_10063450(int this, int a2, char a3, int a4, _DWORD *a5, float a6)
{
  int v7; // eax

  sub_10063200((_DWORD *)this, a2, a3, a4);
  *(_DWORD *)this = &CEnumSphere::`vftable';
  *(float *)(this + 20) = 0.0;
  *(float *)(this + 24) = 0.0;
  *(float *)(this + 28) = 0.0;
  if ( !*(_BYTE *)(this + 12) )
  {
    *(_DWORD *)(this + 20) = *a5;
    *(_DWORD *)(this + 24) = a5[1];
    v7 = a5[2];
    *(float *)(this + 32) = a6;
    *(_DWORD *)(this + 28) = v7;
  }
  return this;
}

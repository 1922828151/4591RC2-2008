/*
 * func-name: sub_100D8DB0
 * func-address: 0x100d8db0
 * callers: 0x1000b54b
 * callees: 0x102c23d0, 0x102c9dbc
 */

void __thiscall sub_100D8DB0(int this, int a2)
{
  int v3; // ecx
  int v4; // edx
  float v5; // [esp+4h] [ebp-44h]
  float v6; // [esp+4h] [ebp-44h]
  _BYTE v7[64]; // [esp+8h] [ebp-40h] BYREF

  v5 = *(float *)(this + 1456) * *(float *)(this + 1456)
     + *(float *)(this + 1452) * *(float *)(this + 1452)
     + *(float *)(this + 1460) * *(float *)(this + 1460);
  v6 = sqrt(v5);
  if ( v6 != 0.0 )
  {
    v3 = *(_DWORD *)(this + 1456);
    v4 = *(_DWORD *)(this + 1460);
    *(_DWORD *)(this + 856) = *(_DWORD *)(this + 1452);
    *(_DWORD *)(this + 860) = v3;
    *(_DWORD *)(this + 864) = v4;
    qmemcpy((void *)(this + 868), (const void *)sub_102C23D0(v7), 0x40u);
  }
}

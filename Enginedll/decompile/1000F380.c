/*
 * func-name: sub_1000F380
 * func-address: 0x1000f380
 * callers: 0x100102c0, 0x10012240, 0x10015030, 0x10028c90, 0x10028d10, 0x100292f0, 0x10029b90, 0x10029c10, 0x10029d20, 0x10029dd0, 0x1002a9d0, 0x1002e7f0, 0x10030270, 0x100710d0, 0x100833b0, 0x10083e50, 0x10114af0, 0x10114c30, 0x10114d30, 0x10114de0, 0x101157a0
 * callees: 0x1000bfa0, 0x1000c3f0, 0x1000db00, 0x101a2522
 */

int __thiscall sub_1000F380(int this, int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  bool v5; // cc
  unsigned int v6; // ebx
  _DWORD v8[4]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v9; // [esp+10h] [ebp-14h]
  _DWORD *v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v10 = v8;
  v8[3] = this;
  if ( v2 )
    v2 = (int)(*(_DWORD *)(a2 + 8) - v2) / 28;
  if ( sub_1000C3F0((_DWORD *)this, v2) )
  {
    v4 = *(_DWORD *)(a2 + 8);
    v5 = *(_DWORD *)(a2 + 4) <= v4;
    v11 = 0;
    v9 = v4;
    if ( !v5 )
      invalid_parameter_noinfo();
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_1000BFA0(v6, v9, *(CREControl **)(this + 4));
  }
  return this;
}

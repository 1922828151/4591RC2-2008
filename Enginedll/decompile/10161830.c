/*
 * func-name: sub_10161830
 * func-address: 0x10161830
 * callers: 0x101619d0, 0x10162ce0
 * callees: 0x1016a3e0, 0x1016a440, 0x101a26c0
 */

char __thiscall sub_10161830(int this, int a2)
{
  int v4; // edi
  int v5; // ebx
  POINT v6; // [esp-8h] [ebp-14h]

  v6.y = (int)*(float *)(a2 + 12);
  v6.x = (int)*(float *)(a2 + 4);
  if ( !PtInRect((const RECT *)(this + 12), v6) )
    return 0;
  v4 = *(_DWORD *)(this + 4);
  v5 = sub_1016A3E0(v4, *(_DWORD *)(v4 + 4), a2);
  sub_1016A440(1);
  *(_DWORD *)(v4 + 4) = v5;
  **(_DWORD **)(v5 + 4) = v5;
  return 1;
}

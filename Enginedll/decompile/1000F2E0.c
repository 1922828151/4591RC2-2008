/*
 * func-name: sub_1000F2E0
 * func-address: 0x1000f2e0
 * callers: 0x100138c0, 0x10013c80, 0x1008bd00, 0x1008beb0, 0x1008c0e0, 0x1008c1a0, 0x1008c260, 0x1008c320, 0x1008c3e0, 0x1008ce00, 0x1008de00, 0x1008e080, 0x1008e470, 0x10169d00
 * callees: 0x1007fbd0, 0x1007fe50, 0x101a2500
 */

void __thiscall sub_1000F2E0(int this)
{
  sub_1007FE50(this + 84);
  sub_1007FBD0(this + 60);
  if ( *(_DWORD *)(this + 44) )
    operator delete(*(void **)(this + 44));
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  if ( *(_DWORD *)(this + 28) )
    operator delete(*(void **)(this + 28));
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  if ( *(_DWORD *)(this + 12) )
    operator delete(*(void **)(this + 12));
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
}

/*
 * func-name: sub_10058770
 * func-address: 0x10058770
 * callers: 0x100566a0, 0x1005db40, 0x101b8b70, 0x101b8b80
 * callees: 0x1005db40, 0x101a2500
 */

void __thiscall sub_10058770(int this)
{
  sub_1005DB40(this);
  if ( *(_DWORD *)(this + 64) )
    operator delete(*(void **)(this + 64));
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 72) = 0;
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

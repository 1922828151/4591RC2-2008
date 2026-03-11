/*
 * func-name: ??4SoundMgr@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100ec570
 * callers: 0x10004575
 * callees: 0x10010262, 0x10011888
 */

int __thiscall SoundMgr::operator=(int this, int a2)
{
  if ( this + 4 != a2 + 4 )
    sub_10011888(a2 + 4, **(_DWORD **)(a2 + 8), a2 + 4, *(_DWORD *)(a2 + 8), a2);
  if ( this + 16 != a2 + 16 )
    sub_10011888(a2 + 16, **(_DWORD **)(a2 + 20), a2 + 16, *(_DWORD *)(a2 + 20), a2);
  if ( this + 28 != a2 + 28 )
    sub_10010262(a2 + 28, **(_DWORD **)(a2 + 32), a2 + 28, *(_DWORD *)(a2 + 32), a2);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(float *)(this + 52) = *(float *)(a2 + 52);
  *(float *)(this + 56) = *(float *)(a2 + 56);
  *(float *)(this + 60) = *(float *)(a2 + 60);
  *(float *)(this + 64) = *(float *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  return this;
}

/*
 * func-name: sub_10077BE0
 * func-address: 0x10077be0
 * callers: 0x1009f580, 0x1011ed60, 0x1011ef20
 * callees: 0x10077b70, 0x101a2500
 */

void __thiscall sub_10077BE0(int this)
{
  sub_10077B70((_DWORD *)this);
  if ( *(_DWORD *)(this + 20) )
    operator delete(*(void **)(this + 20));
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}

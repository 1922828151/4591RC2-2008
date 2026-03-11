/*
 * func-name: sub_100F7380
 * func-address: 0x100f7380
 * callers: 0x100f37e0
 * callees: 0x101a2500
 */

int __thiscall sub_100F7380(int this)
{
  if ( *(_DWORD *)(this + 80) )
    operator delete(*(void **)(this + 80));
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  if ( *(_DWORD *)(this + 64) )
    operator delete(*(void **)(this + 64));
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 72) = 0;
  if ( *(_DWORD *)(this + 48) )
    operator delete(*(void **)(this + 48));
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 56) = 0;
  if ( *(_DWORD *)(this + 32) )
    operator delete(*(void **)(this + 32));
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  return std::string::~string(this);
}

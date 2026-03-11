/*
 * func-name: sub_100F16A0
 * func-address: 0x100f16a0
 * callers: 0x100ef520, 0x1011aff0
 * callees: 0x100017b0, 0x101a2500
 */

void __thiscall sub_100F16A0(int this)
{
  XMLSystem::~XMLSystem((XMLSystem *)(this + 84));
  std::string::~string(this + 56);
  if ( *(_DWORD *)(this + 32) )
    operator delete(*(void **)(this + 32));
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  if ( *(_DWORD *)(this + 16) )
    operator delete(*(void **)(this + 16));
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
}

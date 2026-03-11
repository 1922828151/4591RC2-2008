/*
 * func-name: sub_1025D5A0
 * func-address: 0x1025d5a0
 * callers: 0x10003a08
 * callees: 0x102c9d50
 */

void __thiscall sub_1025D5A0(int this)
{
  CollisionInfo *v2; // esi
  CollisionInfo *i; // edi

  v2 = *(CollisionInfo **)(this + 4);
  if ( v2 )
  {
    for ( i = *(CollisionInfo **)(this + 8); v2 != i; v2 = (CollisionInfo *)((char *)v2 + 104) )
      CollisionInfo::~CollisionInfo(v2);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}

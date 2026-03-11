/*
 * func-name: ?Destroy@AnimationSet@@QAEXXZ
 * func-address: 0x100f1fc0
 * callers: none
 * callees: none
 */

void __thiscall AnimationSet::Destroy(AnimationSet *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 10) = 0;
  }
}

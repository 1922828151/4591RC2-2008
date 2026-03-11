/*
 * func-name: ?SetActivation@AnimationModal@@MAEX_N@Z_0
 * func-address: 0x100daf40
 * callers: 0x1000f0e2
 * callees: 0x1000bf05, 0x10012080, 0x1001a5d2
 */

void __thiscall AnimationModal::SetActivation(AnimationModal *this, int a2)
{
  unsigned int v2; // edi
  int i; // ebp
  int v5; // eax
  int v6; // eax

  v2 = 0;
  for ( i = 0; ; i += 120 )
  {
    v5 = *((_DWORD *)this + 350);
    if ( !v5 || v2 >= (*((_DWORD *)this + 351) - v5) / 120 )
      break;
    v6 = *((_DWORD *)this + 350);
    if ( !v6 || v2 >= (*((_DWORD *)this + 351) - v6) / 120 )
      _invalid_parameter_noinfo();
    if ( sub_1000BF05() )
      sub_1001A5D2(a2);
    ++v2;
  }
  *((_BYTE *)this + 816) = (_BYTE)a2 == 0;
  Effect_Base::SetActivation(this, a2);
}

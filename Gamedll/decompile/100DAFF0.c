/*
 * func-name: ?SetWorld@AnimationModal@@MAEXPAVWorld@@@Z_0
 * func-address: 0x100daff0
 * callers: 0x10009589
 * callees: 0x10006ab4, 0x1000bf05, 0x1000fd26
 */

void __thiscall AnimationModal::SetWorld(AnimationModal *this, struct World *a2)
{
  unsigned int v2; // edi
  int i; // ebx
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
      sub_1000FD26((int)a2);
    ++v2;
  }
  Effect_Base::SetWorld(this, a2);
}

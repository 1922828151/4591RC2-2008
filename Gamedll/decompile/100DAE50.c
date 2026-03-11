/*
 * func-name: ?PreRender@AnimationModal@@MAEXPAVCamera@@@Z_0
 * func-address: 0x100dae50
 * callers: 0x100023e7
 * callees: 0x10003e2c, 0x1000bf05, 0x1000ea57
 */

void __thiscall AnimationModal::PreRender(AnimationModal *this, struct Camera *a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

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
      sub_1000EA57(*((float *)this + 278));
    v7 = *((_DWORD *)this + 350);
    if ( !v7 || v2 >= (*((_DWORD *)this + 351) - v7) / 120 )
      _invalid_parameter_noinfo();
    sub_10003E2C();
    ++v2;
  }
  Actor::PreRender(this, a2);
}

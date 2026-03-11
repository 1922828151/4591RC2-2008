/*
 * func-name: sub_10037177
 * func-address: 0x10037177
 * callers: 0x10031530, 0x10031540, 0x10032620, 0x10032690, 0x100326d0, 0x100328e0, 0x1003719a, 0x1003fea7, 0x1003feb2, 0x100487a6
 * callees: 0x10034ad6
 */

void __thiscall sub_10037177(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

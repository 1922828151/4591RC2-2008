/*
 * func-name: sub_10161790
 * func-address: 0x10161790
 * callers: 0x100597f0, 0x10168a40, 0x1016bc60
 * callees: 0x100a1d10, 0x101a2500, 0x101a253a
 */

void __thiscall sub_10161790(void *this)
{
  int v2; // esi
  char *v3; // ebx
  char *v4; // ebp
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v2 = (int)this + 32;
  *(_DWORD *)this = &MatBlock::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  v3 = (char *)*((_DWORD *)this + 10);
  if ( *((_DWORD *)this + 9) > (unsigned int)v3 )
    invalid_parameter_noinfo();
  v4 = *(char **)(v2 + 4);
  if ( (unsigned int)v4 > *(_DWORD *)(v2 + 8) )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((_DWORD *)v2, &v5, v2, v4, v2, v3);
  if ( *((_DWORD *)this + 12) )
  {
    operator delete[](*((void **)this + 12));
    *((_DWORD *)this + 12) = 0;
  }
  if ( *(_DWORD *)(v2 + 4) )
    operator delete(*(void **)(v2 + 4));
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
}

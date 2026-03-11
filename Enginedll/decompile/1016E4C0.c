/*
 * func-name: ?RemoveActorToList@TextureCamera@@QAEXPAVActor@@@Z
 * func-address: 0x1016e4c0
 * callers: 0x100b41c0
 * callees: none
 */

void __thiscall TextureCamera::RemoveActorToList(TextureCamera *this, struct Actor *a2)
{
  struct Actor **v2; // esi
  char *v3; // edi
  struct Actor **v4; // ebx
  int v5; // eax

  v2 = (struct Actor **)*((_DWORD *)this + 1208);
  v3 = (char *)this + 4828;
  if ( (unsigned int)v2 > *((_DWORD *)this + 1209) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v4 = (struct Actor **)*((_DWORD *)v3 + 2);
    if ( *((_DWORD *)v3 + 1) > (unsigned int)v4 )
      invalid_parameter_noinfo();
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v2 == v4 )
      break;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v2 >= *((_DWORD *)v3 + 2) )
      invalid_parameter_noinfo();
    if ( *v2 == a2 )
    {
      v5 = (*((_DWORD *)v3 + 2) - (int)(v2 + 1)) >> 2;
      if ( v5 > 0 )
        memmove_s(v2, 4 * v5, v2 + 1, 4 * v5);
      *((_DWORD *)v3 + 2) -= 4;
      return;
    }
    if ( (unsigned int)v2 >= *((_DWORD *)v3 + 2) )
      invalid_parameter_noinfo();
    ++v2;
  }
}

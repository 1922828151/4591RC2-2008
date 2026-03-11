/*
 * func-name: ?RemovePostProcessEffect@PostProcess@@QAEXPAVPostProcessEffect@@@Z
 * func-address: 0x10106a90
 * callers: none
 * callees: none
 */

void __thiscall PostProcess::RemovePostProcessEffect(PostProcess *this, struct PostProcessEffect *a2)
{
  struct PostProcessEffect **v2; // ebx
  void (__cdecl *v3)(); // ebp
  char *v4; // edi
  struct PostProcessEffect **v5; // esi
  struct PostProcessEffect **v6; // ebx
  int v7; // eax

  v2 = (struct PostProcessEffect **)*((_DWORD *)this + 18);
  v3 = invalid_parameter_noinfo;
  v4 = (char *)this + 64;
  if ( *((_DWORD *)this + 17) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v5 = (struct PostProcessEffect **)*((_DWORD *)v4 + 1);
  if ( (unsigned int)v5 > *((_DWORD *)v4 + 2) )
    invalid_parameter_noinfo();
  for ( ; v5 != v2; ++v5 )
  {
    if ( *v5 == a2 )
      break;
  }
  v6 = (struct PostProcessEffect **)*((_DWORD *)v4 + 2);
  if ( *((_DWORD *)v4 + 1) > (unsigned int)v6 )
  {
    invalid_parameter_noinfo();
    v3 = invalid_parameter_noinfo;
  }
  if ( !v4 )
    v3();
  if ( v5 != v6 )
  {
    v7 = (*((_DWORD *)v4 + 2) - (int)(v5 + 1)) >> 2;
    if ( v7 > 0 )
      memmove_s(v5, 4 * v7, v5 + 1, 4 * v7);
    *((_DWORD *)v4 + 2) -= 4;
  }
}

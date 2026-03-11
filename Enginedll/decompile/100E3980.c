/*
 * func-name: ?RemoveUnusedParams@Material@@AAEXXZ
 * func-address: 0x100e3980
 * callers: 0x100e68a0
 * callees: 0x10097800
 */

void __thiscall Material::RemoveUnusedParams(Material *this)
{
  _DWORD *v2; // edi
  unsigned int i; // ebp
  int v4; // ecx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  const char *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edi
  int v13; // eax
  const char *v14; // [esp-Ch] [ebp-1Ch]
  const char *v15; // [esp-8h] [ebp-18h]
  _DWORD *v16; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD **)(*((_DWORD *)this + 38) + 16);
  v16 = v2;
  if ( v2 )
  {
    for ( i = 0; ; ++i )
    {
      v4 = *((_DWORD *)this + 70);
      if ( !v4 || i >= (*((_DWORD *)this + 71) - v4) >> 2 )
        break;
      v5 = *v2;
      v6 = 4 * i;
      v7 = std::string::c_str(*(_DWORD *)(*((_DWORD *)this + 70) + 4 * i) + 4);
      if ( !(*(int (__stdcall **)(_DWORD *, _DWORD, int))(v5 + 36))(v16, 0, v7) )
      {
        v8 = *((_DWORD *)this + 70);
        if ( !v8 || i >= (*((_DWORD *)this + 71) - v8) >> 2 )
          invalid_parameter_noinfo();
        v9 = (_DWORD *)(v6 + *((_DWORD *)this + 70));
        v15 = (const char *)std::string::c_str((char *)this + 156);
        v14 = (const char *)std::string::c_str((char *)this + 184);
        v10 = (const char *)std::string::c_str(*v9 + 4);
        Warning(
          "The parameter '%s' on material '%s' does not exist on shader '%s'. Please re-export the model or map that is u"
          "sing this material soon, because it was compiled with outdated shaders and may have visual problems.",
          v10,
          v14,
          v15);
        v11 = *((_DWORD *)this + 70);
        if ( v11 > *((_DWORD *)this + 71) )
          invalid_parameter_noinfo();
        v12 = v6 + v11;
        if ( v12 > *((_DWORD *)this + 71) || v12 < *((_DWORD *)this + 70) )
          invalid_parameter_noinfo();
        v13 = (int)(*((_DWORD *)this + 71) - (v12 + 4)) >> 2;
        if ( v13 > 0 )
          memmove_s((void *const)v12, 4 * v13, (const void *const)(v12 + 4), 4 * v13);
        *((_DWORD *)this + 71) -= 4;
        --i;
      }
      v2 = v16;
    }
  }
}

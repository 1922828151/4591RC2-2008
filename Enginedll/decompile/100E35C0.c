/*
 * func-name: ?UpdateStates@Material@@QAEXXZ
 * func-address: 0x100e35c0
 * callers: 0x100e3840, 0x100e3ae0, 0x100e5360, 0x100e6600, 0x100f04f0
 * callees: 0x1000a280, 0x100e2980, 0x101207d0, 0x10120f40
 */

void __thiscall Material::UpdateStates(Material *this)
{
  unsigned int v2; // ebx
  int v3; // ecx
  void (__cdecl *v4)(); // edi
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // edi
  int v14; // ecx
  char v15; // [esp+13h] [ebp-9h]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 38) + 16) + 292))(*(_DWORD *)(*((_DWORD *)this + 38)
                                                                                               + 16));
  v15 = 0;
  v2 = 0;
LABEL_2:
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 70);
    if ( !v3 || v2 >= (*((_DWORD *)this + 71) - v3) >> 2 )
      break;
    v4 = invalid_parameter_noinfo;
    v5 = *((_DWORD *)this + 70);
    if ( !*(_DWORD *)(*(_DWORD *)(v5 + 4 * v2) + 68) )
    {
      if ( !v5 || v2 >= (*((_DWORD *)this + 71) - v5) >> 2 )
        invalid_parameter_noinfo();
      Shader::CreateHandle(*((Shader **)this + 38), *(struct ShaderVar **)(*((_DWORD *)this + 70) + 4 * v2));
    }
    v6 = *((_DWORD *)this + 70);
    if ( !v6 || v2 >= (*((_DWORD *)this + 71) - v6) >> 2 )
      invalid_parameter_noinfo();
    if ( Material::Tweakable(this, *(const char **)(*(_DWORD *)(*((_DWORD *)this + 70) + 4 * v2) + 68)) )
    {
      v10 = 0;
      if ( std::vector<EditorVar>::size(this) )
      {
        v16 = 0;
        while ( 1 )
        {
          v11 = *((_DWORD *)this + 1);
          v17 = *(_DWORD *)(*((_DWORD *)this + 38) + 16);
          if ( !v11 || v10 >= (*((_DWORD *)this + 2) - v11) / 96 )
            v4();
          v12 = *((_DWORD *)this + 70);
          v13 = (_DWORD *)(v16 + *((_DWORD *)this + 1));
          if ( !v12 || v2 >= (*((_DWORD *)this + 71) - v12) >> 2 )
            invalid_parameter_noinfo();
          if ( (*(int (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v17 + 248))(
                 v17,
                 *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 70) + 4 * v2) + 68),
                 *v13) )
          {
            break;
          }
          v16 += 96;
          if ( ++v10 >= std::vector<EditorVar>::size(this) )
          {
            ++v2;
            goto LABEL_2;
          }
          v4 = invalid_parameter_noinfo;
        }
        v14 = *((_DWORD *)this + 70);
        v15 = 1;
        if ( !v14 || v2 >= (*((_DWORD *)this + 71) - v14) >> 2 )
          invalid_parameter_noinfo();
        Shader::SetVar(*((Shader **)this + 38), *(struct ShaderVar **)(*((_DWORD *)this + 70) + 4 * v2));
      }
      ++v2;
    }
    else
    {
      v7 = *((_DWORD *)this + 70);
      if ( v7 > *((_DWORD *)this + 71) )
        invalid_parameter_noinfo();
      v8 = v7 + 4 * v2;
      if ( v8 > *((_DWORD *)this + 71) || v8 < *((_DWORD *)this + 70) )
        invalid_parameter_noinfo();
      v9 = (int)(*((_DWORD *)this + 71) - (v8 + 4)) >> 2;
      if ( v9 > 0 )
        memmove_s((void *const)(v7 + 4 * v2), 4 * v9, (const void *const)(v8 + 4), 4 * v9);
      *((_DWORD *)this + 71) -= 4;
    }
  }
  if ( v15 )
    *((_DWORD *)this + 68) = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 38) + 16) + 296))(*(_DWORD *)(*((_DWORD *)this + 38) + 16));
  else
    *((_DWORD *)this + 68) = 0;
}

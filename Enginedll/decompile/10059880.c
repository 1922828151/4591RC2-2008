/*
 * func-name: sub_10059880
 * func-address: 0x10059880
 * callers: 0x1005cb50
 * callees: 0x10021240, 0x10057160, 0x10116f70, 0x1011fdc0, 0x101206e0, 0x10120900, 0x101215e0, 0x101218a0, 0x10121e80
 */

int __stdcall sub_10059880(int a1)
{
  int v1; // esi
  int v2; // ecx
  int v3; // eax
  int result; // eax
  struct Profiler *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp-10h] [ebp-20h] BYREF
  int v10; // [esp-Ch] [ebp-1Ch]
  int v11; // [esp-8h] [ebp-18h]
  int v12; // [esp-4h] [ebp-14h]

  v1 = a1 + 76;
  v2 = *(_DWORD *)(a1 + 80);
  if ( v2 )
    v3 = (*(_DWORD *)(a1 + 84) - v2) >> 2;
  else
    v3 = 0;
  if ( dword_10284774 != v3 || (result = *(_DWORD *)(a1 + 80), v2) && (*(_DWORD *)(a1 + 84) - v2) >> 2 )
  {
    v5 = Profiler::Get();
    ++*((_DWORD *)v5 + 6);
    v6 = *(_DWORD *)(a1 + 80);
    if ( v6 && (*(_DWORD *)(a1 + 84) - v6) >> 2 )
    {
      std::vector<Matrix *>::vector<Matrix *>(&v9, v1);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int))(**(_DWORD **)(a1 + 92) + 88))(
        *(_DWORD *)(a1 + 92),
        *(_DWORD *)(*(_DWORD *)(a1 + 52) + 152),
        *(_DWORD *)(a1 + 56),
        *(_DWORD *)(a1 + 60),
        *(_DWORD *)(a1 + 64),
        *(_DWORD *)(a1 + 68),
        *(_DWORD *)(a1 + 72),
        v9,
        v10,
        v11,
        v12);
    }
    else
    {
      Shader::SetSkinning(*(Shader **)(*(_DWORD *)(a1 + 52) + 152), 0, 0, 0);
    }
    v7 = *(_DWORD *)(a1 + 80);
    if ( v7 && (*(_DWORD *)(a1 + 84) - v7) >> 2 )
    {
      Shader::CommitChanges(dword_10284770);
      if ( dword_10284790 && dword_10284770 )
      {
        Shader::UnbindHDRTarget(dword_10284770);
        Shader::End(dword_10284770);
        dword_10284774 = -1;
        dword_10284780 = -1;
      }
      Shader::SetTechnique(dword_10284770, **(const char *const **)(a1 + 276));
      Shader::Begin(dword_10284770, 0);
      sub_10057160(a1);
    }
    v8 = *(_DWORD *)(a1 + 80);
    if ( v8 && (*(_DWORD *)(a1 + 84) - v8) >> 2 )
    {
      std::vector<Matrix *>::vector<Matrix *>(&v9, v1);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int))(**(_DWORD **)(a1 + 92) + 88))(
        *(_DWORD *)(a1 + 92),
        *(_DWORD *)(*(_DWORD *)(a1 + 52) + 152),
        *(_DWORD *)(a1 + 56),
        *(_DWORD *)(a1 + 60),
        *(_DWORD *)(a1 + 64),
        *(_DWORD *)(a1 + 68),
        *(_DWORD *)(a1 + 72),
        v9,
        v10,
        v11,
        v12);
    }
    else
    {
      Shader::SetSkinning(*(Shader **)(*(_DWORD *)(a1 + 52) + 152), 0, 0, 0);
    }
    result = *(_DWORD *)(a1 + 80);
    if ( result )
      dword_10284774 = (*(_DWORD *)(a1 + 84) - result) >> 2;
    else
      dword_10284774 = 0;
  }
  return result;
}

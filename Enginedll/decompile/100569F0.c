/*
 * func-name: sub_100569F0
 * func-address: 0x100569f0
 * callers: 0x1005bd90, 0x1005cb50
 * callees: 0x10116f70, 0x1011fdc0, 0x101206e0, 0x101218a0, 0x10121e80
 */

int __stdcall sub_100569F0(int a1)
{
  int v1; // eax
  struct Profiler *v2; // eax
  Shader *v3; // eax
  int result; // eax

  v1 = **(_DWORD **)(a1 + 276);
  if ( dword_10284790 == v1 || !v1 )
    return v1 != 0 ? dword_10284768 : 0;
  v2 = Profiler::Get();
  ++*((_DWORD *)v2 + 4);
  if ( dword_10284790 && dword_10284770 )
  {
    Shader::UnbindHDRTarget(dword_10284770);
    Shader::End(dword_10284770);
    dword_10284774 = -1;
    dword_10284780 = -1;
  }
  v3 = *(Shader **)(*(_DWORD *)(a1 + 204) + 768);
  if ( v3 )
  {
    dword_10284770 = *(Shader **)(*(_DWORD *)(a1 + 204) + 768);
    Shader::SetTechnique(v3, "Depth_PS20");
    dword_10284790 = (int)"Depth_PS20";
  }
  else
  {
    Shader::SetTechnique(dword_10284770, **(const char *const **)(a1 + 276));
    dword_10284790 = **(_DWORD **)(a1 + 276);
  }
  result = Shader::Begin(dword_10284770, 0);
  dword_10284768 = result;
  return result;
}

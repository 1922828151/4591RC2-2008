/*
 * func-name: sub_10057160
 * func-address: 0x10057160
 * callers: 0x10059880, 0x1005bd90
 * callees: 0x10057080, 0x10116f70, 0x101220b0
 */

char __stdcall sub_10057160(int a1)
{
  int v1; // eax
  struct Profiler *v2; // eax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 8) - v1) >> 2 )
    {
      if ( !dword_1028477C || (LOBYTE(v1) = sub_10057080(dword_1028477C, a1), !(_BYTE)v1) )
      {
        v2 = Profiler::Get();
        ++*((_DWORD *)v2 + 3);
        LOBYTE(v1) = Shader::SetLightShaderConstants(dword_10284770, a1);
        dword_1028477C = a1;
      }
    }
  }
  return v1;
}

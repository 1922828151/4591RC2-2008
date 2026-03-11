/*
 * func-name: ?Apply@Material@@QAE_N_N@Z
 * func-address: 0x100e2b60
 * callers: 0x1005bd90, 0x1005cb50, 0x100678c0, 0x100a0810, 0x100e5360, 0x1012c590, 0x1012cad0, 0x1012d660, 0x1012e2b0
 * callees: 0x10120f40
 */

char __thiscall Material::Apply(Material *this, bool a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( a2 )
  {
    if ( *((_DWORD *)this + 68) )
    {
      v5 = *((_DWORD *)this + 70);
      if ( v5 )
      {
        if ( (*((_DWORD *)this + 71) - v5) >> 2 )
        {
          v6 = *(_DWORD *)(*((_DWORD *)this + 38) + 16);
          if ( v6 )
          {
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v6 + 300))(v6, *((_DWORD *)this + 68));
            return 1;
          }
        }
      }
    }
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v4 = *((_DWORD *)this + 70);
      if ( !v4 || i >= (*((_DWORD *)this + 71) - v4) >> 2 )
        break;
      Shader::SetVar(*((Shader **)this + 38), *(struct ShaderVar **)(*((_DWORD *)this + 70) + 4 * i));
    }
  }
  return 1;
}

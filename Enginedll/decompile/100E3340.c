/*
 * func-name: ?ForceAlphaBlend@Material@@QAEX_N@Z
 * func-address: 0x100e3340
 * callers: 0x100f04f0
 * callees: 0x1000a280
 */

void __thiscall Material::ForceAlphaBlend(Material *this, bool a2)
{
  unsigned int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // eax

  v3 = 0;
  if ( std::vector<EditorVar>::size(this) )
  {
    v4 = 0;
    do
    {
      v5 = *((_DWORD *)this + 1);
      if ( !v5 || v3 >= (*((_DWORD *)this + 2) - v5) / 96 )
        invalid_parameter_noinfo();
      *(_BYTE *)(*((_DWORD *)this + 1) + v4 + 81) = a2;
      if ( a2 )
      {
        v6 = *((_DWORD *)this + 1);
        if ( !v6 || v3 >= (*((_DWORD *)this + 2) - v6) / 96 )
          invalid_parameter_noinfo();
        *(_BYTE *)(*((_DWORD *)this + 1) + v4 + 84) = 0;
      }
      ++v3;
      v4 += 96;
    }
    while ( v3 < std::vector<EditorVar>::size(this) );
  }
}

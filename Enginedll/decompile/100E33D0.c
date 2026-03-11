/*
 * func-name: ?RestoreAlphaBlend@Material@@QAEXXZ
 * func-address: 0x100e33d0
 * callers: 0x100f04f0
 * callees: 0x1000a280
 */

void __thiscall Material::RestoreAlphaBlend(Material *this)
{
  unsigned int v2; // edi
  int v3; // ebp
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ebx

  v2 = 0;
  if ( std::vector<EditorVar>::size(this) )
  {
    v3 = 0;
    do
    {
      v4 = *((_DWORD *)this + 1);
      if ( !v4 || v2 >= (*((_DWORD *)this + 2) - v4) / 96 )
        invalid_parameter_noinfo();
      v5 = *((_DWORD *)this + 1);
      if ( !v5 || v2 >= (*((_DWORD *)this + 2) - v5) / 96 )
        invalid_parameter_noinfo();
      *(_BYTE *)(*((_DWORD *)this + 1) + v3 + 81) = *(_BYTE *)(v5 + v3 + 82);
      v6 = *((_DWORD *)this + 1);
      if ( !v6 || v2 >= (*((_DWORD *)this + 2) - v6) / 96 )
        invalid_parameter_noinfo();
      v7 = *((_DWORD *)this + 1);
      if ( !v7 || v2 >= (*((_DWORD *)this + 2) - v7) / 96 )
        invalid_parameter_noinfo();
      *(_BYTE *)(*((_DWORD *)this + 1) + v3 + 84) = *(_BYTE *)(v7 + v3 + 83);
      ++v2;
      v3 += 96;
    }
    while ( v2 < std::vector<EditorVar>::size(this) );
  }
}

/*
 * func-name: ?GetTechnique@Material@@QAEPAUTechnique@@W4LightType@@_N11@Z
 * func-address: 0x100e3150
 * callers: 0x10055de0, 0x101280a0
 * callees: 0x1000a280
 */

int __thiscall Material::GetTechnique(_DWORD *this, int a2, char a3, char a4, char a5)
{
  unsigned int v6; // edi
  int i; // ebp
  int v8; // eax
  int result; // eax

  v6 = 0;
  if ( !std::vector<EditorVar>::size(this) )
    return 0;
  for ( i = 0; ; i += 96 )
  {
    v8 = this[1];
    if ( !v8 || v6 >= (this[2] - v8) / 96 )
      invalid_parameter_noinfo();
    result = i + this[1];
    if ( (a2 & *(_DWORD *)(result + 12)) != 0
      && (*(_BYTE *)(result + 8) || !a3)
      && (*(_BYTE *)(result + 9) || a3 || a5)
      && (*(_BYTE *)(result + 10) || !a5)
      && *(_BYTE *)(result + 20) == a4 )
    {
      break;
    }
    if ( ++v6 >= std::vector<EditorVar>::size(this) )
      return 0;
  }
  return result;
}

/*
 * func-name: ?GetTechnique@Material@@QAEPAUTechnique@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e31f0
 * callers: 0x10055500, 0x10055de0
 * callees: 0x1000a280
 */

int __thiscall Material::GetTechnique(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v14; // eax
  int v15; // edi

  v9 = 0;
  v10 = 0;
  if ( std::vector<EditorVar>::size(this) )
  {
    while ( 1 )
    {
      v11 = this[1];
      if ( !v11 || v10 >= (this[2] - v11) / 96 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(v9 + this[1] + 24, &a2) )
        break;
      v12 = this[1];
      if ( !v12 || v10 >= (this[2] - v12) / 96 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(v9 + this[1] + 52, &a2) )
        break;
      ++v10;
      v9 += 96;
      if ( v10 >= std::vector<EditorVar>::size(this) )
        goto LABEL_11;
    }
    v14 = this[1];
    if ( !v14 || v10 >= (this[2] - v14) / 96 )
      invalid_parameter_noinfo();
    v15 = this[1] + 96 * v10;
    std::string::~string(&a2);
    return v15;
  }
  else
  {
LABEL_11:
    std::string::~string(&a2);
    return 0;
  }
}

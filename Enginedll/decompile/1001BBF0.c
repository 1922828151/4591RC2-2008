/*
 * func-name: ?FindFormat@VertexManager@@UAEPAUVFormat@1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1001bbf0
 * callers: none
 * callees: none
 */

int __thiscall VertexManager::FindFormat(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebx
  unsigned int i; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi

  v9 = 0;
  for ( i = 0; ; ++i )
  {
    v11 = this[2];
    if ( !v11 || i >= (this[3] - v11) / 40 )
    {
      std::string::~string(&a2);
      return 0;
    }
    v12 = this[2];
    if ( !v12 || i >= (this[3] - v12) / 40 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v9 + this[2] + 8, &a2) )
      break;
    v9 += 40;
  }
  v13 = this[2];
  if ( !v13 || i >= (this[3] - v13) / 40 )
    invalid_parameter_noinfo();
  v14 = this[2] + 40 * i;
  std::string::~string(&a2);
  return v14;
}

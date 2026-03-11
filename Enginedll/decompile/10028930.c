/*
 * func-name: ?DeleteFromName@EditorVar@@SAXAAV?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
 * func-address: 0x10028930
 * callers: none
 * callees: 0x1000a170, 0x1000cc00
 */

int __cdecl EditorVar::DeleteFromName(int a1, char a2, _DWORD *a3, int a4, int a5, int a6, int a7, unsigned int a8)
{
  unsigned int v8; // edi
  unsigned int v9; // ebx
  _DWORD *v10; // eax

  v8 = *(_DWORD *)(a1 + 4);
  if ( v8 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) > v9 )
      invalid_parameter_noinfo();
    if ( !a1 )
      invalid_parameter_noinfo();
    if ( v8 == v9 )
      break;
    if ( !a1 )
      invalid_parameter_noinfo();
    if ( v8 >= *(_DWORD *)(a1 + 8) )
      invalid_parameter_noinfo();
    v10 = a3;
    if ( a8 < 0x10 )
      v10 = &a3;
    if ( std::string::find(v8 + 4, v10, 0, a7) == std::string::npos )
    {
      if ( v8 >= *(_DWORD *)(a1 + 8) )
        invalid_parameter_noinfo();
      v8 += 96;
    }
    else
    {
      sub_1000A170(v8 + 96, *(_DWORD *)(a1 + 8), v8);
      sub_1000CC00(*(_DWORD *)(a1 + 8) - 96, *(_DWORD *)(a1 + 8));
      *(_DWORD *)(a1 + 8) -= 96;
    }
  }
  return std::string::~string(&a2);
}

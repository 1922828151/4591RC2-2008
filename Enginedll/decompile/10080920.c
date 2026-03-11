/*
 * func-name: ?FindActorSelectedList@Editor@@QAEPAVActorSelectedList@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10080920
 * callers: 0x10082ff0
 * callees: none
 */

int __thiscall Editor::FindActorSelectedList(_DWORD *this, int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = 0;
  for ( i = 0; ; i += 44 )
  {
    v5 = this[566];
    if ( !v5 || v2 >= (this[567] - v5) / 44 )
      return 0;
    v6 = this[566];
    if ( !v6 || v2 >= (this[567] - v6) / 44 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(i + this[566], a2) )
      break;
    ++v2;
  }
  v7 = this[566];
  if ( !v7 || v2 >= (this[567] - v7) / 44 )
    invalid_parameter_noinfo();
  return this[566] + 44 * v2;
}

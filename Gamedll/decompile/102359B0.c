/*
 * func-name: ?GetPartModelName@FRobotArmor@GameClient@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV34@@Z_0
 * func-address: 0x102359b0
 * callers: 0x100045cf
 * callees: none
 */

void *__thiscall GameClient::FRobotArmor::GetPartModelName(_DWORD *this, void *a2, int a3)
{
  _DWORD *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebx

  v3 = this + 94;
  v4 = this[95];
  if ( v4 > this[96] )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v5 = v3[2];
    if ( v3[1] > v5 )
      _invalid_parameter_noinfo();
    if ( v4 == v5 )
    {
      std::string::string(a2, &unk_1031CD7A);
      return a2;
    }
    if ( v4 >= v3[2] )
      _invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v4, a3) )
      break;
    if ( v4 >= v3[2] )
      _invalid_parameter_noinfo();
    v4 += 56;
  }
  if ( v4 >= v3[2] )
    _invalid_parameter_noinfo();
  std::string::string(a2, (void *)(v4 + 28));
  return a2;
}

/*
 * func-name: ?_hash@LogicFactory@GameClient@@KAKABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101dd540
 * callers: 0x100059e8
 * callees: none
 */

int __cdecl GameClient::LogicFactory::_hash(int a1)
{
  char *v1; // edx
  char v2; // cl
  int result; // eax

  v1 = (char *)std::string::c_str(a1);
  v2 = *v1;
  for ( result = 0; *v1; v2 = *v1 )
  {
    ++v1;
    result = v2 + 5 * result;
  }
  return result;
}

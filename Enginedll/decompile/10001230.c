/*
 * func-name: ?hash@Factory@@SAKABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10001230
 * callers: none
 * callees: none
 */

int __cdecl Factory::hash(int a1)
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

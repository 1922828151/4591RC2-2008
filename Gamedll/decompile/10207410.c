/*
 * func-name: sub_10207410
 * func-address: 0x10207410
 * callers: 0x1001739b
 * callees: none
 */

BOOL __cdecl sub_10207410(char a1)
{
  const CHAR *v1; // eax
  BOOL v2; // esi

  v1 = (const CHAR *)std::string::c_str(&a1);
  v2 = PathFileExistsA(v1);
  std::string::~string(&a1);
  return v2;
}

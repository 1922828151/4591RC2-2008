/*
 * func-name: sub_1007BD80
 * func-address: 0x1007bd80
 * callers: 0x1007d280, 0x10083770, 0x10097220, 0x10097ea0, 0x10099690, 0x10099a70, 0x10125a30, 0x10136530
 * callees: none
 */

BOOL __cdecl sub_1007BD80(char a1)
{
  const CHAR *v1; // eax
  BOOL v2; // esi

  v1 = (const CHAR *)std::string::c_str(&a1);
  v2 = PathFileExistsA(v1);
  std::string::~string(&a1);
  return v2;
}

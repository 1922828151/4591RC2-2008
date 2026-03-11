/*
 * func-name: sub_10013170
 * func-address: 0x10013170
 * callers: 0x10012e40
 * callees: none
 */

const char *__cdecl sub_10013170(const char *a1, const char *a2)
{
  const char *result; // eax

  result = a2;
  if ( !strcmp(a2, "baseURL") )
  {
    result = a1;
    *((_DWORD *)a1 + 3) = 1;
  }
  else if ( !strcmp(a2, "serviceType") )
  {
    result = a1;
    *((_DWORD *)a1 + 4) = 1;
  }
  else if ( !strcmp(a2, "controlURL") )
  {
    result = a1;
    *((_DWORD *)a1 + 6) = 1;
  }
  return result;
}

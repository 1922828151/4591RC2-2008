/*
 * func-name: ?getFreeBatch@FXManager@@SAHXZ
 * func-address: 0x1009fc20
 * callers: none
 * callees: none
 */

int __cdecl FXManager::getFreeBatch()
{
  int result; // eax
  int v1; // ecx

  result = 0;
  v1 = (int)&byte_102EF38C;
  while ( *(_BYTE *)v1 )
  {
    v1 += 162110;
    ++result;
    if ( v1 >= 287723460 )
      return -1;
  }
  return result;
}

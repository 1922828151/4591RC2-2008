/*
 * func-name: sub_10294370
 * func-address: 0x10294370
 * callers: 0x1001453d
 * callees: 0x1001361f
 */

int __thiscall sub_10294370(_DWORD *this)
{
  int result; // eax

  result = this[146];
  if ( result )
  {
    result = *(_DWORD *)(result + 600);
    if ( result != this[170] )
    {
      this[170] = result;
      return sub_1001361F(this[166], result);
    }
  }
  return result;
}

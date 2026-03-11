/*
 * func-name: ?GetSelectedIndex@CREPropertiesList@@QAEHH@Z
 * func-address: 0x100a41c0
 * callers: 0x1006a6b0
 * callees: none
 */

int __thiscall CREPropertiesList::GetSelectedIndex(CREPropertiesList *this, int a2)
{
  int result; // eax

  result = -1;
  if ( a2 >= -1 )
    return *((_DWORD *)this + 300);
  return result;
}

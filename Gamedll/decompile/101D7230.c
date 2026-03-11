/*
 * func-name: sub_101D7230
 * func-address: 0x101d7230
 * callers: 0x100057fe
 * callees: 0x10014f6f, 0x102c9d98
 */

bool sub_101D7230()
{
  int v0; // eax

  if ( operator new(0x38u) )
    v0 = sub_10014F6F();
  else
    v0 = 0;
  dword_103B6064 = v0;
  return v0 != 0;
}

/*
 * func-name: ?GetSelectedIndex@CREListBox@@QAEHH@Z
 * func-address: 0x100ab620
 * callers: 0x1006a5d0
 * callees: none
 */

int __thiscall CREListBox::GetSelectedIndex(CREListBox *this, int a2)
{
  int result; // eax
  int v3; // edx
  int i; // ecx

  if ( a2 < -1 )
    return -1;
  if ( (*((_BYTE *)this + 1196) & 1) == 0 )
    return *((_DWORD *)this + 300);
  v3 = *((_DWORD *)this + 304);
  result = a2 + 1;
  if ( a2 + 1 >= v3 )
    return -1;
  for ( i = *((_DWORD *)this + 303) + 4 * result; !*(_BYTE *)(*(_DWORD *)i + 532); i += 4 )
  {
    if ( ++result >= v3 )
      return -1;
  }
  return result;
}

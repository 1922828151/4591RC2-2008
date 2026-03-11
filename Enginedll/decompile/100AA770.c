/*
 * func-name: ?FindItem@CREComboBox@@QAEHPB_W@Z
 * func-address: 0x100aa770
 * callers: 0x100aa840, 0x100b07b0, 0x100b0950, 0x100b0970
 * callees: none
 */

int __thiscall CREComboBox::FindItem(CREComboBox *this, const wchar_t *a2)
{
  int result; // eax
  int v3; // ebx
  const unsigned __int16 **i; // edi

  if ( !a2 )
    return -1;
  v3 = *((_DWORD *)this + 381);
  result = 0;
  if ( v3 <= 0 )
    return -1;
  for ( i = (const unsigned __int16 **)*((_DWORD *)this + 380); wcscmp(*i, a2); ++i )
  {
    if ( ++result >= v3 )
      return -1;
  }
  return result;
}

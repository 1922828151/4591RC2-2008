/*
 * func-name: ?GetTextCopy@CREEditBox@@QAEJPA_WI@Z
 * func-address: 0x100a41f0
 * callers: none
 * callees: none
 */

int __thiscall CREEditBox::GetTextCopy(const wchar_t **this, wchar_t *Destination, size_t Count)
{
  wcsncpy(Destination, this[133], Count);
  Destination[Count - 1] = 0;
  return 0;
}

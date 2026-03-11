/*
 * func-name: sub_10001BF0
 * func-address: 0x10001bf0
 * callers: none
 * callees: 0x100303ba
 */

int __thiscall sub_10001BF0(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 32848);
  if ( result != -1 )
  {
    result = closesocket(*(_DWORD *)(this + 32848));
    *(_DWORD *)(this + 32848) = -1;
  }
  *(_BYTE *)(this + 32852) = 0;
  return result;
}

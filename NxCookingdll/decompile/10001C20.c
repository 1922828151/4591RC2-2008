/*
 * func-name: sub_10001C20
 * func-address: 0x10001c20
 * callers: none
 * callees: 0x100303e4
 */

int __thiscall sub_10001C20(int this, char *buf, int len)
{
  int result; // eax

  result = recv(*(_DWORD *)(this + 32848), buf, len, 0);
  if ( result < 0 )
  {
    result = 0;
    *(_BYTE *)(this + 32852) = 0;
  }
  return result;
}

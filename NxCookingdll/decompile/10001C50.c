/*
 * func-name: sub_10001C50
 * func-address: 0x10001c50
 * callers: none
 * callees: 0x100303ea, 0x100303f0
 */

int __thiscall sub_10001C50(int this, char *buf, int len)
{
  int result; // eax

  result = send(*(_DWORD *)(this + 32812), buf, len, 0);
  if ( result == -1 )
  {
    while ( WSAGetLastError() == 10035 )
    {
      result = send(*(_DWORD *)(this + 32812), buf, len, 0);
      if ( result != -1 )
        return result;
    }
    *(_BYTE *)(this + 32816) = 0;
    return 0;
  }
  return result;
}

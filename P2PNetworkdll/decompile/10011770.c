/*
 * func-name: sub_10011770
 * func-address: 0x10011770
 * callers: 0x100116b0
 * callees: 0x10011820, 0x10011890, 0x10011910
 */

int __usercall sub_10011770@<eax>(_DWORD *a1@<eax>, int a2)
{
  int result; // eax
  int v4; // esi
  char *Buffer; // [esp+14h] [ebp-8h]

  result = sub_10011910(a2);
  if ( !result )
  {
    if ( sscanf(Buffer, "HTTP/1.%*d %d", a1) == 1 )
    {
      if ( *a1 == 200 )
      {
        v4 = sub_10011890();
        free(Buffer);
        if ( v4 )
          return v4;
        else
          return sub_10011820(a2);
      }
      else
      {
        free(Buffer);
        return -894;
      }
    }
    else
    {
      free(Buffer);
      return -895;
    }
  }
  return result;
}

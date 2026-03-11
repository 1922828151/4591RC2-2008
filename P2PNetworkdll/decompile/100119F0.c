/*
 * func-name: sub_100119F0
 * func-address: 0x100119f0
 * callers: 0x100115f0
 * callees: 0x10011de0
 */

int __usercall sub_100119F0@<eax>(const char **a1@<ebx>, char **a2)
{
  int result; // eax
  unsigned int v3; // eax
  char *v4; // edi
  char *v5; // eax
  void *Block; // [esp+4h] [ebp-4h] BYREF

  if ( !a1 || !a2 )
    return -498;
  result = sub_10011DE0(&Block);
  if ( !result )
  {
    v3 = (unsigned int)&(*a1)[strlen(*a1) + 1];
    v4 = (char *)Block;
    v5 = (char *)malloc(strlen((const char *)Block) + v3 - (_DWORD)(*a1 + 1) + 27);
    *a2 = v5;
    if ( v5 )
    {
      sprintf(v5, "GET /%s HTTP/1.1\r\nHOST: %s\r\n\r\n", *a1, v4);
      free(v4);
      return 0;
    }
    else
    {
      free(v4);
      return -499;
    }
  }
  return result;
}

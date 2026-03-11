/*
 * func-name: sub_102887B0
 * func-address: 0x102887b0
 * callers: 0x100018a2
 * callees: none
 */

char *__cdecl sub_102887B0(char *Source, char *a2)
{
  char *result; // eax
  unsigned int *v4; // esi
  int v5; // eax
  unsigned int v6; // edi
  char *v7; // edx
  unsigned int v8; // ecx
  void *Sourcea; // [esp+8h] [ebp+4h]

  result = a2;
  if ( Source != a2 )
  {
    v4 = (unsigned int *)(Source + 4);
    if ( Source + 4 != a2 )
    {
      v5 = 4 - (_DWORD)Source;
      for ( Sourcea = (void *)(4 - (_DWORD)Source); ; v5 = (int)Sourcea )
      {
        v6 = *v4;
        v7 = (char *)v4;
        if ( *v4 >= *(_DWORD *)Source )
        {
          v8 = *(v4 - 1);
          for ( result = (char *)(v4 - 1); v6 < v8; result -= 4 )
          {
            *(_DWORD *)v7 = v8;
            v8 = *((_DWORD *)result - 1);
            v7 = result;
          }
          *(_DWORD *)v7 = v6;
        }
        else
        {
          result = (char *)(((int)v4 + v5 - 4) >> 2);
          if ( (int)result > 0 )
            result = (char *)memmove_s(&v4[-(_DWORD)result + 1], 4 * (_DWORD)result, Source, 4 * (_DWORD)result);
          *(_DWORD *)Source = v6;
        }
        if ( ++v4 == (unsigned int *)a2 )
          break;
      }
    }
  }
  return result;
}

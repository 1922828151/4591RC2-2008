/*
 * func-name: sub_1001EC90
 * func-address: 0x1001ec90
 * callers: 0x1001edd0, 0x1001ef60
 * callees: none
 */

int __cdecl sub_1001EC90(int a1, _BYTE *a2, _BYTE *a3, _DWORD *a4)
{
  int (__cdecl ***v5)(int, int, int, int); // esi
  int v6; // ecx
  int (__cdecl **v7)(int, int, int, int); // ecx

  if ( a2 == a3 )
    return -4;
  v5 = *(int (__cdecl ****)(int, int, int, int))(a1 + 72);
  if ( a2 + 1 == a3 )
    return -1;
  HIWORD(v6) = 0;
  BYTE1(v6) = *a2;
  LOBYTE(v6) = a2[1];
  if ( (unsigned __int16)v6 <= 0xFEFFu )
  {
    if ( (unsigned __int16)v6 == 65279 )
    {
      *a4 = a2 + 2;
      *v5 = (int (__cdecl **)(int, int, int, int))off_100300B4[0];
      return 14;
    }
    if ( v6 == 15360 )
      goto LABEL_18;
    if ( v6 == 61371 )
    {
      if ( a2 + 2 == a3 )
        return -1;
      if ( a2[2] == 0xBF )
      {
        *v5 = off_100300AC;
        return 14;
      }
LABEL_19:
      v7 = off_100300A4[*(char *)(a1 + 69)];
      *v5 = v7;
      return (*v7)((int)v7, (int)a2, (int)a3, (int)a4);
    }
LABEL_15:
    if ( !*a2 )
    {
      *v5 = (int (__cdecl **)(int, int, int, int))off_100300B4[0];
      return (*(int (__cdecl **)(_UNKNOWN **, _BYTE *, _BYTE *, _DWORD *))off_100300B4[0])(off_100300B4[0], a2, a3, a4);
    }
    if ( a2[1] )
      goto LABEL_19;
LABEL_18:
    *v5 = (int (__cdecl **)(int, int, int, int))off_100300B8;
    return ((int (__cdecl *)(_UNKNOWN **, _BYTE *, _BYTE *, _DWORD *))*off_100300B8)(off_100300B8, a2, a3, a4);
  }
  if ( v6 != 65534 )
    goto LABEL_15;
  *a4 = a2 + 2;
  *v5 = (int (__cdecl **)(int, int, int, int))off_100300B8;
  return 14;
}

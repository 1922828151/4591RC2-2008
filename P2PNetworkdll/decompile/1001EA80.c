/*
 * func-name: sub_1001EA80
 * func-address: 0x1001ea80
 * callers: 0x1001edb0
 * callees: none
 */

int __usercall sub_1001EA80@<eax>(unsigned __int8 *a1@<eax>, unsigned __int8 *a2@<esi>, int a3, int a4, _DWORD *a5)
{
  int v6; // edx
  int (__cdecl ***v7)(int, int, int, int); // edi
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // cl
  int (__cdecl **v12)(int, int, int, int); // ecx

  if ( a1 == a2 )
    return -4;
  v6 = a3;
  v7 = *(int (__cdecl ****)(int, int, int, int))(a3 + 72);
  if ( a1 + 1 == a2 )
  {
    if ( a4 != 1 || (unsigned __int8)(*(_BYTE *)(a3 + 69) - 3) <= 2u )
      return -1;
    v8 = *a1;
    if ( v8 > 0xEF )
    {
      if ( v8 - 254 > 1 )
        goto LABEL_44;
    }
    else if ( v8 != 239 )
    {
      if ( *a1 && v8 != 60 )
        goto LABEL_44;
      return -1;
    }
    if ( *(_BYTE *)(a3 + 69) )
      return -1;
LABEL_44:
    v12 = off_100300A4[*(char *)(v6 + 69)];
    *v7 = v12;
    return v12[a4]((int)v12, (int)a1, (int)a2, (int)a5);
  }
  HIWORD(v9) = 0;
  BYTE1(v9) = *a1;
  LOBYTE(v9) = a1[1];
  if ( (unsigned __int16)v9 <= 0xFEFFu )
  {
    if ( (unsigned __int16)v9 == 65279 )
    {
      if ( *(_BYTE *)(a3 + 69) || a4 != 1 )
      {
        *a5 = a1 + 2;
        *v7 = (int (__cdecl **)(int, int, int, int))off_100300B4[0];
        return 14;
      }
      goto LABEL_43;
    }
    if ( v9 == 15360 )
    {
      v11 = *(_BYTE *)(a3 + 69);
      if ( v11 != 4 && v11 != 3 || a4 != 1 )
        goto LABEL_40;
      goto LABEL_43;
    }
    if ( v9 == 61371 )
    {
      if ( a4 != 1 || (v10 = *(char *)(a3 + 69), *(_BYTE *)(a3 + 69)) && v10 != 4 && v10 != 5 && v10 != 3 )
      {
        if ( a1 + 2 == a2 )
          return -1;
        if ( a1[2] == 0xBF )
        {
          *v7 = off_100300AC;
          return 14;
        }
      }
      goto LABEL_43;
    }
LABEL_34:
    if ( !*a1 )
    {
      if ( a4 != 1 || *(_BYTE *)(a3 + 69) != 5 )
      {
        *v7 = (int (__cdecl **)(int, int, int, int))off_100300B4[0];
        return ((int (__cdecl *)(_UNKNOWN **, unsigned __int8 *, unsigned __int8 *, _DWORD *))off_100300B4[0][a4])(
                 off_100300B4[0],
                 a1,
                 a2,
                 a5);
      }
      goto LABEL_43;
    }
    if ( !a1[1] && a4 != 1 )
    {
LABEL_40:
      *v7 = (int (__cdecl **)(int, int, int, int))off_100300B8;
      return ((int (__cdecl *)(_UNKNOWN **, unsigned __int8 *, unsigned __int8 *, _DWORD *))off_100300B8[a4])(
               off_100300B8,
               a1,
               a2,
               a5);
    }
LABEL_43:
    v6 = a3;
    goto LABEL_44;
  }
  if ( v9 != 65534 )
    goto LABEL_34;
  if ( !*(_BYTE *)(a3 + 69) && a4 == 1 )
    goto LABEL_43;
  *a5 = a1 + 2;
  *v7 = (int (__cdecl **)(int, int, int, int))off_100300B8;
  return 14;
}

/*
 * func-name: sub_10020960
 * func-address: 0x10020960
 * callers: 0x1001f4a0, 0x10020910
 * callees: 0x10022450
 */

int __usercall sub_10020960@<eax>(int a1@<eax>, _DWORD *a2@<ecx>, int *a3, int a4, _DWORD *a5)
{
  bool v7; // zf
  int v8; // eax
  _DWORD *v9; // ebp
  _DWORD *v10; // edi
  int v11; // ecx
  int v12; // eax
  void (__cdecl *v13)(int, char *, int); // ecx
  void (__cdecl *v14)(_DWORD, int, int); // ecx
  void (__cdecl *v15)(int, int *, int, int *, int); // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  void (__cdecl *v19)(_DWORD); // ecx
  int v21; // [esp-Ch] [ebp-2Ch]
  int v22; // [esp-4h] [ebp-24h]
  int v23; // [esp-4h] [ebp-24h]
  char v24; // [esp+13h] [ebp-Dh] BYREF
  int v25; // [esp+14h] [ebp-Ch] BYREF
  int v26; // [esp+18h] [ebp-8h] BYREF
  int v27; // [esp+1Ch] [ebp-4h] BYREF

  v7 = a1 == a2[30];
  v8 = *a3;
  v26 = *a3;
  if ( v7 )
  {
    v9 = a2 + 61;
    a2[61] = v8;
    v10 = a2 + 62;
  }
  else
  {
    v9 = (_DWORD *)a2[64];
    v10 = v9 + 1;
  }
  *v9 = v8;
  *a3 = 0;
  while ( 1 )
  {
    v11 = (*(int (__cdecl **)(int, int, int, int *))(a1 + 8))(a1, v26, a4, &v25);
    v12 = v25;
    *v10 = v25;
    switch ( v11 )
    {
      case -4:
      case -1:
        if ( !a5 )
          return 20;
        *a5 = v26;
        return 0;
      case -2:
        if ( !a5 )
          return 6;
        *a5 = v26;
        return 0;
      case 0:
        *v9 = v12;
        return 4;
      case 6:
        v14 = (void (__cdecl *)(_DWORD, int, int))a2[12];
        if ( !v14 )
          goto LABEL_8;
        if ( *(_BYTE *)(a1 + 68) )
        {
          v14(a2[1], v26, v12 - v26);
          v26 = v25;
          *v9 = v25;
        }
        else
        {
          v22 = a2[9];
          v15 = *(void (__cdecl **)(int, int *, int, int *, int))(a1 + 56);
          v27 = a2[8];
          v15(a1, &v26, v12, &v27, v22);
          v16 = v27;
          *v10 = v25;
          ((void (__cdecl *)(_DWORD, _DWORD, int))a2[12])(a2[1], a2[8], v16 - a2[8]);
          v17 = v26;
          v12 = v25;
          if ( v26 == v25 )
            goto LABEL_17;
          do
          {
            *v9 = v17;
            v23 = a2[9];
            v27 = a2[8];
            (*(void (__cdecl **)(int, int *, int, int *, int))(a1 + 56))(a1, &v26, v12, &v27, v23);
            v18 = v27;
            *v10 = v25;
            ((void (__cdecl *)(_DWORD, _DWORD, int))a2[12])(a2[1], a2[8], v18 - a2[8]);
            v17 = v26;
            v12 = v25;
          }
          while ( v26 != v25 );
          v26 = v25;
          *v9 = v25;
        }
        break;
      case 7:
        v13 = (void (__cdecl *)(int, char *, int))a2[12];
        if ( v13 )
        {
          v21 = a2[1];
          v24 = 10;
          v13(v21, &v24, 1);
          v26 = v25;
          *v9 = v25;
        }
        else
        {
LABEL_8:
          if ( a2[17] )
          {
            sub_10022450(v26);
            v26 = v25;
            *v9 = v25;
          }
          else
          {
LABEL_17:
            v26 = v12;
            *v9 = v12;
          }
        }
        break;
      case 40:
        v19 = (void (__cdecl *)(_DWORD))a2[16];
        if ( v19 )
        {
          v19(a2[1]);
          *a3 = v25;
          return 0;
        }
        else
        {
          if ( a2[17] )
          {
            sub_10022450(v26);
            v12 = v25;
          }
          *a3 = v12;
          return 0;
        }
      default:
        abort();
    }
  }
}

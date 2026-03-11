/*
 * func-name: sub_1001DF70
 * func-address: 0x1001df70
 * callers: 0x1001e290
 * callees: 0x1001dee0, 0x1001df30
 */

int __usercall sub_1001DF70@<eax>(
        _DWORD *a1@<eax>,
        int a2@<ecx>,
        int a3@<edi>,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // ebp
  int v8; // esi
  int result; // eax
  void (__cdecl *v11)(int, int *, int, int **, char *); // edx
  int v12; // eax
  void (__cdecl *v13)(int, int *, int, int **, char *); // ecx
  int v14; // eax
  void (__cdecl *v15)(int, int *, int, int **, char *); // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  char v19; // bl
  int v20; // eax
  void (__cdecl *v21)(int, int *, int, int **, char *); // eax
  int v22; // ecx
  int *v23; // [esp+Ch] [ebp-8h] BYREF
  int v24; // [esp+10h] [ebp-4h] BYREF

  v7 = a4;
  v8 = a2;
  if ( a2 == a4 )
  {
    *a5 = 0;
    return 1;
  }
  else
  {
    v11 = *(void (__cdecl **)(int, int *, int, int **, char *))(a3 + 56);
    v23 = &a4;
    v24 = a2;
    v11(a3, &v24, a4, &v23, (char *)&a4 + 1);
    if ( v23 == &a4 )
      v12 = -1;
    else
      v12 = (char)a4;
    switch ( v12 )
    {
      case 9:
      case 10:
      case 13:
      case 32:
        while ( 2 )
        {
          v8 += *(_DWORD *)(a3 + 64);
          v13 = *(void (__cdecl **)(int, int *, int, int **, char *))(a3 + 56);
          v23 = &a4;
          v24 = v8;
          v13(a3, &v24, v7, &v23, (char *)&a4 + 1);
          if ( v23 == &a4 )
            v14 = -1;
          else
            v14 = (char)a4;
          switch ( v14 )
          {
            case 9:
            case 10:
            case 13:
            case 32:
              continue;
            default:
              if ( v8 == v7 )
              {
                *a5 = 0;
                return 1;
              }
              *a5 = v8;
              break;
          }
          break;
        }
        while ( 1 )
        {
          v15 = *(void (__cdecl **)(int, int *, int, int **, char *))(a3 + 56);
          v23 = &a4;
          v24 = v8;
          v15(a3, &v24, v7, &v23, (char *)&a4 + 1);
          if ( v23 == &a4 || (char)a4 == -1 )
            break;
          if ( (char)a4 == 61 )
          {
            *a1 = v8;
LABEL_21:
            if ( v8 == *a5 )
              goto LABEL_7;
            v8 += *(_DWORD *)(a3 + 64);
            v16 = sub_1001DEE0(a3, v8, v7);
            if ( sub_1001DF30(v16) )
            {
              do
              {
                v8 += *(_DWORD *)(a3 + 64);
                v18 = sub_1001DEE0(a3, v8, v7);
              }
              while ( sub_1001DF30(v18) );
            }
            if ( v17 != 34 && v17 != 39 )
            {
LABEL_44:
              *a7 = v8;
              return 0;
            }
            v8 += *(_DWORD *)(a3 + 64);
            v19 = v17;
            *a6 = v8;
            v20 = sub_1001DEE0(a3, v8, v7);
            if ( v20 == v19 )
            {
LABEL_37:
              *a7 = v8 + *(_DWORD *)(a3 + 64);
              return 1;
            }
            while ( v20 >= 97 && v20 <= 122
                 || v20 >= 65 && v20 <= 90
                 || v20 >= 48 && v20 <= 57
                 || v20 == 46
                 || v20 == 45
                 || v20 == 95 )
            {
              v8 += *(_DWORD *)(a3 + 64);
              v20 = sub_1001DEE0(a3, v8, v7);
              if ( v20 == v19 )
                goto LABEL_37;
            }
            break;
          }
          switch ( (char)a4 )
          {
            case 9:
            case 10:
            case 13:
            case 32:
              *a1 = v8;
              while ( 2 )
              {
                v8 += *(_DWORD *)(a3 + 64);
                v21 = *(void (__cdecl **)(int, int *, int, int **, char *))(a3 + 56);
                v23 = &a4;
                v24 = v8;
                v21(a3, &v24, v7, &v23, (char *)&a4 + 1);
                if ( v23 == &a4 )
                  v22 = -1;
                else
                  v22 = (char)a4;
                switch ( v22 )
                {
                  case 9:
                  case 10:
                  case 13:
                  case 32:
                    continue;
                  default:
                    if ( v22 != 61 )
                      goto LABEL_44;
                    goto LABEL_21;
                }
              }
            default:
              v8 += *(_DWORD *)(a3 + 64);
              break;
          }
        }
        *a7 = v8;
        result = 0;
        break;
      default:
LABEL_7:
        *a7 = v8;
        result = 0;
        break;
    }
  }
  return result;
}

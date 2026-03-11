/*
 * func-name: sub_10035650
 * func-address: 0x10035650
 * callers: 0x10035930
 * callees: 0x10034530, 0x10034c30, 0x10178098, 0x101a24ac, 0x101a251c, 0x101a252e, 0x101a253a
 */

int __userpurge sub_10035650@<eax>(WCHAR *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, LPCWCH lpWideCharStr)
{
  int result; // eax
  int i; // ebp
  int v8; // eax
  int v9; // ecx
  bool v10; // zf
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v16; // edi
  int v17; // [esp+48h] [ebp-248h]
  int v18; // [esp+4Ch] [ebp-244h]
  int v21; // [esp+70h] [ebp-220h] BYREF
  int v22; // [esp+74h] [ebp-21Ch]
  int v23; // [esp+78h] [ebp-218h]
  void *v24[3]; // [esp+7Ch] [ebp-214h] BYREF
  WCHAR Buffer[260]; // [esp+88h] [ebp-208h] BYREF

  sub_10034530(a1);
  *(_DWORD *)a1 = a4;
  result = sub_10034C30(a1, lpWideCharStr);
  if ( result >= 0 )
  {
    memset(Buffer, 0, sizeof(Buffer));
    GetCurrentDirectoryW(0x104u, Buffer);
    SetCurrentDirectoryW(a1 + 34);
    for ( i = 0; i < *((_DWORD *)a1 + 15); ++i )
    {
      v8 = *((_DWORD *)a1 + 14);
      v9 = *(_DWORD *)(v8 + 4 * i);
      v10 = *(_WORD *)(v9 + 566) == 0;
      v23 = v9;
      if ( !v10 )
      {
        v22 = 0;
        if ( i > 0 )
        {
          v11 = v8;
          while ( wcscmp((const unsigned __int16 *)(*(_DWORD *)v11 + 566), (const unsigned __int16 *)(v9 + 566)) )
          {
            v11 += 4;
            if ( ++v22 >= i )
              goto LABEL_11;
            v9 = v23;
          }
          *(_DWORD *)(v23 + 1088) = *(_DWORD *)(*(_DWORD *)v11 + 1088);
        }
      }
LABEL_11:
      ;
    }
    SetCurrentDirectoryW(Buffer);
    v18 = *((_DWORD *)a1 + 6);
    v17 = *((_DWORD *)a1 + 9) / 3;
    v21 = 0;
    result = D3DXCreateMesh(v17, v18, 545, &unk_10280508, a4, &v21);
    if ( result >= 0 )
    {
      result = (*(int (__stdcall **)(int, _DWORD, void **))(*(_DWORD *)v21 + 60))(v21, 0, v24);
      if ( result >= 0 )
      {
        memcpy(v24[0], *((const void **)a1 + 5), 32 * *((_DWORD *)a1 + 6));
        (*(void (__stdcall **)(int, int, int))(*(_DWORD *)v21 + 64))(v21, a3, a2);
        if ( *((_DWORD *)a1 + 5) )
        {
          free(*((void **)a1 + 5));
          *((_DWORD *)a1 + 5) = 0;
        }
        v12 = v23;
        *((_DWORD *)a1 + 7) = 0;
        *((_DWORD *)a1 + 6) = 0;
        result = (*(int (__stdcall **)(int))(*(_DWORD *)v12 + 68))(v12);
        if ( result >= 0 )
        {
          memcpy(v24[2], *((const void **)a1 + 8), 4 * *((_DWORD *)a1 + 9));
          (*(void (__stdcall **)(int, _DWORD, WCHAR *))(*(_DWORD *)v21 + 72))(v21, 0, &Buffer[2]);
          if ( *((_DWORD *)a1 + 8) )
          {
            free(*((void **)a1 + 8));
            *((_DWORD *)a1 + 8) = 0;
          }
          v13 = v23;
          *((_DWORD *)a1 + 10) = 0;
          *((_DWORD *)a1 + 9) = 0;
          result = (*(int (__stdcall **)(int))(*(_DWORD *)v13 + 96))(v13);
          if ( result >= 0 )
          {
            memcpy(v24[1], *((const void **)a1 + 11), 4 * *((_DWORD *)a1 + 12));
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v21 + 100))(v21, 0);
            if ( *((_DWORD *)a1 + 11) )
            {
              free(*((void **)a1 + 11));
              *((_DWORD *)a1 + 11) = 0;
            }
            v14 = v22;
            *((_DWORD *)a1 + 13) = 0;
            *((_DWORD *)a1 + 12) = 0;
            v15 = (*(int (__cdecl **)(int))(*(_DWORD *)v14 + 16))(v14);
            v16 = operator new(12 * v15);
            if ( v16 )
            {
              (*(void (__stdcall **)(int, _DWORD, void *))(*(_DWORD *)v21 + 80))(v21, 0, v16);
              (*(void (__stdcall **)(int, int, void *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v21 + 108))(
                v21,
                100663296,
                v16,
                0,
                0,
                0);
              operator delete[](v16);
              *((_DWORD *)a1 + 1) = v21;
              return 0;
            }
            else
            {
              return -2147024882;
            }
          }
        }
      }
    }
  }
  return result;
}

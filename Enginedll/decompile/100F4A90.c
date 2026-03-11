/*
 * func-name: sub_100F4A90
 * func-address: 0x100f4a90
 * callers: 0x100f4bf0, 0x100f4c40
 * callees: 0x100e2700, 0x100f37e0
 */

int __userpurge sub_100F4A90@<eax>(int a1@<ecx>, int a2@<esi>, unsigned int a3, int a4, int a5)
{
  int (__stdcall *v6)(int, unsigned int, int, int *); // eax
  int v7; // ebp
  int v8; // eax
  unsigned int i; // esi
  void (__stdcall *v10)(int, unsigned int, int *); // eax
  int v11; // eax
  int v13; // [esp+24h] [ebp-48h]
  int v15; // [esp+40h] [ebp-2Ch] BYREF
  _BYTE v16[4]; // [esp+44h] [ebp-28h] BYREF
  unsigned int *v17; // [esp+48h] [ebp-24h] BYREF
  _DWORD v18[4]; // [esp+50h] [ebp-1Ch] BYREF
  int v19; // [esp+68h] [ebp-4h]

  v15 = 0;
  v13 = *(_DWORD *)(a1 + 16);
  v6 = *(int (__stdcall **)(int, unsigned int, int, int *))(*(_DWORD *)v13 + 12);
  v19 = 0;
  v7 = v6(v13, a3, a4, &v15);
  v8 = v15;
  if ( v7 >= 0 )
  {
    a3 = 0;
    (*(void (__stdcall **)(int, unsigned int *))(*(_DWORD *)v15 + 16))(v15, &a3);
    for ( i = 0; i < a3; ++i )
    {
      a4 = 0;
      v10 = *(void (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v15 + 20);
      LOBYTE(v19) = 1;
      v10(v15, i, &a4);
      (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)a4 + 32))(a4, v18);
      if ( sub_100E2700(v18, dword_101C861C) )
      {
        sub_100F37E0((float *)a1, a4);
      }
      else if ( sub_100E2700(v18, dword_10214990) )
      {
        (*(void (__stdcall **)(int, unsigned int **, _BYTE *, int))(*(_DWORD *)a4 + 24))(a4, &v17, v16, a2);
        v11 = a5;
        *(float *)(a1 + 20) = (float)*v17;
        a2 = v11;
        (*(void (**)(void))(*(_DWORD *)v11 + 28))();
      }
      LOBYTE(v19) = 0;
      if ( a4 )
        (*(void (__stdcall **)(int))(*(_DWORD *)a4 + 8))(a4);
    }
    v8 = v15;
  }
  v19 = -1;
  if ( v8 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8);
  return v7;
}

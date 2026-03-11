/*
 * func-name: sub_1002D130
 * func-address: 0x1002d130
 * callers: 0x1002d2a0
 * callees: 0x10014910, 0x100149b0, 0x1002cdb0, 0x10034f10
 */

int __thiscall sub_1002D130(int this, int a2, unsigned int a3, int a4)
{
  int (__stdcall ***v5)(size_t, int); // eax
  void *v6; // ebp
  int v7; // eax
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  int (__stdcall ***v14)(size_t, int); // eax
  int v15; // esi
  void *v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+14h] [ebp-1Ch]
  _DWORD v19[4]; // [esp+18h] [ebp-18h] BYREF
  int v20; // [esp+28h] [ebp-8h]
  int v21; // [esp+2Ch] [ebp-4h]
  int v22; // [esp+3Ch] [ebp+Ch]

  v5 = sub_10014910();
  v6 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v5)(
                 v5,
                 4 * *(_DWORD *)(this + 228),
                 1);
  v17 = v6;
  memset(v6, 255, 4 * *(_DWORD *)(this + 228));
  if ( *(_BYTE *)(this + 288) )
    *(_DWORD *)(this + 232) = 0;
  v7 = *(_DWORD *)(this + 248);
  v18 = *(_DWORD *)(this + 232);
  v8 = 0;
  v19[0] = *(_DWORD *)(this + 252);
  v19[1] = v7;
  v19[2] = v6;
  v21 = a4;
  if ( a3 )
  {
    do
    {
      v9 = *(_DWORD *)(this + 248);
      v20 = *(_DWORD *)(a2 + 4 * v8);
      v10 = *(_DWORD *)(48 * v20 + v9 + 28);
      v11 = *(_DWORD *)(48 * v20 + v9 + 16);
      v12 = v9 + 48 * v20;
      v13 = *(_DWORD *)(v12 + 20);
      v19[3] = v10;
      v22 = v13;
      sub_1002CDB0(v19, *(_DWORD *)(v12 + 12), (_DWORD *)(this + 232), 0);
      sub_1002CDB0(v19, v11, (_DWORD *)(this + 232), 1);
      sub_1002CDB0(v19, v22, (_DWORD *)(this + 232), 2);
      ++v8;
    }
    while ( v8 < a3 );
    v6 = v17;
  }
  if ( v6 )
  {
    v14 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), void *))(*v14)[3])(v14, v6);
  }
  v15 = *(_DWORD *)(this + 232) - v18;
  if ( *(_DWORD *)(this + 180) == *(_DWORD *)(this + 176) )
    sub_100149B0((void *)(this + 176), 1);
  *(_DWORD *)(*(_DWORD *)(this + 184) + 4 * (*(_DWORD *)(this + 180))++) = a3;
  if ( *(_DWORD *)(this + 180) == *(_DWORD *)(this + 176) )
    sub_100149B0((void *)(this + 176), 1);
  *(_DWORD *)(*(_DWORD *)(this + 184) + 4 * (*(_DWORD *)(this + 180))++) = v15;
  return v15;
}

/*
 * func-name: sub_10019FC0
 * func-address: 0x10019fc0
 * callers: none
 * callees: 0x10014910, 0x10019e80
 */

char __thiscall sub_10019FC0(_DWORD *this, int a2)
{
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int (__stdcall ***v8)(size_t, int); // eax
  unsigned int v9; // ebp
  int (__stdcall ***v10)(size_t, int); // eax
  int v11; // ecx
  unsigned int *v12; // eax
  _DWORD *v13; // eax
  int v14; // [esp-8h] [ebp-18h]
  int v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v3 = a2;
  if ( !a2 )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 36);
  if ( *(_DWORD *)(a2 + 16) != 2 * v5 - 1 )
    return 0;
  v6 = v5 - 1;
  if ( this[1] != v6 )
  {
    v7 = this[2];
    this[1] = v6;
    if ( v7 )
    {
      v8 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v8)[3])(v8, v7 - 4);
      this[2] = 0;
    }
    v9 = this[1];
    v10 = sub_10014910();
    v11 = (unsigned __int64)v9 >> 27 != 0 ? -1 : 32 * v9;
    v12 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v10)(
                            v10,
                            __CFADD__(v11, 4) ? -1 : v11 + 4,
                            31);
    if ( v12 )
    {
      *v12 = v9;
      v13 = v12 + 1;
    }
    else
    {
      v13 = 0;
    }
    this[2] = v13;
    if ( v13 )
    {
      v3 = a2;
      goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  v15 = *(_DWORD *)(v3 + 4);
  v14 = this[2];
  v16 = 1;
  sub_10019E80(v14, 0, &v16, v15);
  return 1;
}

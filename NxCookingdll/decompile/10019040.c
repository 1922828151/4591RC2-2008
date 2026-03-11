/*
 * func-name: sub_10019040
 * func-address: 0x10019040
 * callers: none
 * callees: 0x10014910, 0x10018f00
 */

char __thiscall sub_10019040(_DWORD *this, int a2)
{
  int v3; // ecx
  int v5; // eax
  int v6; // edi
  int (__stdcall ***v7)(size_t, int); // eax
  unsigned int v8; // ebp
  int (__stdcall ***v9)(size_t, int); // eax
  int v10; // ecx
  unsigned int *v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp-8h] [ebp-18h]
  int v14; // [esp+4h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v3 = a2;
  if ( !a2 )
    return 0;
  v5 = *(_DWORD *)(a2 + 16);
  if ( v5 != 2 * *(_DWORD *)(*(_DWORD *)(a2 + 4) + 36) - 1 )
    return 0;
  if ( this[1] != v5 )
  {
    v6 = this[2];
    this[1] = v5;
    if ( v6 )
    {
      v7 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v7)[3])(v7, v6 - 4);
      this[2] = 0;
    }
    v8 = this[1];
    v9 = sub_10014910();
    v10 = (36 * (unsigned __int64)v8) >> 32 != 0 ? -1 : 36 * v8;
    v11 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v9)(
                            v9,
                            __CFADD__(v10, 4) ? -1 : v10 + 4,
                            30);
    if ( v11 )
    {
      *v11 = v8;
      v12 = v11 + 1;
    }
    else
    {
      v12 = 0;
    }
    this[2] = v12;
    if ( v12 )
    {
      v3 = a2;
      goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  v14 = *(_DWORD *)(v3 + 4);
  v13 = this[2];
  v15 = 1;
  sub_10018F00(v13, 0, &v15, v14);
  return 1;
}

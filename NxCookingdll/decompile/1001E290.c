/*
 * func-name: sub_1001E290
 * func-address: 0x1001e290
 * callers: 0x1001e350, 0x1001e400
 * callees: 0x10014910, 0x10030120, 0x10030130, 0x10030140
 */

char __thiscall sub_1001E290(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // edx
  int v7; // edi
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // [esp+8h] [ebp-14h] BYREF
  int v10; // [esp+Ch] [ebp-10h]
  int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v2 = sub_10014910();
  v3 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v2)(v2, 20, 4);
  if ( v3 )
    v4 = sub_10030120(v3);
  else
    v4 = 0;
  this[4] = v4;
  if ( !v4 )
    return 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  v12 = 0;
  v6 = (_DWORD *)this[3];
  v9 = v6[3];
  v10 = v6[1];
  v11 = v6[2];
  LOBYTE(v13) = 1;
  if ( (unsigned __int8)sub_10030140(&v9) )
  {
    *(_DWORD *)(this[3] + 84) = this[4] + 4;
    return 1;
  }
  else
  {
    v7 = this[4];
    if ( v7 )
    {
      sub_10030130((_DWORD *)this[4]);
      v8 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v8)[3])(v8, v7);
      this[4] = 0;
    }
    return 0;
  }
}

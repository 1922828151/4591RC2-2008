/*
 * func-name: sub_10017AC0
 * func-address: 0x10017ac0
 * callers: none
 * callees: 0x10014910, 0x100167a0, 0x100175f0
 */

char __thiscall sub_10017AC0(_DWORD *this, int a2)
{
  char result; // al
  int (__stdcall ***v5)(size_t, int); // eax
  int v6; // ebx
  int (__stdcall ***v7)(size_t, int); // eax
  char v8; // bl
  char v9; // al
  bool v10; // bl
  int v11; // eax
  unsigned int v12; // ebp
  int (__stdcall ***v13)(size_t, int); // eax
  int v14; // ecx
  unsigned int *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // eax
  int (__stdcall ***v19)(size_t, int); // eax
  int v20; // eax
  int v21; // eax
  char v22; // [esp+17h] [ebp-5h]
  char v23; // [esp+18h] [ebp-4h]
  char v24; // [esp+20h] [ebp+4h]
  unsigned int v25; // [esp+20h] [ebp+4h]
  unsigned int v26; // [esp+20h] [ebp+4h]
  int v27; // [esp+20h] [ebp+4h]
  unsigned int v28; // [esp+20h] [ebp+4h]

  result = sub_100175F0(this, a2);
  if ( result )
  {
    if ( this[8] )
    {
      v5 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v5)[3])(v5, this[8]);
      this[8] = 0;
    }
    v6 = this[6];
    if ( v6 )
    {
      v7 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v7)[3])(v7, v6 - 4);
      this[6] = 0;
    }
    this[5] = 0;
    this[7] = 0;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v8 == 72 && v24 == 66 && v22 == 77 )
    {
      v10 = v9 != 1;
      v23 = v9 != 1;
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
      v12 = v11;
      if ( v10 )
      {
        HIBYTE(v25) = v11;
        LOBYTE(v25) = HIBYTE(v11);
        BYTE1(v25) = BYTE2(v11);
        BYTE2(v25) = BYTE1(v11);
        v12 = v25;
      }
      this[5] = v12;
      if ( v12 <= 1 )
        goto LABEL_19;
      v13 = sub_10014910();
      v14 = (unsigned __int64)v12 >> 30 != 0 ? -1 : 4 * v12;
      v15 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v13)(
                              v13,
                              __CFADD__(v14, 4) ? -1 : v14 + 4,
                              39);
      if ( v15 )
      {
        *v15 = v12;
        v16 = v15 + 1;
      }
      else
      {
        v16 = 0;
      }
      this[6] = v16;
      if ( v16 )
      {
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
        v10 = v23;
        v26 = v17;
        if ( v23 )
        {
          HIBYTE(v26) = v17;
          LOBYTE(v26) = HIBYTE(v17);
          BYTE1(v26) = BYTE2(v17);
          BYTE2(v26) = BYTE1(v17);
        }
        sub_100167A0(v26, this[5], this[6], a2, v23);
LABEL_19:
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
        if ( v10 )
        {
          HIBYTE(v27) = v18;
          LOBYTE(v27) = HIBYTE(v18);
          BYTE1(v27) = BYTE2(v18);
          BYTE2(v27) = BYTE1(v18);
          v18 = v27;
        }
        this[7] = v18;
        if ( !v18 )
          return 1;
        v19 = sub_10014910();
        v20 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v19)(v19, 4 * this[7], 62);
        this[8] = v20;
        if ( v20 )
        {
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
          v28 = v21;
          if ( v10 )
          {
            HIBYTE(v28) = v21;
            LOBYTE(v28) = HIBYTE(v21);
            BYTE1(v28) = BYTE2(v21);
            BYTE2(v28) = BYTE1(v21);
          }
          sub_100167A0(v28, this[7], this[8], a2, v23);
          return 1;
        }
      }
    }
    return 0;
  }
  return result;
}
